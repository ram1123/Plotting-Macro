# -*- coding: utf-8 -*-
# @Author: Ram Krishna Sharma
# @Author Email: ram.krishna.sharma@cern.ch
# @Date:   2021-06-10
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-06-10
import uproot
import argparse
import matplotlib.pyplot as plt
import os
import numpy
import matplotlib.colors as mcolors

pick_color = []
# print mcolors
# print "===="
# print mcolors.TABLEAU_COLORS
# print "===="
names = list(mcolors.TABLEAU_COLORS)
# print "===="
for i, name in enumerate(names):
    # print "***> ",mcolors.TABLEAU_COLORS[name]
    pick_color.append(mcolors.TABLEAU_COLORS[name])

parser = argparse.ArgumentParser(formatter_class=argparse.RawDescriptionHelpFormatter,
    description='''
    Example Command:
    ----------------
    python ReadTree.py -i InputRootFile.root  -t TreeName  --dir temp -var_file variableListToPlot.py

    ----------------
    '''
    )
parser.add_argument('-i', '--input_file',
    default='TnP_ntuple.root',
    type=str,
    help='Input root file'
    )
parser.add_argument('-l', '--label',
    default='TnP',
    type=str,
    help='labels corresponding to input root file'
    )
parser.add_argument('-t', '--tree_name',
    default='Ana/passedEvents',
    type=str,
    help='tree name of input root file'
    )
parser.add_argument('-var_file', '--var_file',
    default="Variables_Simple1DPlots.py",
    type=str,
    help='text file having list of all variables.'
    )
parser.add_argument('-d', '--debug',
    default=False,
    type=bool,
    help='debug true or false'
    )
parser.add_argument('-v', '--var_set_to_plot',
    default="nJettiness",
    type=str,
    help='''
    Which variable set to plot.
    This should be defined as dictionary in the args.var_file.'''
    # choices=["nJettiness", "mela", "others", "nJettinessMELA","all"]
    )
parser.add_argument('-dir', '--dir_to_save_plots',
    default="tmp_plots",
    type=str,
    help='Directory name to keep plots'
    )
args = parser.parse_args()
# print(args.accumulate(args.integers))

if not os.path.isdir(args.dir_to_save_plots):
    os.makedirs(args.dir_to_save_plots)

input_root_file_list = (args.input_file).split(",")

Number_of_input_files = len(input_root_file_list)

file = []
tree = []
branches = []
for count,input_file in enumerate(input_root_file_list):
    file.append(uproot.open(input_file))
    # if (args.debug): print file[count]
    # if (args.debug): print file[count].keys()
    tree.append(file[count][args.tree_name])
    # if (args.debug): print tree[count].keys()
    branches.append(tree[count].arrays())
    # number_of_branches = len(branches[count])
    # print "number_of_branches: ",number_of_branches
# file = uproot.open(args.input_file)
# if (args.debug): print(file)
# if (args.debug): print(file.keys())

# tree = file[args.tree_name]
# if (args.debug):
#     print(tree.keys())
    # print(tree)

# if (args.debug):
    # print("|{count:5} | {branch_name:46} |".format(count="count", branch_name="Branch Name"))
    # print("|{count:5} | {branch_name:46} |".format(count="---", branch_name="---"))
    # for i,name in enumerate(tree.arrays()):
        # print("|{count:5} | {branch_name:46} |".format(count=i, branch_name=name))
        # if i>11: break

# branches = tree.arrays()
number_of_branches = len(branches[0])
number_of_branches2 = len(branches[1])

print("Number of branches: {}, {}".format(number_of_branches,number_of_branches2))


import sys
cwd = os.getcwd()
sys.path.insert(0, cwd)  # mypath = path of module to be imported
variableListToPlot = __import__((args.var_file).replace(".py","")) # __import__ accepts string

# branchesToPlot  = variableListToPlot.nJettinessMELA
branchesToPlot  = getattr(variableListToPlot, args.var_set_to_plot)

total_number_of_plots = len(branchesToPlot)

print total_number_of_plots
for count, var_plots in enumerate(sorted(branchesToPlot)):
    print("===> Plotting branch: {0:3}/{1:<3}, {2:40}, {3:25}".format(
        count+1,total_number_of_plots,
        var_plots,
        branchesToPlot[var_plots]
        )
    )
    # print "\t",len(var_plots)/4.0
    # InputFilePos = 0
    for InputFilePos in range(Number_of_input_files):
        # print "x: ",x
        plt.ioff() # to turn off the displaying plots.
        # print var_plots[count],var_plots[count+1], var_plots[count+2],var_plots[count+3]
        plt.hist(branches[InputFilePos][var_plots],
            # bins=branchesToPlot[var_plots][0],
            bins=branchesToPlot[var_plots][0],
            range=(branchesToPlot[var_plots][1], branchesToPlot[var_plots][2]),
            label=(args.label).split(",")[InputFilePos],
            # alpha=0.6,
            fill=False,
            linewidth=2,
            # facecolor='c',
            # hatch='/',
            # edgecolor='red',
            edgecolor=pick_color[InputFilePos],
            histtype='step'
            # normed=True,
            )
        # InputFilePos = InputFilePos+1
        # print("n = {}, \nbins = {}, \npatches = {}".format(n,bins,patches))
        # print "type(n): ",type(n)
        # print("type(n): {}".format(str(type(n))))
        # converting list to array
        # arr = numpy.array(n)
        # print "Sum: ",numpy.sum(n)
        # plt.xlabel(var_plots[count],fontsize=15)
        plt.xlabel("")
        plt.ylabel('Number of events',fontsize=15)
        plt.legend(loc='best')
        plt.tight_layout()
        # plt.text(30,400,"Entries: "+str(numpy.sum(n)))
        # plt.show()
    plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'.png')
    plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'.pdf')
    # # plt.yscale('log')
    # # plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'_log.png')
    # # plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'_log.pdf')
    # # plt.yscale('linear')
    plt.close()



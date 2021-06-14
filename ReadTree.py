# -*- coding: utf-8 -*-
# @Author: Ram Krishna Sharma
# @Author Email: ram.krishna.sharma@cern.ch
# @Date:   2021-06-02
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-06-11
import uproot
import argparse
import matplotlib.pyplot as plt
import os
import numpy

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
parser.add_argument('-logY', '--logY',
    default=False,
    type=bool,
    help='make y-axis as log: true/false'
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

file = uproot.open(args.input_file)
if (args.debug): print(file)
if (args.debug): print(file.keys())

tree = file[args.tree_name]
if (args.debug):
#     print(tree.keys())
    print(tree)

# print "type: ",type(tree.arrays())
# print tree.arrays()

# list_of_branches = list((tree.arrays()).keys())

# # print "type(list_of_branches):",type(list_of_branches)
# # list_of_branches_sorted = (list(list_of_branches)).sort()
# list_of_branches_sorted = sorted(list_of_branches)
# # print "type(list_of_branches):",type(list_of_branches_sorted)
# # print "(list_of_branches):",(list_of_branches)
# # print "(list_of_branches):",(list_of_branches_sorted)
# if (True):
#     print("|{count:5} | {branch_name:46} |".format(count="count", branch_name="Branch Name"))
#     print("|{count:5} | {branch_name:46} |".format(count="---", branch_name="---"))
#     # for i,name in enumerate((tree.arrays()).sort()):
#     for i,name in enumerate(list_of_branches_sorted):
#         print("|{count:5} | {branch_name:46} |".format(count=i, branch_name=name))
#         # if i>11: break

branches = tree.arrays()
number_of_branches = len(branches)


import sys
cwd = os.getcwd()
sys.path.insert(0, cwd)  # mypath = path of module to be imported
variableListToPlot = __import__((args.var_file).replace(".py","")) # __import__ accepts string

branchesToPlot  = getattr(variableListToPlot, args.var_set_to_plot)

total_number_of_plots = len(branchesToPlot)
for count,var_plots in enumerate(sorted(branchesToPlot)):
    plt.ioff() # to turn off the displaying plots.
    print("===> Plotting branch: {0:3}/{1:<3}, {2:19}, {3:45}".format(
        count+1,total_number_of_plots,
        branchesToPlot[var_plots],
        var_plots
        )
    )
    n, bins, patches = plt.hist(branches[var_plots],
        bins='auto',
        range=(branchesToPlot[var_plots][1], branchesToPlot[var_plots][2]),
        label=var_plots,
        # alpha=0.6,
        fill=False,
        linewidth=2,
        # facecolor='c',
        # hatch='/',
        edgecolor='red',
        histtype='step',
        # normed=True,
        )
    # print("n = {}, \nbins = {}, \npatches = {}".format(n,bins,patches))
    # print "type(n): ",type(n)
    # print("type(n): {}".format(str(type(n))))
    # print "Entries: ",numpy.sum(n)
    plt.xlabel(branchesToPlot[var_plots][3],fontsize=15)
    plt.ylabel('Number of events',fontsize=15)
    # plt.legend(loc='best')
    plt.tight_layout()
    # plt.text(30,400,"Entries: "+str(numpy.sum(n)))
    # plt.show()
    plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'.png')
    plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'.pdf')
    if (args.logY):
        plt.yscale('log')
        plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'_log.png')
        plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'_log.pdf')
        plt.yscale('linear')
    plt.close()

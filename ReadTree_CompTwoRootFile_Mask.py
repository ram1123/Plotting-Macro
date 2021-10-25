# -*- coding: utf-8 -*-
# @Author: Ram Krishna Sharma
# @Author Email: ram.krishna.sharma@cern.ch
# @Date:   2021-06-10
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-06-30
import uproot
import argparse
import matplotlib
matplotlib.use('Agg')
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
parser.add_argument('-il', '--inputFileLocation',
    default='./',
    type=str,
    help='location of input files'
    )
parser.add_argument('-i', '--input_file',
    default='TnP_ntuple.root,TnP_ntuple.root',
    type=str,
    help='Input root file'
    )
parser.add_argument('-t', '--tree_name',
    default='ntupler/EventTree',
    type=str,
    help='tree name of input root file'
    )
parser.add_argument('-l', '--label',
    default='ntupler/EventTree',
    type=str,
    help='label name for each input root file'
    )
parser.add_argument('-var_file', '--var_file',
    default="Variables_CompTwoRootFile.py",
    type=str,
    help='text file having list of all variables.'
    )
parser.add_argument('-d', '--debug',
    default=True,
    type=bool,
    help='debug true or false'
    )
parser.add_argument('-v', '--var_set_to_plot',
    default="VarSet1",
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
parser.add_argument('-logY', '--logY',
    default=True,
    type=bool,
    help='make y-axis as log: true/false'
    )
parser.add_argument('-DataPosition', '--DataPosition',
    default=-1,
    type=int,
    help='Apply the data SB cut or not?, -1 means no SB cut. If you specify the data position then it will apply the SB cut on the particular position root file.'
    )
args = parser.parse_args()
# print(args.accumulate(args.integers))

if not os.path.isdir(args.dir_to_save_plots):
    os.makedirs(args.dir_to_save_plots)

if (args.debug): print args.input_file

if (args.debug): print "Number of root files: ",len((args.input_file).split(","))

input_root_file_list = (args.input_file).split(",")
input_tree_list = (args.tree_name).split(",")
input_label_list = (args.label).split(",")

if (args.debug): print "Input root files: ",input_root_file_list

root_files = []
trees = []
branches = []

import sys
cwd = os.getcwd()
sys.path.insert(0, cwd)  # mypath = path of module to be imported
variableListToPlot = __import__((args.var_file).replace(".py","")) # __import__ accepts string

branchesToPlot  = getattr(variableListToPlot, args.var_set_to_plot)

total_number_of_plots = len(branchesToPlot)

GrabBranches = []
if (args.DataPosition != -1):
    GrabBranches = branchesToPlot.keys()
    GrabBranches.append('diphoton_m')

for count,files in enumerate(input_root_file_list):
    root_files.append(uproot.open(files))
    if (args.debug): print root_files[count]
    if (args.debug): print root_files[count].keys()
    trees.append(root_files[count][input_tree_list[count]])
    # if (args.debug): print trees[count].keys()
    branches.append(trees[count].arrays(GrabBranches))
    number_of_branches = len(branches[count])
    print "number_of_branches: ",number_of_branches


# if (args.debug):
#     print("|{count:5} | {branch_name:46} |".format(count="count", branch_name="Branch Name"))
#     print("|{count:5} | {branch_name:46} |".format(count="---", branch_name="---"))
#     for i,name in enumerate(tree.arrays()):
#         print("|{count:5} | {branch_name:46} |".format(count=i, branch_name=name))
#         if i>11: break

# print branches[0]['run']
# print branches[1]['run']

# print len(branches[0]['run'])
# print len(branches[1]['run'])
# DataSB_mask = (branches[3]['diphoton_m'] < 115 or branches[3]['diphoton_m'] > 135)

print total_number_of_plots

for count,var_plots in enumerate(sorted(branchesToPlot)):
    plt.ioff() # to turn off the displaying plots.
    print("===> Plotting branch: {0:3}/{1:<3}, {2:19}, {3:45}".format(
        count+1,total_number_of_plots,
        branchesToPlot[var_plots],
        var_plots
        )
    )
    color_count = 0
    for fileCount in range(0, len(input_root_file_list)):
        if fileCount == args.DataPosition:
            print("Applied the data SB cut on ",input_root_file_list[fileCount])
            DataLB_mask = branches[fileCount]['diphoton_m'] > 115
            DataUB_mask = branches[fileCount]['diphoton_m'] < 135
            n, bins, patches = plt.hist(branches[fileCount][var_plots][~(DataLB_mask & DataUB_mask)],
                bins='auto',
                range=(branchesToPlot[var_plots][1], branchesToPlot[var_plots][2]),
                label=input_label_list[fileCount],
                # alpha=0.6,
                fill=False,
                linewidth=2,
                # facecolor='c',
                # hatch='/',
                # edgecolor='red',
                edgecolor=pick_color[color_count],
                histtype='step',
                density=True
                )
        else:
            n, bins, patches = plt.hist(branches[fileCount][var_plots],
                bins='auto',
                range=(branchesToPlot[var_plots][1], branchesToPlot[var_plots][2]),
                label=input_label_list[fileCount],
                # alpha=0.6,
                fill=False,
                linewidth=2,
                # facecolor='c',
                # hatch='/',
                # edgecolor='red',
                edgecolor=pick_color[color_count],
                histtype='step',
                density=True
                )
        color_count = color_count+1
        # print("n = {}, \nbins = {}, \npatches = {}".format(n,bins,patches))
    # print "type(n): ",type(n)
    # print("type(n): {}".format(str(type(n))))
    # print "Entries: ",numpy.sum(n)
    plt.xlabel(branchesToPlot[var_plots][3],fontsize=15)
    plt.ylabel('Number of events',fontsize=15)
    plt.legend(loc=2)
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

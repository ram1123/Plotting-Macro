# -*- coding: utf-8 -*-
# @Author: Ram Krishna Sharma
# @Author Email: ram.krishna.sharma@cern.ch
# @Date:   2021-06-02
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-06-02
import uproot
import argparse
import matplotlib.pyplot as plt
import os

parser = argparse.ArgumentParser(description='')
parser.add_argument('-i', '--input_file',
                default='TnP_ntuple.root',
                type=str,
                help='Input root file'
                )
parser.add_argument('-t', '--tree_name',
                default='',
                type=str,
                help='tree name of input root file'
                )
parser.add_argument('-nBin', '--nBin',
                default=100,
                type=int,
                help='number of bins'
                )
parser.add_argument('-xmin', '--xmin',
                default=0,
                type=int,
                help='min value of x-axis'
                )
parser.add_argument('-xmax', '--xmax',
                default=10,
                type=int,
                help='max value of x-axis'
                )
parser.add_argument('-d', '--debug',
                default=True,
                type=bool,
                help='debug true or false'
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
# if (args.debug): print(file)
# if (args.debug): print(file.keys())

tree = file[args.tree_name]
# if (args.debug):
#     print(tree.keys())
    # print(tree)

# print("|{count:5} | {branch_name:46} |".format(count="count", branch_name="Branch Name"))
# print("|{count:5} | {branch_name:46} |".format(count="---", branch_name="---"))
# for i,name in enumerate(tree.arrays()):
#     print("|{count:5} | {branch_name:46} |".format(count=i, branch_name=name))
#     if i>11: break

branches = tree.arrays()
number_of_branches = len(branches)

branchesToPlot = []

for count,branch in enumerate(branches):
    # print("{0:3}/{1:<3}: {2:45}".format(count,number_of_branches,branch))
    if "D_" in branch:
        print("{0:3}/{1:<3}: {2:45}".format(count,number_of_branches,branch))
        branchesToPlot.append(branch)

total_number_of_plots = len(branchesToPlot)
for count,var_plots in enumerate(branchesToPlot):
    print("Plotting branch: {0:3}/{1:<3}, {2:45}".format(
        count+1,total_number_of_plots,
        var_plots
        )
    )
    # create the histogram
    (nEntries, bins, patches) = plt.hist(branches[var_plots],
        bins=args.nBin,
        range=(args.xmin,args.xmax),
        label=var_plots,
        # normed=True,
        # alpha=0.6 # uncomment if plotting one top of another
        )
    plt.xlabel(var_plots)
    plt.ylabel('Number of events')
    plt.yscale('log')
    plt.legend()
    plt.ioff() # to turn off the displaying plots.
    # plt.show()
    plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'.png')
    plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'.pdf')
    plt.close()


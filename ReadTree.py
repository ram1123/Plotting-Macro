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

parser = argparse.ArgumentParser(formatter_class=argparse.RawDescriptionHelpFormatter,
    description='''
    Example Command:
    ----------------
    python ReadTree3.py -i InputRootFile.root  -t TreeName  --dir temp -var_file variableListToPlot.py
    python ReadTree3.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/Sync_1031_2018_GluGluHToZZTo4L_final.root  -t Ana/passedEvents  --dir temp -var_file variableListToPlot.py

    ----------------
    '''
    )
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
parser.add_argument('-var_file', '--var_file',
    default="variableListToPlot.py",
    type=str,
    help='text file having list of all variables.'
    )
parser.add_argument('-d', '--debug',
    default=False,
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
if (args.debug): print(file)
if (args.debug): print(file.keys())

tree = file[args.tree_name]
if (args.debug):
#     print(tree.keys())
    print(tree)

if (args.debug):
    print("|{count:5} | {branch_name:46} |".format(count="count", branch_name="Branch Name"))
    print("|{count:5} | {branch_name:46} |".format(count="---", branch_name="---"))
    for i,name in enumerate(tree.arrays()):
        print("|{count:5} | {branch_name:46} |".format(count=i, branch_name=name))
        if i>11: break

branches = tree.arrays()
number_of_branches = len(branches)


import sys
cwd = os.getcwd()
sys.path.insert(0, cwd)  # mypath = path of module to be imported
variableListToPlot = __import__((args.var_file).replace(".py","")) # __import__ accepts string

branchesToPlot  = variableListToPlot.branchesToPlot

total_number_of_plots = len(branchesToPlot)
for count,var_plots in enumerate(branchesToPlot):
    print("Plotting branch: {0:3}/{1:<3}, {2:45}, {3:12}".format(
        count+1,total_number_of_plots,
        var_plots,
        branchesToPlot[var_plots]
        )
    )
    plt.hist(branches[var_plots],
        bins=branchesToPlot[var_plots][0],
        range=(branchesToPlot[var_plots][1], branchesToPlot[var_plots][2]),
        label=var_plots,
        alpha=0.6
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

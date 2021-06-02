# -*- coding: utf-8 -*-
# @Author: Ram Krishna Sharma
# @Author Email: ram.krishna.sharma@cern.ch
# @Date:   2021-06-02
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-06-02
import uproot
import argparse
# import matplotlib.pyplot as plt
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
if (args.debug): print(file)
if (args.debug):
    print(file.keys())

tree = file[args.tree_name]
if (args.debug):
    # print(tree.keys())
    print(tree)

# print("|{count:5} | {branch_name:46} |".format(count="count", branch_name="Branch Name"))
# print("|{count:5} | {branch_name:46} |".format(count="---", branch_name="---"))
# for i,name in enumerate(tree.arrays()):
#     print("|{count:5} | {branch_name:46} |".format(count=i, branch_name=name))
#     if i>11: break

branches = tree.arrays()

branchesToPlot = [  "Inclusive_TauB_jet0","Inclusive_TauB_jet1",
                    "Inclusive_TauC_jet1",
                    "TauB_sumConstituent_jet0","TauB_sumConstituent_jet1",
                    "TauC_sumConstituent_jet0","TauC_sumConstituent_jet1"
                ]

for var_plots in branchesToPlot:
    import matplotlib.pyplot as plt
    plt.hist(branches[var_plots], bins=100, range=(0, 1550), label=var_plots,alpha=0.6)
    plt.xlabel(var_plots)
    plt.ylabel('Number of events')
    # plt.yscale('log')
    plt.legend()
    plt.ioff() # to turn off the displaying plots.
    # plt.show()
    plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'.png')
    plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'.pdf')


# # print("|{0:10} | {1:10} | {2:10} | {3:40} | {4:15}".format("Event No.","Ele Pos.","Filter No.","Filter Name","Filter Decision"))
# for i,name in enumerate(tree.arrays()['filterName32']):
#     print("="*98)
#     print("|{0:10} | {1:10} | {2:10} | {3:40} | {4:15}".format("Event No.","Ele Pos.","Filter No.","Filter Name","Filter Decision"))
#     print("="*98)
#     for j,Vecfilters in enumerate(name):
#         for k,filters in enumerate(Vecfilters):
#             print("|{0:10} | {1:10} | {2:10} | {3:40} | {4:15}".format(i, j, k, filters,tree.arrays()['filterDecision32'][i][j][k]))
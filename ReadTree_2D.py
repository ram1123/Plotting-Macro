# -*- coding: utf-8 -*-
# @Author: Ram Krishna Sharma
# @Author Email: ram.krishna.sharma@cern.ch
# @Date:   2021-06-03
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-06-14
import uproot
import argparse
import matplotlib.pyplot as plt
plt.ioff() # to turn off the displaying plots.
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
parser.add_argument('-il', '--inputFileLocation',
    default='./',
    type=str,
    help='location of input files'
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
    default="Variables_TwoDPlots.py",
    type=str,
    help='text file having list of all variables.'
    )
parser.add_argument('-d', '--debug',
    default=False,
    type=bool,
    help='debug true or false'
    )
parser.add_argument('-v', '--var_set_to_plot',
    default="twoD_var_list",
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
parser.add_argument('-zaxis', '--zaxis',
    default=50,
    type=int,
    help='z-axis upper limit'
    )
args = parser.parse_args()
# print(args.accumulate(args.integers))

if not os.path.isdir(args.dir_to_save_plots):
    os.makedirs(args.dir_to_save_plots)

file = uproot.open(args.inputFileLocation+"/"+args.input_file)

tree = file[args.tree_name]

branches = tree.arrays()
number_of_branches = len(branches)


import sys
cwd = os.getcwd()
sys.path.insert(0, cwd)  # mypath = path of module to be imported
variableListToPlot = __import__((args.var_file).replace(".py","")) # __import__ accepts string

# branchesToPlot  = variableListToPlot.nJettinessMELA
branchesToPlot  = getattr(variableListToPlot, args.var_set_to_plot)

total_number_of_plots = len(branchesToPlot)
for count,var_plots in enumerate(branchesToPlot):
    print count,var_plots
    var1 = var_plots[0]
    var2 = var_plots[4]
    print("var1: {}".format(var1))
    print("var2: {}".format(var2))
    print("===> Plotting branch: {0:3}/{1:<3}, {2:31}".format(
        count+1,total_number_of_plots,
        var_plots
        )
    )
    # print "type(var1): ",type(var1)
    # print "type(branches[var1]): ",type(branches[var1])
    # n, bins, patches = plt.hist(branches[var1],
    #     # branches[var2],
    #     bins='auto',
    #     # bins=(51,51),
    #     range=(var_plots[2], var_plots[3] ),# [var_plots[6], var_plots[7]] ),
    #     )
    plt.hist2d(branches[var1], branches[var2],
        # bins='auto',
        bins=(var_plots[1],var_plots[5]),
        range=((var_plots[2], var_plots[3]),(var_plots[6], var_plots[7] )),
        # cmap=plt.cm.jet,
        # cmap=plt.cm.Oranges,
        # cmap=plt.cm.BuPu,
        cmap=plt.cm.Reds,
        # cmap=plt.cm.Greys
        )
    # plt.clim(0, args.zaxis)
    plt.colorbar()
    plt.title("")
    axes = plt.axes()
    # axes.set_ylim([0, 1.1])
    # plt.plot(branches[var1], branches[var2], 'ro')
    # plt.axis([var_plots[2], var_plots[3], var_plots[6], var_plots[7]])

    plt.xlabel(var_plots[8],fontsize=18)
    plt.ylabel(var_plots[9],fontsize=18)
    # plt.legend(loc='best')
    # plt.text(30,400,"Entries: "+str(numpy.sum(n)))
    # plt.show()
    plt.tight_layout()
    plt.savefig(args.dir_to_save_plots+os.sep+var1+"_"+var2+'_2D.png')
    plt.savefig(args.dir_to_save_plots+os.sep+var1+"_"+var2+'_2D.pdf')
    # plt.yscale('log')
    # plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'_log.png')
    # plt.savefig(args.dir_to_save_plots+os.sep+var_plots+'_log.pdf')
    # plt.yscale('linear')
    plt.close()
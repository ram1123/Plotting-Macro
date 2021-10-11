# import matplotlib
# matplotlib.use('tkagg')  # Or any other X11 back-end

# https://uproot.readthedocs.io/en/latest/basic.html
import os
import sys
import uproot
# import awkward
# import numpy as np
import matplotlib.pyplot as plt
# import os
# import sys

f_default = uproot.open("../ZPrime_default.root")
f_PetaTrk = uproot.open("../ZPrime_PetaTrk.root")
q_PetaTrk = uproot.open("../QCD_PetaTrk.root")
q_default = uproot.open("../QCD_default.root")
# print(f_default.classnames())
# print(f_default.keys())
# print("========")

tree_default = f_default['egHLTRun3Tree']
tree_PetaTrk = f_PetaTrk['egHLTRun3Tree']
qtree_PetaTrk = q_PetaTrk['egHLTRun3Tree']
qtree_default = q_default['egHLTRun3Tree']

# branches = tree_default.arrays(namedecode='utf-8')
# print(tree_default.show())

cwd = os.getcwd()
sys.path.insert(0, cwd)  # mypath = path of module to be imported
variableListToPlot = __import__(("Variables_CompTwoRootFile.py").replace(".py", "")) # __import__ accepts string
branchesToPlot = getattr(variableListToPlot, "VarSet1")

total_number_of_plots = len(branchesToPlot)

print(branchesToPlot.keys())

# Get array having all the branches names to plot
allBranches = branchesToPlot.keys()

Branches_default = tree_default.arrays(allBranches, library="pd")
Branches_PetaTrk = tree_PetaTrk.arrays(allBranches, library="pd")
qBranches_PetaTrk = qtree_PetaTrk.arrays(allBranches, library="pd")
qBranches_default = qtree_default.arrays(allBranches, library="pd")

for count, branches in enumerate(allBranches):
    print("{:2}/{:2}: branch name: {}, {}".format(count, len(allBranches), branches, branchesToPlot[branches]))
    # n, bins, patches = plt.hist([ Branches_default[branches], Branches_PetaTrk[branches],
    #                               qBranches_PetaTrk[branches], qBranches_default[branches] ],
    #                             bins='auto',
    #                             range=(branchesToPlot[branches][1], branchesToPlot[branches][2]),
    #                             label=["ZPrime-default", "ZPrime-PetaTrk",
    #                                    "QCD-PetaTrk", "QCD-Default"],
    #                             density=True
    #                             )

    n, bins, patches = plt.hist(Branches_default[branches],
                                bins='auto',
                                range=(branchesToPlot[branches][1], branchesToPlot[branches][2]),
                                label="default",
                                # alpha=0.5,
                                fill=False,
                                linewidth=2,
                                # facecolor='c',
                                # hatch='|',
                                # edgecolor='blue',
                                # edgecolor=pick_color[0],
                                histtype='step',
                                # normed=True,
                                density=True
                                )

    n, bins, patches = plt.hist(Branches_PetaTrk[branches],
                                bins=bins,
                                range=(branchesToPlot[branches][1], branchesToPlot[branches][2]),
                                label="PetaTrk",
                                # alpha=0.5,
                                fill=False,
                                linewidth=2,
                                # facecolor='c',
                                # hatch='/',
                                # edgecolor='red',
                                # edgecolor=pick_color[0],
                                histtype='step',
                                # normed=True,
                                density=True
                                )
    n, bins, patches = plt.hist(qBranches_PetaTrk[branches],
                                bins=bins,
                                range=(branchesToPlot[branches][1], branchesToPlot[branches][2]),
                                label="QCD-PetaTrk",
                                # alpha=0.5,
                                fill=False,
                                linewidth=2,
                                # facecolor='c',
                                # hatch='+',
                                # edgecolor='red',
                                # edgecolor=pick_color[0],
                                histtype='step',
                                # normed=True,
                                density=True
                                )
    n, bins, patches = plt.hist(qBranches_default[branches],
                                bins=bins,
                                range=(branchesToPlot[branches][1], branchesToPlot[branches][2]),
                                label="QCD-Default",
                                # alpha=0.5,
                                fill=False,
                                linewidth=2,
                                # facecolor='c',
                                # hatch='*',
                                # edgecolor='red',
                                # edgecolor=pick_color[0],
                                histtype='step',
                                # normed=True,
                                density=True
                                )

    plt.xlabel(branchesToPlot[branches][3], fontsize=15)
    plt.ylabel('Number of events', fontsize=15)
    plt.legend(loc='best')
    plt.tight_layout()
    plt.savefig(branches + '.png')
    plt.savefig(branches + '.pdf')

    plt.yscale('log')
    plt.savefig(branches + '_log.png')
    plt.savefig(branches + '_log.pdf')
    plt.yscale('linear')
    plt.close()


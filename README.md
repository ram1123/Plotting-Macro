Table of Contents
=================

   * [Common information](#common-information)
   * [Simple plotting using variables from file](#simple-plotting-using-variables-from-file)
   * [Search branch using sub-string then plot for all of them](#search-branch-using-sub-string-then-plot-for-all-of-them)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc)

# Common information

These macro needs `uproot` and `matplotlib` packages.

On lxplus this is available with `CMSSW_11_2_4` onwards.

```bash
source /cvmfs/sft.cern.ch/lcg/views/dev4cuda/latest/x86_64-centos7-gcc8-opt/setup.sh
```

# Simple plotting using variables from file

If you want to plot one variable on one canvas. Then add each variable with its nbins, minX and maxX info in the file [variableListToPlot.py](variableListToPlot.py). Then run the macro [ReadTree.py](ReadTree.py).

Example use:

```bash
python ReadTree.py -i <ROOT_FileWithPath> -t <TreeName> --dir <DirToKeepPlots> -var_file variableListToPlot.py

# Example
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/Sync_1031_2018_GluGluHToZZTo4L_final.root -t Ana/passedEvents --dir h4l_plots -var_file variableListToPlot.py

python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/all.root  --dir h4l_MELA_ggh_vbf_wph -v mela
```

Help message:

```bash
$ python ReadTree.py --help
usage: ReadTree.py [-h] [-i INPUT_FILE] [-t TREE_NAME] [-var_file VAR_FILE]
                   [-d DEBUG] [-dir DIR_TO_SAVE_PLOTS]

    Example Command:
    ----------------
    python ReadTree.py -i InputRootFile.root  -t TreeName  --dir temp -var_file variableListToPlot.py

    ----------------


optional arguments:
  -h, --help            show this help message and exit
  -i INPUT_FILE, --input_file INPUT_FILE
                        Input root file
  -t TREE_NAME, --tree_name TREE_NAME
                        tree name of input root file
  -var_file VAR_FILE, --var_file VAR_FILE
                        text file having list of all variables.
  -d DEBUG, --debug DEBUG
                        debug true or false
  -dir DIR_TO_SAVE_PLOTS, --dir_to_save_plots DIR_TO_SAVE_PLOTS
                        Directory name to keep plots
```

# Search branch using sub-string then plot for all of them

If you want to plot all branches from the tree having a particular pattern then use the macro [ReadTree2.py](ReadTree2.py).

Help message:

```bash
$ python ReadTree2.py --help
usage: ReadTree2.py [-h] [-i INPUT_FILE] [-t TREE_NAME] [-nBin NBIN]
                    [-xmin XMIN] [-xmax XMAX] [-branch_text BRANCH_TEXT]
                    [-d DEBUG] [-dir DIR_TO_SAVE_PLOTS]

    Search all branch having a sub-string. Then make histogram for
    all the available branches.

    Example Command:
    ----------------
    python ReadTree2.py -i InputRootFile.root  -t TreeName -branch_text "D_"  --dir temp

    ----------------


optional arguments:
  -h, --help            show this help message and exit
  -i INPUT_FILE, --input_file INPUT_FILE
                        Input root file
  -t TREE_NAME, --tree_name TREE_NAME
                        tree name of input root file
  -nBin NBIN, --nBin NBIN
                        number of bins
  -xmin XMIN, --xmin XMIN
                        min value of x-axis
  -xmax XMAX, --xmax XMAX
                        max value of x-axis
  -branch_text BRANCH_TEXT, --branch_text BRANCH_TEXT
                        search string in a tree branch
  -d DEBUG, --debug DEBUG
                        debug true or false
  -dir DIR_TO_SAVE_PLOTS, --dir_to_save_plots DIR_TO_SAVE_PLOTS
                        Directory name to keep plots
```
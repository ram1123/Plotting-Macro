# Plotting-Macro

1. Environment setup:
   ```bash
   source /cvmfs/sft.cern.ch/lcg/views/dev4cuda/latest/x86_64-centos7-gcc8-opt/setup.sh
   ```
   or any CMSSW_10X or later

2. Run plotting macro:
   ***Update the input root file path and variable to plot***
   ```bash
   root -l -b -q plotter.C
   ```

# Doc generator

```bash
cd docs
doxygen docGenerator.config
```

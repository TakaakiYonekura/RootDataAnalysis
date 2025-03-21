# RootDataAnalysis for TrackMate  
Version 1.0.1 (Released: April 2025)

## Installation

### OS Requirements
This software runs on **Windows 10 or Windows 11** only.  
**Note:** macOS is not supported.

### How to Install
No installation is required.  
Simply download the package and double-click `TrackMate_RootDataAnalysis.exe` to launch the software.

---

## Usage

This software analyzes **TrackMate output files** that record the positions of nuclei arranged cylindrically, resembling the root structure of plants.  

**Important:** The input file must have cells color-coded differently for each column. Files without proper color coding **cannot** be analyzed.

If necessary, you can use **Prof. Chen's group's software** to convert your data into the required format compatible with this tool.

---

### How to Launch the Software
Double-click `bin/TrackMate_RootDataAnalysis.exe` to start the software.

### Loading TrackMate Files
1. Click **"Load a TrackMate File"** to load your prepared TrackMate file.
2. **(Optional)** If you have tip position data, prepare it in TrackMate format and load it using **"Load a QC file"**.
3. Click **"Analyze"** to begin processing.

---

### Data Analysis and Saving Parameters
- Select the output directory by clicking **"Choose Directory"**.
- Analysis results will be saved in the selected folder.
- For detailed analysis methods, please refer to the relevant literature.
- You can save the parameters used for figure generation by selecting **"Save parameters"** from the **"File"** tab.

---

## Project Structure
```text
/ (Project Root)
├── bin/
│   ├── RDA.ico
│   ├── opencv_world460.dll
│   ├── TrackMate_RootDataAnalysis.exe
│   ├── TrackMate_RootDataAnalysis.pdb
│   └── *.metagen
│
├── header_only/
│   ├── aboutBoost.resx
│   ├── aboutOpenCV.resx
│   ├── RootDataAnalysis_Function.h
│   ├── RootDataAnalysis_Function.lib
│   └── RootDataAnalysis_Function.pdb
│
├── LICENSE
├── README.md
└── CHANGELOG.md
```

## Citation
Tatsuaki Goh, Yu Song, Takaaki Yonekura, Noriyasu Obushi, Zeping Den, Katsutoshi Imizu, Yoko Tomizawa, Yohei Kondo, Shunsuke Miyashima, Yutaro Iwamoto, Masahiko Inami, Yen-Wei Chen, and Keiji Nakajima.  
In-depth quantification of cell division and elongation dynamics at the tip of growing Arabidopsis roots using 4D-microscopy, AI-assisted image processing, and data sonification.  
2023. Plant and Cell Physiology, Volume 64, Issue 11, November 2023, Pages 1262–1278. https://doi.org/10.1093/pcp/pcad105
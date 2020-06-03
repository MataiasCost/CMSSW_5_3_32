#/bin/bash
root -l -q Analyzer_data.C
root -l -q Analyzer_DYM50.C
root -l -q Analyzer_DY_M10_50.C
root -l -q Analyzer_ttbar.C
root -l -q Analyzer_TW.C
root -l -q Analyzer_TWb.C
root -l -q Analyzer_WJets.C
root -l -q Analyzer_WW.C
root -l -q Analyzer_WZ.C
root -l -q Analyzer_ZZ.C

mv ht_data.root THSTACKES/
mv ht_DY_M10_50.root THSTACKES/
mv ht_DY_M50.root THSTACKES/
mv ht_ttbar.root THSTACKES/
hadd -f ht_TW.root ht_TW1.root ht_TWb.root
mv ht_TW.root THSTACKES/
rm ht_TW1.root ht_TWb.root
hadd -f ht_VV.root ht_WW.root ht_WZ.root ht_ZZ.root
mv ht_VV.root THSTACKES/
rm ht_WW.root ht_WZ.root ht_ZZ.root



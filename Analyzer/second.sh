#/bin/bash


cd condor_data_1/root && hadd -f DoubleEl.root *.root
mv DoubleEl.root ../../amostras/

cd ../../condor_data_2/root && hadd -f DoubleMu.root *.root
mv DoubleMu.root ../../amostras/


cd ../../condor_data_3/root && hadd -f MET.root *.root
mv MET.root ../../amostras/

cd ../../condor_data_4/root && hadd -f METB.root *.root
mv METB.root ../../amostras/

cd ../../condor_data_5/root && hadd -f MuEG.root *.root
mv MuEG.root ../../amostras/

cd ../../condor_TT_1/root && hadd -f ttbar1.root *.root
mv ttbar1.root ../../amostras/

cd ../../condor_TT_2/root && hadd -f ttbar2.root *.root
mv ttbar2.root ../../amostras/

cd ../../condor_TT_3/root && hadd -f ttbar3.root *.root
mv ttbar3.root ../../amostras/

cd ../../condor_TT_4/root && hadd -f ttbar4.root *.root
mv ttbar4.root ../../amostras/

cd ../../condor_TT_5/root && hadd -f ttbar5.root *.root
mv ttbar5.root ../../amostras/

cd ../../condor_TT_6/root && hadd -f ttbar6.root *.root
mv ttbar6.root ../../amostras/

cd ../../amostras/
hadd -f ttbar.root ttbar1.root ttbar2.root ttbar3.root ttbar4.root ttbar5.root ttbar6.root
hadd -f data.root  MuEG.root  DoubleMu.root DoubleEl.root MET.root METB.root

mv data.root /eos/user/m/mcostare/amostras_matheus/
mv ttbar.root /eos/user/m/mcostare/amostras_matheus/

rm ttbar1.root ttbar2.root ttbar3.root ttbar4.root ttbar5.root ttbar6.root METB.root MuEG.root MET.root DoubleMu.root DoubleEl.root 

cd ../condor_DY_50/root && hadd -f DY_M50.root *.root
mv DY_M50.root /eos/user/m/mcostare/amostras_matheus/

cd ../../condor_DY_10_50/root && hadd -f DY_M10_50.root *.root
mv DY_M10_50.root /eos/user/m/mcostare/amostras_matheus/


cd ../../condor_TW/root && hadd -f TW.root *.root
mv TW.root /eos/user/m/mcostare/amostras_matheus/

cd ../../condor_TWb/root && hadd -f TWb.root *.root
mv TWb.root /eos/user/m/mcostare/amostras_matheus/

cd ../../condor_WJet/root && hadd -f WJet.root *.root
mv WJet.root /eos/user/m/mcostare/amostras_matheus/

cd ../../condor_WW/root && hadd -f WW.root *.root
mv WW.root /eos/user/m/mcostare/amostras_matheus/

cd ../../condor_WZ/root && hadd -f WZ.root *.root
mv WZ.root /eos/user/m/mcostare/amostras_matheus/

cd ../../condor_ZZ/root && hadd -f ZZ.root *.root
mv ZZ.root /eos/user/m/mcostare/amostras_matheus/


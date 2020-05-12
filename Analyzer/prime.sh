#/bin/bash





cd condor_data_1 && condor_submit condor
cd ../condor_data_2 && condor_submit condor 
cd ../condor_data_3 && condor_submit condor
cd ../condor_data_4 && condor_submit condor
cd ../condor_data_5 && condor_submit condor
cd ../condor_DY_10_50 && condor_submit condor
cd ../condor_DY_50 && condor_submit condor
cd ../condor_TT_1 && condor_submit condor
cd ../condor_TT_2 && condor_submit condor
cd ../condor_TT_3 && condor_submit condor
cd ../condor_TT_4 && condor_submit condor
cd ../condor_TT_5 && condor_submit condor
cd ../condor_TT_6 && condor_submit condor
cd ../condor_TW && condor_submit condor
cd ../condor_TWb && condor_submit condor
cd ../condor_WJet && condor_submit condor
cd ../condor_WW && condor_submit condor
cd ../condor_WZ && condor_submit condor
cd ../condor_ZZ && condor_submit condor




# Para executar todos ao mesmo tempo faz necessario o uso de &
#bash run_DY_1.sh &
#bash run_DY_2.sh &
#bash run_Tw_1.sh &
#bash run_Tw_2.sh &
#bash run_Wjets

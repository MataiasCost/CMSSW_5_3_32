#!/bin/sh


file=$1


xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/00000/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010013/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010011/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010007/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010014/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010012/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010004/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010009/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010001/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010005/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010006/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010010/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010000/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010002/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010008/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010015/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_TuneZ2_M-50_7TeV-madgraph-tauola/AODSIM/PU_S13_START53_LV6-v1/010003/$file file.root


cp /afs/cern.ch/user/m/mcostare/CMSSW_5_3_32/src/2011-doubleelectron-doublemu-mueg-ttbar/Analyzer/condor/analyzer_cfg.py .
cp /afs/cern.ch/user/m/mcostare/CMSSW_5_3_32/src/2011-doubleelectron-doublemu-mueg-ttbar/Analyzer/condor/Cert_160404-180252_7TeV_ReRecoNov08_Collisions11_JSON.txt .

cmsRun analyzer_cfg.py


cp ttbarTmp.root /afs/cern.ch/user/m/mcostare/CMSSW_5_3_32/src/2011-doubleelectron-doublemu-mueg-ttbar/Analyzer/condor_DY_50/root/$file


rm *.root *.py *.txt 

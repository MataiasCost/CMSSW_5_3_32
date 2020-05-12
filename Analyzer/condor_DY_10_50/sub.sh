#!/bin/sh


file=$1

xrdcp root://eospublic.cern.ch//eos/opendata/cms/MonteCarlo2011/Summer11LegDR/DYJetsToLL_M-10To50_TuneZ2_7TeV-pythia6/AODSIM/PU_S13_START53_LV6-v1/00000/$file file.root


cp /afs/cern.ch/user/m/mcostare/CMSSW_5_3_32/src/2011-doubleelectron-doublemu-mueg-ttbar/Analyzer/condor/analyzer_cfg.py .
cp /afs/cern.ch/user/m/mcostare/CMSSW_5_3_32/src/2011-doubleelectron-doublemu-mueg-ttbar/Analyzer/condor/Cert_160404-180252_7TeV_ReRecoNov08_Collisions11_JSON.txt .

cmsRun analyzer_cfg.py
cp ttbarTmp.root /afs/cern.ch/user/m/mcostare/CMSSW_5_3_32/src/2011-doubleelectron-doublemu-mueg-ttbar/Analyzer/condor_DY_10_50/root/$file



rm *.root *.py *.txt 

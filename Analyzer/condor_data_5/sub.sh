#!/bin/sh


file=$1

xrdcp root://eospublic.cern.ch//eos/opendata/cms/Run2011A/MuEG/AOD/12Oct2013-v1/20000/$file file.root
xrdcp root://eospublic.cern.ch//eos/opendata/cms/Run2011A/MuEG/AOD/12Oct2013-v1/20001/$file file.root

cp /afs/cern.ch/user/m/mcostare/CMSSW_5_3_32/src/2011-doubleelectron-doublemu-mueg-ttbar/Analyzer/condor_data_1/analyzer_cfg.py .
cp /afs/cern.ch/user/m/mcostare/CMSSW_5_3_32/src/2011-doubleelectron-doublemu-mueg-ttbar/Analyzer/condor/Cert_160404-180252_7TeV_ReRecoNov08_Collisions11_JSON.txt .

cmsRun analyzer_cfg.py

cp ttbarTmp.root /afs/cern.ch/user/m/mcostare/CMSSW_5_3_32/src/2011-doubleelectron-doublemu-mueg-ttbar/Analyzer/condor_data_5/root/$file


rm *.root *.py *.txt 

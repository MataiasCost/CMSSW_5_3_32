{
#include<TROOT.h>
#include<fstream>
#include<TTree.h>
#include<TFile.h>
#include<math.h>
#include<TLatex.h>
#include<TMath.h>
#include<TLorentzVector.h>
//using namespace std;
// HISTOGRAMA DO DISCRIMINATDOR DE BTAG
TCanvas *c1=new TCanvas("c1","Discriminador de btag",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h1 = new TH1F("Discrim Cut","discri cut",4,0,4);

TLegend* leg = new TLegend(0.9,0.8,0.7,0.9);
leg->AddEntry(h1,"discri cut","l");
// HISTOGRAMA DO NUMERO DE JATOS de B NO CANAL DE EE E mumu
				//	ee_5b=true;
TCanvas *c2=new TCanvas("c2","Mutiplicidade de jatos de b",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h2 = new TH1F("NJetB (ee,mumu)","CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV",4,0,4);

TLegend* leg2 = new TLegend(0.7,0.6,0.9,0.65);
leg2->AddEntry(h2,"TW","f");
leg2->SetBorderSize(0);
TLatex *tx =new TLatex();
tx->SetTextSize(0.08);
tx->SetTextAlign(13);
tx->SetTextFont(42);

//HISTOGRAMA DO NUMERO DE JATOS DE B DO CANAL EMU
TCanvas *c3=new TCanvas("c3","Mutiplicidade de jatos de b",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h3 = new TH1F("NJetB (emu)","CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV",4,0,4);

TLegend* leg3 = new TLegend(0.7,0.6,0.9,0.65);
leg3->AddEntry(h3,"TW","f");
leg3->SetBorderSize(0);

//Histograma do Numero de jatos no canal ee+mumu
TCanvas *c4=new TCanvas("c4","Mutiplicidade de jatos",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h4 = new TH1F("NJet (ee,mumu)","CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV",5,0,5);

TLegend* leg4 = new TLegend(0.7,0.6,0.9,0.65);
leg4->AddEntry(h4,"TW","f");
leg4->SetBorderSize(0);
//Histograma do Numero de jatos no canal emu
TCanvas *c5=new TCanvas("c5","Mutiplicidade de jatos",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h5 = new TH1F("NJet (emu)","CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV",5,0,5);

TLegend* leg5 = new TLegend(0.7,0.6,0.9,0.65);
leg5->AddEntry(h5,"TW","f");
leg5->SetBorderSize(0);
//Histograma do MET do canal ee e mumu
TCanvas *c6=new TCanvas("c6","energia perdida",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h6 = new TH1F("MET (ee,mumu)","CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV",30,0,150);

TLegend* leg6 = new TLegend(0.7,0.6,0.9,0.65);
leg6->AddEntry(h6,"TW","f");
leg6->SetBorderSize(0);
//Histograma do MET do canal emu
TCanvas *c7=new TCanvas("c7","energia perdida",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h7 = new TH1F("MET (emu)","CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV",30,0,150);

TLegend* leg7 = new TLegend(0.7,0.6,0.9,0.65);
leg7->AddEntry(h7,"TW","f");
leg7->SetBorderSize(0);
//Histograma do M(ll) para o canal de ee e mumu
TCanvas *c8=new TCanvas("c8","Massa invariante",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h8 = new TH1F("MassInva (ee,mumu)","CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV",50,0,350);

TLegend* leg8 = new TLegend(0.7,0.6,0.9,0.65);
leg8->AddEntry(h8,"TW","f");
leg8->SetBorderSize(0);
//Histograma do M(ll) para o canal de ee e mumu
TCanvas *c9=new TCanvas("c9","Massa invariante",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h9 = new TH1F("MassInva (emu)","CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV",50,0,350);

TLegend* leg9 = new TLegend(0.7,0.6,0.9,0.65);
leg9->AddEntry(h9,"TW","f");
leg9->SetBorderSize(0);

//Pt do muon com maior pt no canal de mumu
TCanvas *c10=new TCanvas("c10","Leading Muon",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h10 = new TH1F("PtMuon (mumu)","CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV",50,0,250);

TLegend* leg10 = new TLegend(0.7,0.6,0.9,0.65);
leg10->AddEntry(h10,"TW","f");
leg10->SetBorderSize(0);

//Pt do eletron com maior pt no canal de ee
TCanvas *c11=new TCanvas("c11","Leading Electron",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h11 = new TH1F("PtEle (ee)","CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV",50,0,250);

TLegend* leg11 = new TLegend(0.7,0.6,0.9,0.65);
leg11->AddEntry(h11,"TW","f");
leg11->SetBorderSize(0);

//Pt do jato com maior pt em todos os canais
TCanvas *c12=new TCanvas("c12","Leading Jet",200,10,600,480);
gStyle->SetOptStat(0);

TH1F *h12 = new TH1F("Pt_Jet (all)","CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV",50,0,300);

TLegend* leg12 = new TLegend(0.7,0.6,0.9,0.65);
leg12->AddEntry(h12,"TW","f");
leg12->SetBorderSize(0);

TFile *MyFile = new TFile("ht_TW1.root","recreate");

TFile f("TW.root");
TTree* t;
f.GetObject("tree",t);
int Nmu,muHitsValid[10],Nel,Njet,Triggers;
float muPt[10],muEta[10],muPhi[10],muIso03[10],muTrackChi2NDOF[10],muDistPV0[10],muDistPVz[10],elPt[10],elEta[10],elPhi[10],elIso03[10],elConvDist[10],elConvDcot[10],elMissHits[10],jetPt[25],jetEta[25],jetPhi[25],jetMass[25],jetBTagDiscr[25],metPx,metPy;
double peso = 0.023440799;
float MET,pvRho,pvZ;
double mass_inva, pt_muon, pt_electron,pt_jato;
bool trigmumu = false,trigemu = false,trigee = false,mumu_0b,mumu_1b,mumu_2b,mumu_3b,mumu_4b,mumu_5b,emu_0b,emu_1b,emu_2b,emu_3b,emu_4b,emu_5b,ee_0b,ee_1b,ee_2b,ee_3b,ee_4b,ee_5b;
double maxPtDiLep=-1;
int N_ee=0,N_emu=0,N_mumu=0,pvNDOF;
int mumu_0,mumu_1,mumu_2,mumu_3,mumu_4,mumu_5,emu_0,emu_1,emu_2,emu_3,emu_4,emu_5,ee_0,ee_1,ee_2,ee_3,ee_4,ee_5,NJetB=0,Number_JetBmumu=0,Number_JetBee=0,Number_JetBemu=0;
bool ee,emu,mumu;
bool Portal=false,JetB=false;
char pvFake;
///muons
t->SetBranchAddress("Nmu",&Nmu);
t->SetBranchAddress("muPt",&muPt);
t->SetBranchAddress("muEta",&muEta);
t->SetBranchAddress("muPhi",&muPhi);
t->SetBranchAddress("muIso03",&muIso03);
t->SetBranchAddress("muHitsValid",&muHitsValid);
t->SetBranchAddress("muDistPV0",&muDistPV0);
t->SetBranchAddress("muTrackChi2NDOF",&muTrackChi2NDOF);
t->SetBranchAddress("muDistPVz",&muDistPVz);
//eletrons
t->SetBranchAddress("Nel",&Nel);
t->SetBranchAddress("elPt",&elPt);
t->SetBranchAddress("elEta",&elEta);
t->SetBranchAddress("elPhi",&elPhi);
t->SetBranchAddress("elIso03",&elIso03);
t->SetBranchAddress("elMissHits",&elMissHits);
t->SetBranchAddress("elConvDist",&elConvDist);
t->SetBranchAddress("elConvDcot",&elConvDcot);

//jatos
t->SetBranchAddress("Njet",&Njet);
t->SetBranchAddress("jetPt",&jetPt);
t->SetBranchAddress("jetEta",&jetEta);
t->SetBranchAddress("jetPhi",&jetPhi);
t->SetBranchAddress("jetMass",&jetMass);
t->SetBranchAddress("jetBTagDiscr",&jetBTagDiscr);
//Missing energy
t->SetBranchAddress("metPx",&metPx);
t->SetBranchAddress("metPy",&metPy);
//Trigger
t->SetBranchAddress("Triggers",&Triggers);
//Primary Vertex
t->SetBranchAddress("pvNDOF",&pvNDOF);
t->SetBranchAddress("pvRho",&pvRho);
t->SetBranchAddress("pvZ",&pvZ);
t->SetBranchAddress("pvFake",&pvFake);



Long64_t n = t->GetEntries();

//Declarando os Tlorentz vector que usaremos
TLorentzVector muon1;
TLorentzVector muon2;
TLorentzVector eletron1;
TLorentzVector eletron2;
TLorentzVector jato1;
TLorentzVector jato2;
TLorentzVector combina;

// Resetando os contadores
events_total=0;
mumu_0=0;
mumu_1=0;
mumu_2=0;
mumu_3=0;
mumu_4=0;
mumu_5=0;
emu_0=0;
emu_1=0;
emu_2=0;
emu_3=0;
emu_4=0;
emu_5=0;
ee_0=0;
ee_1=0;
ee_2=0;
ee_3=0;
ee_4=0;
ee_5=0;

	for(Int_t i=0;i<n;i++)
    {
		t->GetEntry (i);
		//resetando os bool dos canais
		mumu=false;
		ee=false;
		emu=false;
		trigee=false;
		trigemu=false;
		trigmumu=false;
		//resetando o contador dos cortes
		mumu_0b=false;
		mumu_1b=false;
		mumu_2b=false;
		mumu_3b=false;
		mumu_4b=false;
		mumu_5b=false;
		emu_0b=false;
		emu_1b=false;
		emu_2b=false;
		emu_3b=false;
		emu_4b=false;
		emu_5b=false;
		ee_0b=false;
		ee_1b=false;
		ee_2b=false;
		ee_3b=false;
		ee_4b=false;
		ee_5b=false;
		//Colocamos o valor do MaxPtDilepton -1
		maxPtDiLep=-1;
		events_total++;

		mass_inva=0;
		pt_muon=0;
		pt_electron=0;
		pt_jato=0;
		MET=sqrt(pow(metPx,2)+pow(metPy,2));

		if(pvNDOF < 4 || pvRho > 2.0 || TMath::Abs(pvZ) > 24.0)
		continue;
		//exclui eventos com MET < 20 GeV
		//if(MET<20){continue;}
		//LOOP dos TRIGGERS do canal ee 5th
		for(int bit = 7; bit < 8;bit++){
			if((Triggers >> bit) & 1)
			{
			trigee = true;
			break;
			}
		}
		//cout<<"tamanho do triggers: "<<sizeof(Triggers)<<endl;
		//if(Nel==2){contador7++;}
		if(trigee){
			//LOOP do canal ee
			for(int a=0;a<Nel;a++){
			if(elMissHits[a]>=2 || fabs(elConvDist[a])<=0.02 || fabs(elConvDcot[a])<= 0.02){continue;}
				eletron1.SetPtEtaPhiM(TMath::Abs(elPt[a]), elEta[a], elPhi[a], 0.000511);
				//std::cout<<"Nel do loop: "<<i<<" igual a:"<<Nel<<endl;
				//Loop pelo segundo eletron
				for(int b=a+1;b<Nel;b++){
				if(elMissHits[b]>=2 || fabs(elConvDist[b])<=0.02 || fabs(elConvDcot[b])<= 0.02){continue;}
					//Eles tem que ter uma carga oposta
					if(elPt[a]*elPt[b] > 0){continue;}
					eletron2.SetPtEtaPhiM(TMath::Abs(elPt[b]), elEta[b], elPhi[b], 0.000511);
					// A massa invariante do sistema tem que ser maior que 20 Gev/c
					TLorentzVector vecDiLep = eletron1 + eletron2;
					if(vecDiLep.M() < 20.0){continue;}
					// Confirmamos se é um canal de ee;
					double sumPt = vecDiLep.Pt();
					if(sumPt < maxPtDiLep){continue;}
					maxPtDiLep=sumPt;
					// se tiver o maior pt, então sera canal ee
					ee=true;
					emu=false;
					mumu=false;
				}
			}
		}



		//LOOP dos TRIGGERS do canal emu5 7th~11th
		for(int bit1 = 12; bit1 < 14;bit1++){
			if((Triggers >> bit1) & 1)
			{
			trigemu = true;
			break;
			}
		}
		if(trigemu){
			//LOOP do canal emu
			for(int e=0;e<Nmu;e++){
				muon1.SetPtEtaPhiM(TMath::Abs(muPt[e]), muEta[e], muPhi[e], 0.105658);
				for(int g=0;g<Nel;g++){
				if(elMissHits[g]>=2 || fabs(elConvDist[g])<=0.02 || fabs(elConvDcot[g])<= 0.02){continue;}
					//Eles tem que ter carga oposta
					eletron1.SetPtEtaPhiM(TMath::Abs(elPt[g]), elEta[g], elPhi[g], 0.000511);
					TLorentzVector vecDiLep = muon1 + eletron1;
					if(vecDiLep.M() < 20.0){continue;}
					if(muPt[e]*elPt[g] > 0){continue;}
					// Pelo menos um muon tem que ter IetaI < 2.1
					if(abs(muEta[e]) > 2.1){continue;}
					//Confirmamos se é um canal de emu
					double sumPt = vecDiLep.Pt();
					if(sumPt < maxPtDiLep){continue;}
					maxPtDiLep =sumPt;
					// se tiver o maior pt, então sera canal ee
					ee=false;
					emu=true;
					mumu=false;
				}
			}
		}


		//LOOP dos TRIGGERS do canal mumu 0~3th
		for(int bit2 = 4; bit2 < 5;bit2++){
			if((Triggers >> bit2) & 1)
			{
			trigmumu = true;
			break;
			}
		}
		if(trigmumu){
		//contador7++;
			//LOOP do canal mumu
			for(int c=0;c<Nmu;c++){
				muon1.SetPtEtaPhiM(TMath::Abs(muPt[c]), muEta[c], muPhi[c], 0.105658);
				for(int d=c+1;d<Nmu;d++){
					//Eles tem que ter carga oposta
					if(muPt[c]*muPt[d] > 0){continue;}
					muon2.SetPtEtaPhiM(TMath::Abs(muPt[d]), muEta[d], muPhi[d], 0.105658);
					TLorentzVector vecDiLep = muon1 + muon2;
					if(vecDiLep.M() < 20.0){continue;}
					// Pelo menos um muon tem que ter IetaI < 2.1
					if(abs(muEta[c]) > 2.1 || abs(muEta[d]) > 2.1){continue;}
					//Confirmamos se é um canal de mumu
					double sumPt = vecDiLep.Pt();
					if(sumPt < maxPtDiLep){continue;}
					maxPtDiLep =sumPt;
					// se tiver o maior pt, então sera canal mumu
					ee=false;
					emu=false;
					mumu=true;
					//contador3++;
				}
			}
		}


	//Se o canal escolhido é o de mumu, então:
	if(mumu){
		N_mumu++;
		for(int c=0;c<Nmu;c++){
				muon1.SetPtEtaPhiM(TMath::Abs(muPt[c]), muEta[c], muPhi[c], 0.105658);
				if(TMath::Abs(muPt[c]) > pt_muon){pt_muon=TMath::Abs(muPt[c]);}
				for(int d=c+1;d<Nmu;d++){
					//Eles tem que ter carga oposta
					if(muPt[c]*muPt[d] > 0){continue;}
					muon2.SetPtEtaPhiM(TMath::Abs(muPt[d]), muEta[d], muPhi[d], 0.105658);
					TLorentzVector vecDiLep = muon1 + muon2;
					if(vecDiLep.M() < 20.0){continue;}
					// Pelo menos um muon tem que ter IetaI < 2.1
					if(abs(muEta[c]) > 2.1 || abs(muEta[d]) > 2.1){continue;}
					mumu_0b=true;
					//A massa invariante deles não pode ficar entre 76 e 106 geV por causa do DY
					if(76.0 < vecDiLep.M() && vecDiLep.M() < 106.0){continue;}
					mumu_1b=true;
				//	std::cout<<"Evento: "<<i<<"com massa invariante de "<<vecDiLep.M()<<endl;
					mass_inva=vecDiLep.M();
				}
			}
			bool jatinhosE=false;
			jatinhosE=false;
			double energiatransjatos=0;
			JetB=false;
			NJetB=0;
			for(int g=0;g<Njet;g++){
			if(TMath::Abs(jetPt[g])>pt_jato){pt_jato=TMath::Abs(jetPt[g]);}
			jato1.SetPtEtaPhiM(TMath::Abs(jetPt[g]), jetEta[g], jetPhi[g], jetMass[g]);
				for(int k=g+1;k<Njet;k++){
					jato2.SetPtEtaPhiM(TMath::Abs(jetPt[k]), jetEta[k], jetPhi[k], jetMass[k]);
					TLorentzVector VecJets;
					VecJets= jato1+jato2;
					energiatransjatos = 0;
					energiatransjatos = VecJets.Et();

					if(energiatransjatos < 30.0){continue;}
					jatinhosE=true;
				}
				if(jetBTagDiscr[g] > 0.244){JetB=true;NJetB++;}
			}

					if(Njet>=2 && mumu_1b){h6->Fill(MET,peso);h8->Fill(mass_inva,peso);}
					if(Njet>=2 && mumu_1b && MET>=40){h10->Fill(pt_muon,peso);h12->Fill(pt_jato,peso);}
		//	if(Njet<=1){continue;}
					if(MET>=40 && mumu_1b && mumu_0b){h1->Fill(NJetB,peso);h4->Fill(Njet,peso);}
					if(jatinhosE && mumu_1b){mumu_2b=true;}
					if(jatinhosE && mumu_1b && MET>=40){h2->Fill(NJetB,peso);}
					if(MET>=40 && mumu_2b){mumu_3b=true;}
					if(JetB && mumu_3b){mumu_4b=true;}
					if(NJetB>=2 && mumu_4b){mumu_5b=true;}
		}


// Aqui começa o canal de emu
  if(emu){
		N_emu++;
			//LOOP do canal emu
			for(int e=0;e<Nmu;e++){
				muon1.SetPtEtaPhiM(TMath::Abs(muPt[e]), muEta[e], muPhi[e], 0.105658);
				for(int g=0;g<Nel;g++){
					if(elMissHits[g]>=2 || fabs(elConvDist[g])<=0.02 || fabs(elConvDcot[g])<= 0.02){continue;}
					//Eles tem que ter carga oposta
					if(muPt[e]*elPt[g] > 0){continue;}
					eletron1.SetPtEtaPhiM(TMath::Abs(elPt[g]), elEta[g], elPhi[g], 0.000511);
					TLorentzVector vecDiLep = muon1 + eletron1;
					if(vecDiLep.M() < 20.0){continue;}
					// Pelo menos um muon tem que ter IetaI < 2.1
					if(abs(muEta[e]) > 2.1){continue;}
					emu_0b=true;
					mass_inva=vecDiLep.M();
				}
			}
				bool jatinhosE=false;
				jatinhosE=false;
				double energiatransjatos=0;
				JetB=false;
				NJetB=0;
				for(int g=0;g<Njet;g++){
				if(TMath::Abs(jetPt[g])>pt_jato){pt_jato=TMath::Abs(jetPt[g]);}
				jato1.SetPtEtaPhiM(TMath::Abs(jetPt[g]), jetEta[g], jetPhi[g], jetMass[g]);
					for(int k=g+1;k<Njet;k++){
						jato2.SetPtEtaPhiM(TMath::Abs(jetPt[k]), jetEta[k], jetPhi[k], jetMass[k]);
						TLorentzVector VecJets;
						VecJets= jato1+jato2;
						energiatransjatos=0;
						energiatransjatos = VecJets.Et();
						if(energiatransjatos < 30.0){continue;}
						jatinhosE=true;
					}
					if(jetBTagDiscr[g] > 0.244){JetB=true;NJetB++;}
				}
				if(Njet>=2 && emu_0b){h7->Fill(MET,peso);h9->Fill(mass_inva,peso);h12->Fill(pt_jato,peso);}
				if(emu_0b){h1->Fill(NJetB,peso);h5->Fill(Njet,peso);}
			//	if(Njet<=1){continue;}
			//	h1->Fill(NJetB,peso);
				if(jatinhosE && emu_0b){emu_1b=true;h3->Fill(NJetB,peso);}
				if(JetB && emu_1b){emu_2b=true;}
				if(NJetB>=2 && emu_2b){emu_3b=true;}
		}

		// Aqui começa o canal do ee
		if(ee){
				N_ee++;
					//LOOP do canal ee
					for(int a=0;a<Nel;a++){
					if(TMath::Abs(elPt[a]) > pt_electron){pt_electron=TMath::Abs(elPt[a]);}
					if(elMissHits[a]>=2 || fabs(elConvDist[a])<=0.02 || fabs(elConvDcot[a])<= 0.02){continue;}
						eletron1.SetPtEtaPhiM(TMath::Abs(elPt[a]), elEta[a], elPhi[a], 0.000511);
						//Loop pelo segundo eletron
						for(int b=a+1;b<Nel;b++){
						if(elMissHits[b]>=2 || fabs(elConvDist[b])<=0.02 || fabs(elConvDcot[b])<= 0.02){continue;}
							//Eles tem que ter uma carga oposta
							if(elPt[a]*elPt[b] > 0){continue;}
							eletron2.SetPtEtaPhiM(TMath::Abs(elPt[b]), elEta[b], elPhi[b], 0.000511);
							// A massa invariante do sistema tem que ser maior que 20 Gev/c
							TLorentzVector vecDiLep = eletron1 + eletron2;
							if(vecDiLep.M() < 20.0){continue;}
							ee_0b=true;
							//A massa invariante deles não pode ficar entre 76 e 106 geV por causa do DY
							if(76.0 < vecDiLep.M() && vecDiLep.M() < 106.0){continue;}
							ee_1b=true;
							mass_inva=vecDiLep.M();
						}
					}
				//	if(!ee_1b){continue;}
					bool jatinhosE=false;
					jatinhosE=false;
					NJetB=0;
					JetB=false;
					double energiatransjatos=0;
					for(int g=0;g<Njet;g++){
					if(TMath::Abs(jetPt[g])>pt_jato){pt_jato=TMath::Abs(jetPt[g]);}
					jato1.SetPtEtaPhiM(TMath::Abs(jetPt[g]), jetEta[g], jetPhi[g], jetMass[g]);
						for(int k=g+1;k<Njet;k++){
							jato2.SetPtEtaPhiM(TMath::Abs(jetPt[k]), jetEta[k], jetPhi[k], jetMass[k]);
							TLorentzVector VecJets;
							VecJets= jato1 +jato2;
							energiatransjatos=0;
							energiatransjatos = VecJets.Et();
							if(energiatransjatos < 30.0){continue;}
							jatinhosE=true;
						}
					if(jetBTagDiscr[g] > 0.244){JetB=true;NJetB++;}
					}
					if(Njet>=2 && ee_1b){h6->Fill(MET,peso);h8->Fill(mass_inva,peso);}
					if(Njet>=2 && ee_1b && MET>=40){h11->Fill(pt_electron,peso);h12->Fill(pt_jato,peso);}
					if(MET>=40 && ee_1b && ee_0b){h1->Fill(NJetB,peso);h4->Fill(Njet,peso);}
				//	if(Njet<=1){continue;}
					if(jatinhosE && ee_1b){ee_2b=true;}
					if(jatinhosE && ee_1b && MET>=40){h2->Fill(NJetB,peso);}
					//h1->Fill(NJetB,peso);
				//	ee_2b=true;
					if(MET>=40 && ee_2b){ee_3b=true;}
				//	ee_3b=true;
					if(JetB && ee_3b){ee_4b=true;}
				//	ee_4b=true;
					if(NJetB>=2 && ee_4b){ee_5b=true;}
				//	ee_5b=true;
				 }





//preenchemos os contadores

if(mumu_0b){mumu_0++;}
if(mumu_1b){mumu_1++;}
if(mumu_2b){mumu_2++;}
if(mumu_3b){mumu_3++;}
if(mumu_4b){mumu_4++;}
if(mumu_5b){mumu_5++;}

if(emu_0b){emu_0++;}
if(emu_1b){emu_1++;}
if(emu_2b){emu_2++;}
if(emu_3b){emu_3++;}


if(ee_0b){ee_0++;}
if(ee_1b){ee_1++;}
if(ee_2b){ee_2++;}
if(ee_3b){ee_3++;}
if(ee_4b){ee_4++;}
if(ee_5b){ee_5++;}


}



	std::cout<< "Numero de eventos totais: "<< events_total*peso<<endl<<endl;
	std::cout<<"Numero de eventos do canal mumu: "<<N_mumu*peso<<endl;
	std::cout<<"Numero de eventos do canal emu: "<<N_emu*peso<<endl;
	std::cout<<"Numero de eventos do canal ee: "<<N_ee*peso<<endl;



	std::cout<< "Numero de eventos do canal mumu que passaram pelo primeiro corte: " << mumu_0*peso<<" com erro de "<<sqrt(mumu_0*peso)<<endl;
	std::cout<< "Numero de eventos do canal mumu que passaram pelo segundo corte: " << mumu_1*peso<<" com erro de "<<sqrt(mumu_1*peso)<<endl;
	std::cout<< "Numero de eventos do canal mumu que passaram pelo terceiro corte: "<< mumu_2*peso<<" com erro de "<<sqrt(mumu_2*peso)<<endl;
	std::cout<< "Numero de eventos do canal mumu que passaram pelo quarto corte: "<< mumu_3*peso<<" com erro de "<<sqrt(mumu_3*peso)<<endl;
	std::cout<< "Numero de eventos do canal mumu que passaram pelo quinto corte: "<< mumu_4*peso<<" com erro de "<<sqrt(mumu_4*peso)<<endl;
	std::cout<< "Numero de eventos do canal mumu que passaram pelo sexto corte: "<< mumu_5*peso<<" com erro de "<<sqrt(mumu_5*peso)<<endl<<endl;

	std::cout<< "Numero de eventos do canal emu que passaram pelo primeiro corte: " << emu_0*peso<<" com erro de "<<sqrt(emu_0*peso)<<endl;
	std::cout<< "Numero de eventos do canal emu que passaram pelo segundo corte: " << emu_1*peso<<" com erro de "<<sqrt(emu_1*peso)<<endl;
	std::cout<< "Numero de eventos do canal emu que passaram pelo terceiro corte: "<< emu_2*peso<<" com erro de "<<sqrt(emu_2*peso)<<endl;
	std::cout<< "Numero de eventos do canal emu que passaram pelo quarto corte: "<< emu_3*peso<<" com erro de "<<sqrt(emu_3*peso)<<endl<<endl;

	std::cout<< "Numero de eventos do canal ee que passaram pelo primeiro corte: " << ee_0*peso<<" com erro de "<<sqrt(ee_0*peso)<<endl;
	std::cout<< "Numero de eventos do canal ee que passaram pelo segundo corte: " << ee_1*peso<<" com erro de "<<sqrt(ee_1*peso)<<endl;
	std::cout<< "Numero de eventos do canal ee que passaram pelo terceiro corte: "<< ee_2*peso<<" com erro de "<<sqrt(ee_2*peso)<<endl;
	std::cout<< "Numero de eventos do canal ee que passaram pelo quarto corte: "<< ee_3*peso<<" com erro de "<<sqrt(ee_3*peso)<<endl;
	std::cout<< "Numero de eventos do canal ee que passaram pelo quinto corte: "<< ee_4*peso<<" com erro de "<<sqrt(ee_4*peso)<<endl;
	std::cout<< "Numero de eventos do canal ee que passaram pelo sexto corte: "<< ee_5*peso<<" com erro de "<<sqrt(ee_5*peso)<<endl;
//Configuraçãoes do dicriminador

	c1->cd();
	h1->GetXaxis()->SetTitle("NBJets");
	h1->SetLineColor(kBlack);
	h1->SetFillStyle(kRed);
	h1->Draw("HIST");
	leg->Draw();
	c1->SaveAs("disc_cut.pdf");
//Configuração do Numero de jatos de b do canal ee e mumu

	c2->cd();
	h2->GetXaxis()->SetTitle("b-tagged jet multiplicity");
	h2->GetXaxis()->SetTitleSize(0.06);
	h2->GetXaxis()->SetTitleOffset(0.75);
//	h2->GetXaxis()->CenterTitle(true);
	h2->GetYaxis()->SetTitle("Entries");
	h2->GetYaxis()->SetTitleSize(0.06);
	h2->GetYaxis()->SetTitleOffset(0.8);
	h2->GetYaxis()->SetRangeUser(0, 3200);
	h2->SetLineColor(kBlack);
	h2->SetFillColor(kRed+1);
	h2->Draw("HIST");
	leg2->Draw();
	tx->DrawLatexNDC(0.15,0.85,Form("#mu#mu, ee"));
	c2->SaveAs("NBJet_ee_mumu.pdf");

	c3->cd();
	h3->GetXaxis()->SetTitle("b-tagged jet multiplicity");
	h3->GetYaxis()->SetTitle("Entries");
	h3->GetYaxis()->SetTitleSize(0.06);
	h3->GetXaxis()->SetTitleSize(0.06);
	h3->GetYaxis()->SetTitleOffset(0.8);
	h3->GetXaxis()->SetTitleOffset(0.75);
	h3->GetYaxis()->SetTitleOffset(1.55);
	h3->GetYaxis()->SetRangeUser(0, 3700);
	h3->SetLineColor(kBlack);
	h3->SetFillColor(kRed+1);
	h3->Draw("HIST");
	leg3->Draw();
	tx->DrawLatexNDC(0.15,0.85,Form("e#mu"));
	c3->SaveAs("NBJet_emu.pdf");

	c4->cd();
	h4->GetXaxis()->SetTitle("jet multiplicity");
	h4->GetYaxis()->SetTitle("Entries");
	h4->GetXaxis()->SetTitleOffset(0.75);
	h4->GetYaxis()->SetTitleSize(0.06);
	h4->GetYaxis()->SetTitleOffset(0.8);
	h4->GetXaxis()->SetTitleSize(0.06);
	h4->GetYaxis()->SetTitleOffset(1.55);
	h4->GetYaxis()->SetRangeUser(0, 9600);
	h4->SetLineColor(kBlack);
	h4->SetFillColor(kRed+1);
	h4->Draw("HIST");
	leg4->Draw();
	tx->DrawLatexNDC(0.15,0.85,Form("#mu#mu, ee"));
	c4->SaveAs("NJet_ee_mumu.pdf");

	c5->cd();
	h5->GetXaxis()->SetTitle("jet multiplicity");
	h5->GetYaxis()->SetTitle("Entries");
	h5->GetXaxis()->SetTitleOffset(0.75);
	h5->GetYaxis()->SetTitleOffset(1.55);
	h5->GetYaxis()->SetTitleSize(0.06);
	h5->GetXaxis()->SetTitleSize(0.06);
	h5->GetYaxis()->SetTitleOffset(0.8);
	h5->GetYaxis()->SetRangeUser(0, 7000);
	h5->SetLineColor(kBlack);
	h5->SetFillColor(kRed+1);
	h5->Draw("HIST");
	leg5->Draw();
	tx->DrawLatexNDC(0.15,0.85,Form("e#mu"));
	c5->SaveAs("NJet_emu.pdf");

	c6->cd();
	h6->GetXaxis()->SetTitle("Missing E_{T} [GeV]");
	h6->GetYaxis()->SetTitle("Entries/ 5 GeV");
	h6->GetYaxis()->SetTitleSize(0.06);
	h6->GetXaxis()->SetTitleSize(0.06);
	h6->GetXaxis()->SetTitleOffset(0.75);
	h6->GetYaxis()->SetTitleOffset(1.55);
	h6->GetYaxis()->SetTitleOffset(0.8);
	h6->GetYaxis()->SetRangeUser(0, 2300);
	h6->SetLineColor(kBlack);
	h6->SetFillColor(kRed+1);
	h6->Draw("HIST");
	leg6->Draw();
	tx->DrawLatexNDC(0.15,0.85,Form("#mu#mu, ee"));
	c6->SaveAs("MET_ee_mumu.pdf");

	c7->cd();
	h7->GetXaxis()->SetTitle("Missing E_{T} [GeV]");
	h7->GetYaxis()->SetTitle("Entries/ 5 GeV");
	h7->GetXaxis()->SetTitleOffset(0.75);
	h7->GetYaxis()->SetTitleOffset(1.2);
	h7->GetYaxis()->SetTitleSize(0.06);
	h7->GetXaxis()->SetTitleSize(0.06);
	h7->GetYaxis()->SetTitleOffset(0.8);
	h7->GetYaxis()->SetRangeUser(0, 400);
	h7->SetLineColor(kBlack);
	h7->SetFillColor(kRed+1);
	h7->Draw("HIST");
	leg7->Draw();
	tx->DrawLatexNDC(0.15,0.85,Form("e#mu"));
	c7->SaveAs("MET_emu.pdf");

	c8->cd();
	h8->GetXaxis()->SetTitle("M_{ll} [GeV]");
	h8->GetYaxis()->SetTitle("Entries/ 7 GeV");
	h8->GetXaxis()->SetTitleOffset(0.75);
	h8->GetYaxis()->SetTitleSize(0.06);
	h8->GetXaxis()->SetTitleSize(0.06);
	h8->GetYaxis()->SetTitleOffset(0.8);
	h8->GetYaxis()->SetTitleOffset(1.55);
	h8->GetYaxis()->SetRangeUser(0, 1450);
	h8->SetLineColor(kBlack);
	h8->SetFillColor(kRed+1);
	h8->Draw("HIST");
	leg8->Draw();
	tx->DrawLatexNDC(0.15,0.85,Form("#mu#mu, ee"));
	c8->SaveAs("Mass_invar_ee_mumu.pdf");

	c9->cd();
	h9->GetXaxis()->SetTitle("M_{ll} [GeV]");
	h9->GetYaxis()->SetTitle("Entries/ 7 GeV");
	h9->GetXaxis()->SetTitleOffset(0.7);
	h9->GetYaxis()->SetTitleOffset(1.2);
	h9->GetYaxis()->SetTitleSize(0.06);
	h9->GetXaxis()->SetTitleSize(0.06);
	h9->GetYaxis()->SetTitleOffset(0.8);
	h9->GetYaxis()->SetRangeUser(0, 370);
	h9->SetLineColor(kBlack);
	h9->SetFillColor(kRed+1);
	h9->Draw("HIST");
	leg9->Draw();
	tx->DrawLatexNDC(0.15,0.85,Form("e#mu"));
	c9->SaveAs("Mass_invar_emu.pdf");

	c10->cd();
	h10->GetXaxis()->SetTitle("Leading muon p_{t} [GeV]");
	h10->GetYaxis()->SetTitle("Entries/ 5 GeV");
	h10->GetXaxis()->SetTitleOffset(0.7);
	h10->GetYaxis()->SetTitleOffset(1.2);
	h10->GetYaxis()->SetTitleSize(0.06);
	h10->GetYaxis()->SetTitleOffset(0.8);
	h10->GetXaxis()->SetTitleSize(0.06);
	h10->GetYaxis()->SetRangeUser(0, 150);
	h10->SetLineColor(kBlack);
	h10->SetFillColor(kRed+1);
	h10->Draw("HIST");
	leg10->Draw();
	tx->DrawLatexNDC(0.15,0.85,Form("#mu#mu"));
	c10->SaveAs("Pt_mu.pdf");

	c11->cd();
	h11->GetXaxis()->SetTitle("Leading electron p_{t} [GeV]");
	h11->GetYaxis()->SetTitle("Entries/ 5 GeV");
	h11->GetXaxis()->SetTitleOffset(0.7);
	h11->GetYaxis()->SetTitleOffset(1.2);
	h11->GetYaxis()->SetTitleSize(0.06);
	h11->GetYaxis()->SetTitleOffset(0.8);
	h11->GetXaxis()->SetTitleSize(0.06);
	h11->GetYaxis()->SetRangeUser(0, 115);
	h11->SetLineColor(kBlack);
	h11->SetFillColor(kRed+1);
	h11->Draw("HIST");
	leg11->Draw();
	tx->DrawLatexNDC(0.15,0.85,Form("ee"));
	c11->SaveAs("Pt_ele.pdf");

	c12->cd();
	h12->GetXaxis()->SetTitle("Leading jet p_{t} [GeV]");
	h12->GetYaxis()->SetTitle("Entries/6 GeV");
	h12->GetYaxis()->SetTitleOffset(1.2);
	h12->GetXaxis()->SetTitleOffset(0.7);
	h12->GetYaxis()->SetTitleSize(0.06);
	h12->GetYaxis()->SetTitleOffset(0.8);
	h12->GetXaxis()->SetTitleSize(0.06);
	h12->GetYaxis()->SetRangeUser(0, 750);
	h12->SetLineColor(kBlack);
	h12->SetFillColor(kRed+1);
	h12->Draw("HIST");
	leg12->Draw();
	tx->DrawLatexNDC(0.15,0.85,Form("e#mu, #mu#mu, ee"));
	c12->SaveAs("Pt_jet.pdf");
MyFile->cd();
h2->Write();
h3->Write();
h4->Write();
h5->Write();
h6->Write();
h7->Write();
h8->Write();
h9->Write();
h10->Write();
h11->Write();
h12->Write();
MyFile->Close();




/*
	std::cout<<"A eficiencia do segundo corte:"<<(contador2*peso)/(contador1*peso)<<endl;
	std::cout<<"A eficiencia do terceiro corte:"<<(contador3*peso)/(contador1*peso)<<endl;
	std::cout<<"A eficiencia do quarto corte:"<<(contador4*peso)/(contador1*peso)<<endl;
	std::cout<<"A eficiencia do quinto corte:"<<(contador5*peso)/(contador1*peso)<<endl;
	std::cout<<"A eficiencia do sexto corte:"<<(contador6*peso)/(contador1*peso)<<endl;
*/



}

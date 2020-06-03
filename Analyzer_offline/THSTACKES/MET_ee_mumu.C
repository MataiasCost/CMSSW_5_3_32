{
#include<math.h>
#include<TMath.h>
#include <TLorentzVector.h>
#include <TChain.h>
//using namespace std;


TCanvas *c1=new TCanvas("c1","Tudo empilhado",200,10,600,480);

THStack *hs = new THStack("hs", "CMS 2.3 fb^{-1} at #sqrt{s} = 7 TeV");

TFile f1("ht_ttbar.root");
TH1F * h1 = new TH1F("h1","MET" , 30,0,150);
h1 = (TH1F*)f1.Get("MET (ee,mumu)");
h1->SetFillColor(2);

TFile f2("ht_DY_M50.root");
TH1F * h2 = new TH1F("h2","MET" , 30,0,150);
h2 = (TH1F*)f2.Get("MET (ee,mumu)");
h2->SetFillColor(7);

TFile f3("ht_DY_M10_50.root");
TH1F * h3 = new TH1F("h3","MET" , 30,0,150);
h3 = (TH1F*)f3.Get("MET (ee,mumu)");
h3->SetFillColor(kCyan+1);

TFile f4("ht_TW.root");
TH1F * h4 = new TH1F("h4","MET" , 30,0,150);
h4 = (TH1F*)f4.Get("MET (ee,mumu)");
h4->SetFillColor(41);

TFile f5("ht_VV.root");
TH1F * h5 = new TH1F("h5","MET" , 4, 0, 4);
h5 = (TH1F*)f5.Get("MET (ee,mumu)");
h5->SetFillColor(3);


TFile f6("ht_data.root");
TH1F * h6 = new TH1F("h6","data" , 4, 0, 4);
h6 = (TH1F*)f6.Get("MET (ee,mumu)");
h6->SetFillColor(1);
h6->SetMarkerStyle(kFullCircle);


TLegend* leg2 = new TLegend(0.6,0.6,0.8,0.8);
leg2->AddEntry(h6,"data","AP");
leg2->AddEntry(h1,"t#bar{t} signal","f");
leg2->AddEntry(h2,"DY_M50","f");
leg2->AddEntry(h3,"DY_M10_50","f");
leg2->AddEntry(h4,"TW","f");
leg2->AddEntry(h5,"VV","f");


leg2->SetBorderSize(0);
TLatex *tx =new TLatex();
tx->SetTextSize(0.08);
tx->SetTextAlign(13);
tx->SetTextFont(42);




hs->Add(h1);
hs->Add(h4);
hs->Add(h5);
hs->Add(h2);
hs->Add(h3);
hs->SetMaximum(2300);
hs->Draw("HIST");
h6->Draw("same AP0");
leg2->Draw();

hs->GetXaxis()->SetTitle("Missing E_{T} [GeV]");
hs->GetXaxis()->SetTitleSize(0.06);
hs->GetXaxis()->SetTitleOffset(0.75);
hs->GetYaxis()->SetTitle("Entries/ 5 GeV");
hs->GetYaxis()->SetTitleSize(0.06);
hs->GetYaxis()->SetTitleOffset(0.8);
tx->DrawLatexNDC(0.15,0.85,Form("#mu#mu, ee"));
c1->SaveAs("MET (ee,mumu).png");

}

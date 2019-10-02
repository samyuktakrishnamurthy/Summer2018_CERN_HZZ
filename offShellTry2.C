#define offShellTry2_cxx
#include "offShellTry2.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TString.h>
#include <TLorentzVector.h>
#include <map>
#include <string>
#include <iostream>
//#include <hzzenums.h>
#include <sstream>
#include <THStack.h>
#include <TMath.h>

void offShellTry2::Loop()
{
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   // Declaring the histograms
   //Histograms for m4l distribution
   //No jet splitting
   //ggZZ process
   TH1* ggZZ_Full = new TH1F("ggZZ_Full","Mass of 4l", 16, 400, 2000);
   TH1* ggZZ_sgnl = new TH1F("ggZZ_sgnl","Mass of 4l",  16, 400, 2000);
   TH1* ggZZ_bkg = new TH1F("ggZZ_bkg","Mass of 4l",  16, 400,2000);
   //VBF process
   TH1* VBF_Full = new TH1F("VBF_Full","Mass of 4l",  16, 400,2000);
   TH1* VBF_Fullmu5 = new TH1F("VBF_Fullmu5","Mass of 4l",  16, 400,2000);
   TH1* VBF_sgnl = new TH1F("VBF_sgnl","Mass of 4l",  16, 400,2000);
   TH1* VBF_bkg = new TH1F("VBF_bkg","Mass of 4l", 16, 400,2000); 
   //qqZZ and tri-boson processes
   TH1* qqZZ_bkg = new TH1F("qqZZ_bkg", "Mass of 4l",  16, 400, 2000);
   TH1* other_bkg = new TH1F("other_bkg", "Mass of 4l",  16, 400, 2000);
   //10 bins to have a 1d hist spilt for 0 and 1+ jets\

   // jS is jet splitting
   //ggZZ process
   TH1* ggZZ_FulljS = new TH1F("ggZZ_FulljS","Mass of 4l", 32, 400 ,3600);
   TH1* ggZZ_sgnljS = new TH1F("ggZZ_sgnljS","Mass of 4l",  32, 400,  3600);
   TH1* ggZZ_bkgjS = new TH1F("ggZZ_bkgjS","Mass of 4l", 32, 400,3600);
   //VBF process
   TH1* VBF_FulljS = new TH1F("VBF_FulljS","Mass of 4l",32, 400, 3600);
   TH1* VBF_FulljSmu5 = new TH1F("VBF_FulljSmu5","Mass of 4l", 32, 400,3600);
   TH1* VBF_sgnljS = new TH1F("VBF_sgnljS","Mass of 4l", 32, 400, 3600);
   TH1* VBF_bkgjS = new TH1F("VBF_bkgjS","Mass of 4l", 32, 400, 3600);
   //qqZZ and tri-boson
   TH1* qqZZ_bkgjS = new TH1F("qqZZ_bkgjS", "Mass of 4l", 32, 400, 3600);
   TH1* other_bkgjS = new TH1F("other_bkgkjS", "Mass of 4l", 32, 400, 3600);


   //Histograms for jet distribution
   TH1* qqZZ_bkg_njet = new TH1F ("qqZZ_bkg_njet", "n_jet dist", 4, 0, 4);
   TH1* ggZZ_Full_njet = new TH1F ("ggZZ_Full_njet", "n_jet dist", 4, 0, 4);
   TH1* VBF_Full_njet = new TH1F("VBF_Full_njet","n_jet Dist", 4, 0, 4);
   TH1* VBF_bkg_njet = new TH1F("VBF_bkg_njet","n_jet dist", 4, 0, 4);


   //Histograms for ME
   //ggZZ process
   TH1* ggZZ_Full_ME = new TH1F("ggZZ_Full_ME","ME distribution", 10, -4.5, 0.5);
   TH1* ggZZ_sgnl_ME = new TH1F("ggZZ_sgnl_ME","ME distribution", 10, -4.5, 0.5);
   TH1* ggZZ_bkg_ME = new TH1F("ggZZ_bkg_ME","ME distribution", 10, -4.5, 0.5);
   //VBF process
   TH1* VBF_Full_ME = new TH1F("VBF_Full_ME","ME distribution", 10, -4.5, 0.5);
   TH1* VBF_Full_MEmu5 = new TH1F("VBF_Full_MEmu5","ME distribution", 10, -4.5, 0.5);
   TH1* VBF_sgnl_ME = new TH1F("VBF_sgnl_ME","ME distribution", 10, -4.5, 0.5);
   TH1* VBF_bkg_ME = new TH1F("VBF_bkg_ME","ME distribution", 10, -4.5, 0.5); 
   //qqZZ and tri-boson processes
   TH1* qqZZ_bkg_ME = new TH1F("qqZZ_bkg_ME","ME distribution", 10, -4.5, 0.5);
   TH1* other_bkg_ME = new TH1F("other_bkg_ME", "ME distribution", 10, -4.5, 0.5);
   //Combined ggH and VBF histogram
   TH1* ggHVBF_ME = new TH1F("ggHVBF_ME", "ME distribution", 10, -4.5, 0.5);

   //ME histograms with Jet splitting
   //ggZZ process
   TH1* ggZZ_Full_MEjS = new TH1F("ggZZ_Full_MEjS","ME distribution", 20, -4.5, 5.5);
   TH1* ggZZ_sgnl_MEjS = new TH1F("ggZZ_sgnl_MEjS","ME distribution",  20, -4.5, 5.5);
   TH1* ggZZ_bkg_MEjS = new TH1F("ggZZ_bkg_MEjS","ME distribution", 20, -4.5, 5.5);
   //VBF process
   TH1* VBF_Full_MEjS = new TH1F("VBF_Full_MEjS","ME distribution", 20, -4.5, 5.5);
   TH1* VBF_Full_MEmu5jS = new TH1F("VBF_Full_MEmu5jS","ME distribution", 20, -4.5, 5.5);
   TH1* VBF_sgnl_MEjS = new TH1F("VBF_sgnl_MEjS","ME distribution",  20, -4.5, 5.5);
   TH1* VBF_bkg_MEjS = new TH1F("VBF_bkg_MEjS","ME distribution", 20, -4.5, 5.5);
   //qqZZ and tri-boson processes
   TH1* qqZZ_bkg_MEjS = new TH1F("qqZZ_bkg_MEjS","ME distribution",  20, -4.5, 5.5);
   TH1* other_bkg_MEjS = new TH1F("other_bkg_MEjS", "ME distribution",  20, -4.5, 5.5);
   //Combined ggH and VBF histogram
   TH1* ggHVBF_MEjS = new TH1F("ggHVBF_MEjS", "ME distribution", 20, -4.5, 5.5);

   //TProfile
   TProfile* ggZZtprof = new TProfile("ggZZtprof","",10, 200, 2000, 0, 5 );
   TProfile* VBFtprof = new TProfile("VBFtprof","",10, 200, 2000, 0, 5 );
   TProfile* qqZZtprof = new TProfile("qqZZtprof","",10, 200, 2000, 0, 5 );
   

   //split plots 0 jets
   TH1* ggZZ_Full_ME0j = new TH1F("ggZZ_Full_ME0j","ME distribution", 10, 100, 2400);
   TH1* ggZZ_sgnl_ME0j = new TH1F("ggZZ_sgnl_ME0j","ME distribution", 10, 100, 2400);
   TH1* ggZZ_bkg_ME0j = new TH1F("ggZZ_bkg_ME0j","ME distribution", 10,  100, 2400);
   //VBF process
   TH1* VBF_Full_ME0j = new TH1F("VBF_Full_ME0j","ME distribution", 10, 100, 2400);
   TH1* VBF_Full_MEmu50j = new TH1F("VBF_Full_MEmu50j","ME distribution", 10, 100, 2400);
   TH1* VBF_sgnl_ME0j = new TH1F("VBF_sgnl_ME0j","ME distribution",  10, 100, 2400);
   TH1* VBF_bkg_ME0j = new TH1F("VBF_bkg_ME0j","ME distribution", 10, 100, 2400);
   //qqZZ and tri-boson processes
   TH1* qqZZ_bkg_ME0j = new TH1F("qqZZ_bkg_ME0j","ME distribution",  10, 100, 2400);
   TH1* other_bkg_ME0j = new TH1F("other_bkg_ME0j", "ME distribution",  10, 100, 2400);
   //Combined ggH and VBF histogram
   TH1* ggHVBF_ME0j = new TH1F("ggHVBF_ME0j", "ME distribution", 10, 400, 2400);
   
   //split plots 1 jets
   TH1* ggZZ_Full_ME1j = new TH1F("ggZZ_Full_ME1j","ME distribution", 10, 100, 2400);
   TH1* ggZZ_sgnl_ME1j = new TH1F("ggZZ_sgnl_ME1j","ME distribution", 10, 100, 2400);
   TH1* ggZZ_bkg_ME1j = new TH1F("ggZZ_bkg_ME1j","ME distribution", 10, 100, 2400);
   //VBF process
   TH1* VBF_Full_ME1j = new TH1F("VBF_Full_ME1j","ME distribution", 10, 100, 2400);
   TH1* VBF_Full_MEmu51j = new TH1F("VBF_Full_MEmu51j","ME distribution", 10, 100, 2400);
   TH1* VBF_sgnl_ME1j = new TH1F("VBF_sgnl_ME1j","ME distribution",  10, 100, 2400);
   TH1* VBF_bkg_ME1j = new TH1F("VBF_bkg_ME1j","ME distribution", 10, 100, 2400);
   //qqZZ and tri-boson processes
   TH1* qqZZ_bkg_ME1j = new TH1F("qqZZ_bkg_ME1j","ME distribution",  10, 100, 2400);
   TH1* other_bkg_ME1j = new TH1F("other_bkg_ME1j", "ME distribution",  10, 100, 2400);
   //Combined ggH and VBF histogram
   TH1* ggHVBF_ME1j = new TH1F("ggHVBF_ME1j", "ME distribution", 10, 100, 2400);


   for (Long64_t jentry=0; jentry<nentries;jentry++) {
     //first z
     TLorentzVector lep1Z1;
     TLorentzVector lep2Z1;
     //second Z
     TLorentzVector lep1Z2;
     TLorentzVector lep2Z2;
 
     double matEle;

     Long64_t ientry = LoadTree(jentry);
     if (ientry < 0) break;
     nb = fChain->GetEntry(jentry);   nbytes += nb;
     double m4l = (double)m4l_fsr;
     //Mass cut at 220
     if (m4l>400 && pass_vtx4lCut==1){
       //qqZZ bkg 
       if (fCurrent>=0 && fCurrent <=2){
	 qqZZ_bkg->Fill(m4l_fsr, weight);//m4l dist filling no JS
	 qqZZ_bkg_njet->Fill(n_jets); //jet dist
	 matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));//calc ME
	 qqZZ_bkg_ME ->Fill(matEle, weight);//ME dist no JS
	 qqZZtprof->Fill(m4l_fsr, n_jets, weight);
	 if (n_jets == 0){//Splitting in 0 and 1+ jets
	   qqZZ_bkgjS->Fill(m4l_fsr, weight);// m4l 0 jets
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));//calc ME
	   qqZZ_bkg_MEjS->Fill(matEle, weight);//ME 0 jets
	   qqZZ_bkg_ME0j->Fill(m4l_fsr, weight);//ME 0 jets
	 }
	 else {
	   m4l_fsr += 1600; //shifting mass
	   qqZZ_bkgjS->Fill(m4l_fsr, weight);// m4l 1+ jets 
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ)) + 5;// shifting the ME
           qqZZ_bkg_MEjS->Fill(matEle, weight);// ME 1+ jets
	   qqZZ_bkg_ME1j->Fill(m4l_fsr, weight);//ME 0 jets
	 }
       }
       //other bkg 
       if(fCurrent >= 3 && fCurrent <= 6) {
	 other_bkg->Fill(m4l_fsr, weight);
	 matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));//calc ME
         other_bkg_ME->Fill(matEle, weight);//ME dist no JS
	 if (n_jets == 0){
           other_bkgjS->Fill(m4l_fsr, weight);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));//calc ME
           other_bkg_MEjS->Fill(matEle, weight);//ME 0 jets
	   other_bkg_ME0j->Fill(m4l_fsr, weight);//ME 0 jets
	 }
         else {
           m4l_fsr += 1600;
           other_bkgjS->Fill(m4l_fsr, weight);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ))+5;//calc ME
           other_bkg_MEjS->Fill(matEle, weight);//ME 0 jets
	   other_bkg_ME1j->Fill(m4l_fsr, weight);//ME 0 jets
	 }
       }
       //ggZZ full process
       if(fCurrent == 7) {
	 ggZZ_Full->Fill(m4l_fsr, 1.2*weight*weight_ggZZNLO_kSBI);
	 matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
	 ggZZ_Full_njet->Fill(n_jets);
	 ggHVBF_ME->Fill(matEle,  1.2*weight*weight_ggZZNLO_kSBI); 
	 ggZZ_Full_ME->Fill(matEle, 1.2*weight*weight_ggZZNLO_kSBI);
	 ggZZtprof->Fill(m4l_fsr, n_jets, 1.2*weight*weight_ggZZNLO_kSBI);
	 if (n_jets == 0){
           ggZZ_FulljS->Fill(m4l_fsr,1.2*weight*weight_ggZZNLO_kSBI);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
           ggZZ_Full_MEjS->Fill(matEle,1.2*weight*weight_ggZZNLO_kSBI);
	   ggZZ_Full_ME0j->Fill(m4l_fsr,1.2*weight*weight_ggZZNLO_kSBI);
         }
         else {
           m4l_fsr += 1600;
	   ggZZ_FulljS->Fill(m4l_fsr, 1.2*weight*weight_ggZZNLO_kSBI);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ))+5;
           ggZZ_Full_MEjS->Fill(matEle, 1.2*weight*weight_ggZZNLO_kSBI);
	   ggZZ_Full_ME1j->Fill(m4l_fsr,1.2*weight*weight_ggZZNLO_kSBI);
	 }
       }
       //ggZZ background
       if(fCurrent == 8) {
	 ggZZ_bkg->Fill(m4l_fsr, 1.2*weight*weight_ggZZNLO_kB);
	 matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
	 ggZZ_bkg_ME->Fill(matEle, 1.2*weight*weight_ggZZNLO_kB);
	 if (n_jets == 0){
           ggZZ_bkgjS->Fill(m4l_fsr, 1.2*weight*weight_ggZZNLO_kB);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
           ggZZ_bkg_MEjS->Fill(matEle,  1.2*weight*weight_ggZZNLO_kB);
	   ggZZ_bkg_ME0j->Fill(m4l_fsr,  1.2*weight*weight_ggZZNLO_kB);
	 }
         else {
           m4l_fsr += 1600;
           ggZZ_bkgjS->Fill(m4l_fsr, 1.2*weight*weight_ggZZNLO_kB);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ))+5;
           ggZZ_bkg_MEjS->Fill(matEle, 1.2*weight*weight_ggZZNLO_kB);
	   ggZZ_bkg_ME1j->Fill(m4l_fsr,  1.2*weight*weight_ggZZNLO_kB);
	 }
       }
       if (fCurrent == 9){
	 ggZZ_sgnl->Fill(m4l_fsr, 1.2*weight*weight_ggZZNLO_kS);
	 matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
         ggZZ_sgnl_ME->Fill(matEle,  1.2*weight*weight_ggZZNLO_kS);
	 if (n_jets == 0){
	   ggZZ_sgnljS->Fill(m4l_fsr, 1.2*weight*weight_ggZZNLO_kS);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
	   ggZZ_sgnl_MEjS->Fill(matEle,  1.2*weight*weight_ggZZNLO_kS);
	   ggZZ_sgnl_ME0j->Fill(m4l_fsr,  1.2*weight*weight_ggZZNLO_kS);

	 }
	 else {
	   m4l_fsr += 1600;
	   ggZZ_sgnljS->Fill(m4l_fsr, 1.2*weight*weight_ggZZNLO_kS);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ))+5;
	   ggZZ_sgnl_MEjS->Fill(matEle, 1.2*weight*weight_ggZZNLO_kS);
	   ggZZ_sgnl_ME1j->Fill(m4l_fsr,  1.2*weight*weight_ggZZNLO_kS);
	 }
       }
       if (fCurrent == 10){
	 VBF_Full->Fill(m4l_fsr, weight*(pass_vtx4lCut==1));
	 VBF_Full_njet->Fill(n_jets);
	 matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
         VBF_Full_ME->Fill(matEle, weight);
	 ggHVBF_ME->Fill(matEle, weight);
	 VBFtprof->Fill(m4l_fsr, n_jets, weight);
	 if (n_jets == 0){
	   VBF_FulljS->Fill(m4l_fsr, weight);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
	   VBF_Full_MEjS->Fill(matEle, weight);
	   VBF_Full_ME0j->Fill(m4l_fsr, weight);
	 }
	 else {
	   m4l_fsr += 1600;
	   VBF_FulljS->Fill(m4l_fsr, weight);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ))+5;
	   VBF_Full_MEjS->Fill(matEle, weight);
	   VBF_Full_ME1j->Fill(m4l_fsr, weight);
	 }
       }
       if (fCurrent == 11){
	 VBF_sgnl->Fill(m4l_fsr, weight*(pass_vtx4lCut==1));
	 matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
         VBF_sgnl_ME->Fill(matEle, weight);
	 if (n_jets == 0){
	   VBF_sgnljS->Fill(m4l_fsr, weight);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
	   VBF_sgnl_MEjS->Fill(matEle, weight);
	   VBF_sgnl_ME0j->Fill(m4l_fsr, weight);
	 }
	 else {
	   m4l_fsr += 1600;
	   VBF_sgnljS->Fill(m4l_fsr, weight);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ))+5;
	   VBF_sgnl_MEjS->Fill(matEle, weight);
	   VBF_sgnl_ME1j->Fill(m4l_fsr, weight);
	 }
       }
       if (fCurrent == 12){
	 VBF_bkg->Fill(m4l_fsr, weight*(pass_vtx4lCut==1));
	 VBF_bkg_njet->Fill(n_jets);
	 matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
	 VBF_bkg_ME->Fill(matEle, weight);
	 if (n_jets == 0){
	   VBF_bkgjS->Fill(m4l_fsr, weight);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
	   VBF_bkg_MEjS->Fill(matEle, weight);
	   VBF_bkg_ME0j->Fill(m4l_fsr, weight);
	 }
	 else {
	   m4l_fsr += 1600;
	   VBF_bkgjS->Fill(m4l_fsr, weight);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ))+5;
	   VBF_bkg_MEjS->Fill(matEle, weight);
	   VBF_bkg_ME1j->Fill(m4l_fsr, weight);
	 }
       }
       if (fCurrent == 13){
	 VBF_Fullmu5->Fill(m4l_fsr, weight*(pass_vtx4lCut==1));
	 matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
	 VBF_Full_MEmu5->Fill(matEle, weight);
	 if (n_jets == 0){
	   VBF_FulljSmu5->Fill(m4l_fsr, weight);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ));
	   VBF_Full_MEmu5jS ->Fill(matEle, weight);
	   VBF_Full_MEmu50j ->Fill(m4l_fsr, weight);
	 }
	 else {
	   m4l_fsr += 1600;
	   VBF_FulljSmu5->Fill(m4l_fsr, weight);
	   matEle = TMath::Log10(MCFM_dxs_HZZ/(MCFM_dxs_ggZZtot+0.1*MCFM_dxs_ZZ))+5;
	   VBF_Full_MEmu5jS->Fill(matEle, weight);
	   VBF_Full_MEmu51j->Fill(m4l_fsr, weight);
	 }
       }
     }
     if (jentry%10000==0){
       cout<<jentry<<endl;
     }
   }
   
   TFile* outputFile1 = new TFile("m4l_400_16binNS.root", "RECREATE");
   qqZZ_bkg->Write();
   other_bkg->Write();
   ggZZ_Full->Write();
   ggZZ_bkg->Write();
   ggZZ_sgnl->Write();
   VBF_Full->Write();  
   VBF_Fullmu5->Write();
   VBF_bkg->Write();
   VBF_sgnl->Write();
   //hs->Write();
   outputFile1->Close();
   
   //ggZZ_sgnl->Draw("same");
   //ggZZ_Full->Draw("same");
   TFile* outputFile2 = new TFile("m4l_400_32binJS.root", "RECREATE");
   qqZZ_bkgjS->Write();
   other_bkgjS->Write();
   ggZZ_FulljS->Write();
   ggZZ_bkgjS->Write();
   ggZZ_sgnljS->Write();
   
   VBF_FulljS->Write();
   VBF_FulljSmu5->Write();
   VBF_bkgjS->Write();
   VBF_sgnljS->Write();
   //hs->Write();
   outputFile2->Close();
   
   // TFile* outputFile3 = new TFile("Jet_dist.root", "RECREATE");
   // qqZZ_bkg_njet->Write();
   // ggZZ_Full_njet->Write();
   // VBF_Full_njet->Write();
   // VBF_bkg_njet->Write();
   // outputFile3->Close();
   
   TFile* outputFile4 = new TFile("ME_Dist400NS.root", "RECREATE");
   ggZZ_Full_ME->Write();
   ggZZ_sgnl_ME->Write();
   ggZZ_bkg_ME->Write();
   VBF_Full_ME->Write();
   VBF_sgnl_ME->Write();
   VBF_bkg_ME->Write();
   qqZZ_bkg_ME->Write();
   ggHVBF_ME->Write();
   VBF_Full_MEmu5->Write();
   other_bkg_ME->Write();
   
   outputFile4->Close();

   TFile* outputFile5 = new TFile("ME_Dist400JS.root", "RECREATE");
   ggZZ_Full_MEjS->Write();
   ggZZ_bkg_MEjS->Write();
   ggZZ_sgnl_MEjS->Write();
   VBF_Full_MEjS->Write();
   VBF_sgnl_MEjS->Write();
   VBF_bkg_MEjS->Write();
   qqZZ_bkg_MEjS->Write();
   other_bkg_MEjS->Write();
   ggHVBF_ME->Write();
   VBF_Full_MEmu5jS->Write();
  
   outputFile5->Close();

      
   /*
   TFile* outputFile6 = new TFile("ME_Dist400sepJStrial.root", "RECREATE");
   ggZZ_Full_ME0j->Write();
   ggZZ_bkg_ME0j->Write();
   ggZZ_sgnl_ME0j->Write();
   VBF_Full_ME0j->Write();
   VBF_sgnl_ME0j->Write();
   VBF_bkg_ME0j->Write();
   qqZZ_bkg_ME0j->Write();
   other_bkg_ME0j->Write();
   VBF_Full_MEmu50j->Write();
   ggZZ_Full_ME1j->Write();
   ggZZ_bkg_ME1j->Write();
   ggZZ_sgnl_ME1j->Write();
   VBF_Full_ME1j->Write();
   VBF_sgnl_ME1j->Write();
   VBF_bkg_ME1j->Write();
   qqZZ_bkg_ME1j->Write();
   other_bkg_ME1j->Write();
   VBF_Full_MEmu51j->Write();
   outputFile6->Close();


   cout << ggZZ_Full_ME0j->Integral()<<endl;
   cout <<ggZZ_Full_ME1j->Integral()<<endl;

   cout << VBF_Full_ME0j->Integral()<<endl;
   cout << VBF_Full_ME1j->Integral()<<endl;
   
   cout << qqZZ_bkg_ME0j->Integral()<<endl;
   cout << qqZZ_bkg_ME1j->Integral()<<endl;
   //ggZZ_Full->Write();
   //ggZZ_bkg->Write();
   //ggZZ_sgnl->Write();
   
   TFile* outputFile6 = new TFile("TProf.root", "RECREATE");
   ggZZtprof->Write();
   qqZZtprof->Write();
   VBFtprof->Write();
   */
}



/*

// Prepare 4-vectors for the two leptons of the first Z
     //lep1Z1.SetPtEtaPhiM(lepton_pt[0], lepton_eta[0], lepton_phi[0], lepton_m[0]);
     //lep2Z1.SetPtEtaPhiM(lepton_pt[1], lepton_eta[1], lepton_phi[1], lepton_m[1]);

     // Prepare 4-vectors for the two leptons of the second Z
     //lep1Z2.SetPtEtaPhiM(lepton_pt[2], lepton_eta[2], lepton_phi[2], lepton_m[2]);
     //lep2Z2.SetPtEtaPhiM(lepton_pt[3], lepton_eta[3], lepton_phi[3], lepton_m[3]);

     // Build the Higgs 4-vector
     //TLorentzVector vecZ1    = (lep1Z1 + lep2Z1);
     //TLorentzVector vecZ2    = (lep1Z2 + lep2Z2);
     //TLorentzVector vecHiggs = vecZ1 + vecZ2;
     //double m4l = m4l_fsr;

     if (vecHiggs.M()>400 && pass_vtx4lCut==1){
       if (fCurrent >= 0 && fCurrent<=1){
	qqZZ_bkg->Fill(vecHiggs.M(), weight);
       }
       if(fCurrent >= 2 && fCurrent <= 5) {
	 other_bkg->Fill(vecHiggs.M(), weight);
       }
       if(fCurrent == 6) {
	 ggZZ_Full->Fill(vecHiggs.M(), weight*weight_ggZZNLO_kS);
       }
       if(fCurrent == 7) {
	 ggZZ_bkg->Fill(vecHiggs.M(),weight*weight_ggZZNLO_kS);
       }
       if (fCurrent == 8){
	 //m4l_data_uncon->Fill(m4l_unconstrained, (weight_couplings* pass_vtx4lCut>0));
	 ggZZ_sgnl->Fill(vecHiggs.M(), weight*weight_ggZZNLO_kS);
       }
     }

     // if (Cut(ientry) < 0) continue;
   }
}
*/

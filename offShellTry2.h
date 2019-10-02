//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jun 26 17:10:26 2018 by ROOT version 5.34/36
// from TChain nominal/
//////////////////////////////////////////////////////////

#ifndef offShellTry2_h
#define offShellTry2_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class offShellTry2 {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Bool_t          has_fid;
   Bool_t          has_reco;
   Float_t         MCFM_dxs_HZZ;
   Float_t         MCFM_dxs_ZZ;
   Float_t         MCFM_dxs_ggZZ;
   Float_t         MCFM_dxs_ggZZint;
   Float_t         MCFM_dxs_ggZZtot;
   Float_t         ave_int_per_xing;
   Int_t           cand_index;
   Float_t         cth1;
   Float_t         cth2;
   Float_t         cthstr;
   Float_t         cthstr_fsr;
   Float_t         dR_jH;
   Float_t         dijet_deltaeta;
   Float_t         dijet_deltaphi;
   Float_t         dijet_invmass;
   Float_t         dijet_pt;
   ULong64_t       event;
   Int_t           event_type;
   Float_t         fsr_eta;
   Float_t         fsr_phi;
   Float_t         fsr_pt;
   Int_t           hasExtraLepNominal;
   Float_t         jet_eta[4];
   Float_t         jet_pt[4];
   Float_t         leading_jet_pt;
   Float_t         lepton_eta[4];
   Float_t         lepton_phi[4];
   Float_t         lepton_pt[4];
   Float_t         m4l_fsr;
   Float_t         m4l_truth_born;
   Float_t         m4l_truth_matched_bare;
   Float_t         m4l_unconstrained;
   Float_t         mZ1_fsr;
   Float_t         mZ2_fsr;
   Float_t         met_et;
   Float_t         min_dR_jZ;
   Int_t           n_jets;
   UInt_t          npv;
   Int_t           pass_reco_cut;
   Int_t           pass_vtx4lCut;
   Float_t         phi;
   Float_t         phi1;
   Float_t         pt4l_fsr;
   Int_t           random_run;
   Int_t           run;
   Float_t         truth_event_m_st11;
   Float_t         truth_event_m_st3;
   Int_t           truth_event_type_sherpaSt3;
   Int_t           truth_pairing;
   Float_t         vtx4l_chi2ndf;
   Double_t        w_EW;
   Double_t        w_HOEW;
   Double_t        w_HOQCD;
   Double_t        w_MCw;
   Double_t        w_br;
   Double_t        w_btagEff;
   Double_t        w_lepEff;
   Double_t        w_lumi;
   Double_t        w_pileup;
   Double_t        w_sherpaLep;
   Double_t        w_triggerSF;
   Double_t        w_xs;
   Double_t        weight;
   Double_t        weight_corr;
   Double_t        weight_lumi;
   Double_t        weight_sampleoverlap;
   Float_t         y4l_fsr;
   Float_t         y4l_unconstrained;
   Double_t        weight_var_EL_EFF_ID_TOTAL_1NPCOR_PLUS_UNCOR__1down;
   Double_t        weight_var_EL_EFF_ID_TOTAL_1NPCOR_PLUS_UNCOR__1up;
   Double_t        weight_var_EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR__1down;
   Double_t        weight_var_EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR__1up;
   Double_t        weight_var_EL_EFF_Reco_TOTAL_1NPCOR_PLUS_UNCOR__1down;
   Double_t        weight_var_EL_EFF_Reco_TOTAL_1NPCOR_PLUS_UNCOR__1up;
   Double_t        weight_var_HOEW_QCD_syst__1down;
   Double_t        weight_var_HOEW_QCD_syst__1up;
   Double_t        weight_var_HOEW_syst__1down;
   Double_t        weight_var_HOEW_syst__1up;
   Double_t        weight_var_HOQCD_scale_syst__1down;
   Double_t        weight_var_HOQCD_scale_syst__1up;
   Double_t        weight_var_MUON_EFF_STAT_LOWPT__1down;
   Double_t        weight_var_MUON_EFF_STAT_LOWPT__1up;
   Double_t        weight_var_MUON_EFF_STAT__1down;
   Double_t        weight_var_MUON_EFF_STAT__1up;
   Double_t        weight_var_MUON_EFF_SYS_LOWPT__1down;
   Double_t        weight_var_MUON_EFF_SYS_LOWPT__1up;
   Double_t        weight_var_MUON_EFF_SYS__1down;
   Double_t        weight_var_MUON_EFF_SYS__1up;
   Double_t        weight_var_MUON_ISO_STAT__1down;
   Double_t        weight_var_MUON_ISO_STAT__1up;
   Double_t        weight_var_MUON_ISO_SYS__1down;
   Double_t        weight_var_MUON_ISO_SYS__1up;
   Double_t        weight_var_MUON_TTVA_STAT__1down;
   Double_t        weight_var_MUON_TTVA_STAT__1up;
   Double_t        weight_var_MUON_TTVA_SYS__1down;
   Double_t        weight_var_MUON_TTVA_SYS__1up;
   Double_t        weight_var_PRW_DATASF__1down;
   Double_t        weight_var_PRW_DATASF__1up;
   Double_t        MELA_ggZZ;
   Double_t        MELA_ggZZ_deco;
   Double_t        w_MCw_uncorrected;
   Double_t        weight_SumwCorrection;
   Double_t        weight_ggZZNLO_kS;
   Double_t        weight_ggZZNLO_kB;
   Double_t        weight_ggZZNLO_kI;
   Double_t        weight_ggZZNLO_kSBI;
   Double_t        weight_var_th_ggZZNLO_kS_up;
   Double_t        weight_var_th_ggZZNLO_kB_up;
   Double_t        weight_var_th_ggZZNLO_kI_up;
   Double_t        weight_var_th_ggZZNLO_kSBI_up;
   Double_t        weight_var_th_ggZZNLO_kS_down;
   Double_t        weight_var_th_ggZZNLO_kB_down;
   Double_t        weight_var_th_ggZZNLO_kI_down;
   Double_t        weight_var_th_ggZZNLO_kSBI_down;

   // List of branches
   TBranch        *b_has_fid;   //!
   TBranch        *b_has_reco;   //!
   TBranch        *b_MCFM_dxs_HZZ;   //!
   TBranch        *b_MCFM_dxs_ZZ;   //!
   TBranch        *b_MCFM_dxs_ggZZ;   //!
   TBranch        *b_MCFM_dxs_ggZZint;   //!
   TBranch        *b_MCFM_dxs_ggZZtot;   //!
   TBranch        *b_ave_int_per_xing;   //!
   TBranch        *b_cand_index;   //!
   TBranch        *b_cth1;   //!
   TBranch        *b_cth2;   //!
   TBranch        *b_cthstr;   //!
   TBranch        *b_cthstr_fsr;   //!
   TBranch        *b_dR_jH;   //!
   TBranch        *b_dijet_deltaeta;   //!
   TBranch        *b_dijet_deltaphi;   //!
   TBranch        *b_dijet_invmass;   //!
   TBranch        *b_dijet_pt;   //!
   TBranch        *b_event;   //!
   TBranch        *b_event_type;   //!
   TBranch        *b_fsr_eta;   //!
   TBranch        *b_fsr_phi;   //!
   TBranch        *b_fsr_pt;   //!
   TBranch        *b_hasExtraLepNominal;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_leading_jet_pt;   //!
   TBranch        *b_lepton_eta;   //!
   TBranch        *b_lepton_phi;   //!
   TBranch        *b_lepton_pt;   //!
   TBranch        *b_m4l_fsr;   //!
   TBranch        *b_m4l_truth_born;   //!
   TBranch        *b_m4l_truth_matched_bare;   //!
   TBranch        *b_m4l_unconstrained;   //!
   TBranch        *b_mZ1_fsr;   //!
   TBranch        *b_mZ2_fsr;   //!
   TBranch        *b_met_et;   //!
   TBranch        *b_min_dR_jZ;   //!
   TBranch        *b_n_jets;   //!
   TBranch        *b_npv;   //!
   TBranch        *b_pass_reco_cut;   //!
   TBranch        *b_pass_vtx4lCut;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_phi1;   //!
   TBranch        *b_pt4l_fsr;   //!
   TBranch        *b_random_run;   //!
   TBranch        *b_run;   //!
   TBranch        *b_truth_event_m_st11;   //!
   TBranch        *b_truth_event_m_st3;   //!
   TBranch        *b_truth_event_type_sherpaSt3;   //!
   TBranch        *b_truth_pairing;   //!
   TBranch        *b_vtx4l_chi2ndf;   //!
   TBranch        *b_w_EW;   //!
   TBranch        *b_w_HOEW;   //!
   TBranch        *b_w_HOQCD;   //!
   TBranch        *b_w_MCw;   //!
   TBranch        *b_w_br;   //!
   TBranch        *b_w_btagEff;   //!
   TBranch        *b_w_lepEff;   //!
   TBranch        *b_w_lumi;   //!
   TBranch        *b_w_pileup;   //!
   TBranch        *b_w_sherpaLep;   //!
   TBranch        *b_w_triggerSF;   //!
   TBranch        *b_w_xs;   //!
   TBranch        *b_weight;   //!
   TBranch        *b_weight_corr;   //!
   TBranch        *b_weight_lumi;   //!
   TBranch        *b_weight_sampleoverlap;   //!
   TBranch        *b_y4l_fsr;   //!
   TBranch        *b_y4l_unconstrained;   //!
   TBranch        *b_weight_var_EL_EFF_ID_TOTAL_1NPCOR_PLUS_UNCOR__1down;   //!
   TBranch        *b_weight_var_EL_EFF_ID_TOTAL_1NPCOR_PLUS_UNCOR__1up;   //!
   TBranch        *b_weight_var_EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR__1down;   //!
   TBranch        *b_weight_var_EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR__1up;   //!
   TBranch        *b_weight_var_EL_EFF_Reco_TOTAL_1NPCOR_PLUS_UNCOR__1down;   //!
   TBranch        *b_weight_var_EL_EFF_Reco_TOTAL_1NPCOR_PLUS_UNCOR__1up;   //!
   TBranch        *b_weight_var_HOEW_QCD_syst__1down;   //!
   TBranch        *b_weight_var_HOEW_QCD_syst__1up;   //!
   TBranch        *b_weight_var_HOEW_syst__1down;   //!
   TBranch        *b_weight_var_HOEW_syst__1up;   //!
   TBranch        *b_weight_var_HOQCD_scale_syst__1down;   //!
   TBranch        *b_weight_var_HOQCD_scale_syst__1up;   //!
   TBranch        *b_weight_var_MUON_EFF_STAT_LOWPT__1down;   //!
   TBranch        *b_weight_var_MUON_EFF_STAT_LOWPT__1up;   //!
   TBranch        *b_weight_var_MUON_EFF_STAT__1down;   //!
   TBranch        *b_weight_var_MUON_EFF_STAT__1up;   //!
   TBranch        *b_weight_var_MUON_EFF_SYS_LOWPT__1down;   //!
   TBranch        *b_weight_var_MUON_EFF_SYS_LOWPT__1up;   //!
   TBranch        *b_weight_var_MUON_EFF_SYS__1down;   //!
   TBranch        *b_weight_var_MUON_EFF_SYS__1up;   //!
   TBranch        *b_weight_var_MUON_ISO_STAT__1down;   //!
   TBranch        *b_weight_var_MUON_ISO_STAT__1up;   //!
   TBranch        *b_weight_var_MUON_ISO_SYS__1down;   //!
   TBranch        *b_weight_var_MUON_ISO_SYS__1up;   //!
   TBranch        *b_weight_var_MUON_TTVA_STAT__1down;   //!
   TBranch        *b_weight_var_MUON_TTVA_STAT__1up;   //!
   TBranch        *b_weight_var_MUON_TTVA_SYS__1down;   //!
   TBranch        *b_weight_var_MUON_TTVA_SYS__1up;   //!
   TBranch        *b_weight_var_PRW_DATASF__1down;   //!
   TBranch        *b_weight_var_PRW_DATASF__1up;   //!
   TBranch        *b_MELA_ggZZ;   //!
   TBranch        *b_MELA_ggZZ_deco;   //!
   TBranch        *b_w_MCw_uncorrected;   //!
   TBranch        *b_weight_SumwCorrection;   //!
   TBranch        *b_weight_ggZZNLO_kS;   //!
   TBranch        *b_weight_ggZZNLO_kB;   //!
   TBranch        *b_weight_ggZZNLO_kI;   //!
   TBranch        *b_weight_ggZZNLO_kSBI;   //!
   TBranch        *b_weight_var_th_ggZZNLO_kS_up;   //!
   TBranch        *b_weight_var_th_ggZZNLO_kB_up;   //!
   TBranch        *b_weight_var_th_ggZZNLO_kI_up;   //!
   TBranch        *b_weight_var_th_ggZZNLO_kSBI_up;   //!
   TBranch        *b_weight_var_th_ggZZNLO_kS_down;   //!
   TBranch        *b_weight_var_th_ggZZNLO_kB_down;   //!
   TBranch        *b_weight_var_th_ggZZNLO_kI_down;   //!
   TBranch        *b_weight_var_th_ggZZNLO_kSBI_down;   //!

   offShellTry2(TTree *tree=0);
   virtual ~offShellTry2();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef offShellTry2_cxx
offShellTry2::offShellTry2(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f || !f->IsOpen()) {
         f = new TFile("Memory Directory");
      }
      f->GetObject("nominal",tree);

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("nominal","");
      //qqZZ bkg 1
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/Offshell/v12/2018-03-15/Merged/mc15_13TeV.364250.Sherpa_222_NNPDF30NNLO_llll.root/nominal");
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/Offshell/v12/2018-03-15/Merged/mc15_13TeV.364252.Sherpa_222_NNPDF30NNLO_llll_m4l300.root/nominal");
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/Offshell/v12/2018-03-15/Merged/mc15_13TeV.364251.Sherpa_222_NNPDF30NNLO_llll_m4l100_300_filt100_150.root/nominal");
      //other background from 3 gluon, 3, 4, 5, 6
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/Offshell/v12/2018-03-15/Merged/mc15_13TeV.361621.Sherpa_CT10_WWZ_4l2v.root/nominal");
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/Offshell/v12/2018-03-15/Merged/mc15_13TeV.361623.Sherpa_CT10_WZZ_5l1v.root/nominal");
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/Offshell/v12/2018-03-15/Merged/mc15_13TeV.361625.Sherpa_CT10_ZZZ_6l0v.root/nominal");
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/Offshell/v12/2018-03-15/Merged/mc15_13TeV.361626.Sherpa_CT10_ZZZ_4l2v.root/nominal");
      //ggZZ full production 7
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/M4lUnfolding/2018-02-20-Sherpa222_ggZ_v04_Offshell/mc15_13TeV.345706.Sherpa_222_NNPDF30NNLO_ggllll_130M4l.root/nominal");
      //ggZZ background 8
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/M4lUnfolding/2018-02-20-Sherpa222_ggZ_v04_Offshell/mc15_13TeV.345709.Sherpa_222_NNPDF30NNLO_ggllllNoHiggs_130M4l.root/nominal");
      //ggZZ signal 9
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/M4lUnfolding/2018-02-20-Sherpa222_ggZ_v04_Offshell/mc15_13TeV.345712.Sherpa_222_NNPDF30NNLO_ggllllOnlyHiggs_130M4l.root/nominal");
      //VBF full production 10
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/Offshell/v12/2018-03-15/Merged/mc15_13TeV.345071.MGPy8EvtGen_A14_NNPDF23LO_VBFH125_sbi_4l_m4l130_EW6.root/nominal");
      //VBF signal 11
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/Offshell/v12/2018-03-15/Merged/mc15_13TeV.345070.MGPy8EvtGen_A14_NNPDF23LO_VBFH125_ZZ_4l_m4l130_EW6.root/nominal");
      //VBF background 12
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/Offshell/v12/2018-03-15/Merged/mc15_13TeV.345276.MGPy8EvtGen_A14_NNPDF23LO_VBFH125_bkg_4l_m4l100_EW6.root/nominal");
      //VBF full process mu=5 13
      chain->Add("/eos/atlas/atlascerngroupdisk/phys-higgs/HSG2/H4l/2016/Offshell/v12/2018-03-15/Merged/mc15_13TeV.345072.MGPy8EvtGen_A14_NNPDF23LO_VBFH125_sbi5_4l_m4l130_EW6.root/nominal");
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

offShellTry2::~offShellTry2()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t offShellTry2::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t offShellTry2::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void offShellTry2::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("has_fid", &has_fid, &b_has_fid);
   fChain->SetBranchAddress("has_reco", &has_reco, &b_has_reco);
   fChain->SetBranchAddress("MCFM_dxs_HZZ", &MCFM_dxs_HZZ, &b_MCFM_dxs_HZZ);
   fChain->SetBranchAddress("MCFM_dxs_ZZ", &MCFM_dxs_ZZ, &b_MCFM_dxs_ZZ);
   fChain->SetBranchAddress("MCFM_dxs_ggZZ", &MCFM_dxs_ggZZ, &b_MCFM_dxs_ggZZ);
   fChain->SetBranchAddress("MCFM_dxs_ggZZint", &MCFM_dxs_ggZZint, &b_MCFM_dxs_ggZZint);
   fChain->SetBranchAddress("MCFM_dxs_ggZZtot", &MCFM_dxs_ggZZtot, &b_MCFM_dxs_ggZZtot);
   fChain->SetBranchAddress("ave_int_per_xing", &ave_int_per_xing, &b_ave_int_per_xing);
   fChain->SetBranchAddress("cand_index", &cand_index, &b_cand_index);
   fChain->SetBranchAddress("cth1", &cth1, &b_cth1);
   fChain->SetBranchAddress("cth2", &cth2, &b_cth2);
   fChain->SetBranchAddress("cthstr", &cthstr, &b_cthstr);
   fChain->SetBranchAddress("cthstr_fsr", &cthstr_fsr, &b_cthstr_fsr);
   fChain->SetBranchAddress("dR_jH", &dR_jH, &b_dR_jH);
   fChain->SetBranchAddress("dijet_deltaeta", &dijet_deltaeta, &b_dijet_deltaeta);
   fChain->SetBranchAddress("dijet_deltaphi", &dijet_deltaphi, &b_dijet_deltaphi);
   fChain->SetBranchAddress("dijet_invmass", &dijet_invmass, &b_dijet_invmass);
   fChain->SetBranchAddress("dijet_pt", &dijet_pt, &b_dijet_pt);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("event_type", &event_type, &b_event_type);
   fChain->SetBranchAddress("fsr_eta", &fsr_eta, &b_fsr_eta);
   fChain->SetBranchAddress("fsr_phi", &fsr_phi, &b_fsr_phi);
   fChain->SetBranchAddress("fsr_pt", &fsr_pt, &b_fsr_pt);
   fChain->SetBranchAddress("hasExtraLepNominal", &hasExtraLepNominal, &b_hasExtraLepNominal);
   fChain->SetBranchAddress("jet_eta", jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_pt", jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("leading_jet_pt", &leading_jet_pt, &b_leading_jet_pt);
   fChain->SetBranchAddress("lepton_eta", lepton_eta, &b_lepton_eta);
   fChain->SetBranchAddress("lepton_phi", lepton_phi, &b_lepton_phi);
   fChain->SetBranchAddress("lepton_pt", lepton_pt, &b_lepton_pt);
   fChain->SetBranchAddress("m4l_fsr", &m4l_fsr, &b_m4l_fsr);
   fChain->SetBranchAddress("m4l_truth_born", &m4l_truth_born, &b_m4l_truth_born);
   fChain->SetBranchAddress("m4l_truth_matched_bare", &m4l_truth_matched_bare, &b_m4l_truth_matched_bare);
   fChain->SetBranchAddress("m4l_unconstrained", &m4l_unconstrained, &b_m4l_unconstrained);
   fChain->SetBranchAddress("mZ1_fsr", &mZ1_fsr, &b_mZ1_fsr);
   fChain->SetBranchAddress("mZ2_fsr", &mZ2_fsr, &b_mZ2_fsr);
   fChain->SetBranchAddress("met_et", &met_et, &b_met_et);
   fChain->SetBranchAddress("min_dR_jZ", &min_dR_jZ, &b_min_dR_jZ);
   fChain->SetBranchAddress("n_jets", &n_jets, &b_n_jets);
   fChain->SetBranchAddress("npv", &npv, &b_npv);
   fChain->SetBranchAddress("pass_reco_cut", &pass_reco_cut, &b_pass_reco_cut);
   fChain->SetBranchAddress("pass_vtx4lCut", &pass_vtx4lCut, &b_pass_vtx4lCut);
   fChain->SetBranchAddress("phi", &phi, &b_phi);
   fChain->SetBranchAddress("phi1", &phi1, &b_phi1);
   fChain->SetBranchAddress("pt4l_fsr", &pt4l_fsr, &b_pt4l_fsr);
   fChain->SetBranchAddress("random_run", &random_run, &b_random_run);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("truth_event_m_st11", &truth_event_m_st11, &b_truth_event_m_st11);
   fChain->SetBranchAddress("truth_event_m_st3", &truth_event_m_st3, &b_truth_event_m_st3);
   fChain->SetBranchAddress("truth_event_type_sherpaSt3", &truth_event_type_sherpaSt3, &b_truth_event_type_sherpaSt3);
   fChain->SetBranchAddress("truth_pairing", &truth_pairing, &b_truth_pairing);
   fChain->SetBranchAddress("vtx4l_chi2ndf", &vtx4l_chi2ndf, &b_vtx4l_chi2ndf);
   fChain->SetBranchAddress("w_EW", &w_EW, &b_w_EW);
   fChain->SetBranchAddress("w_HOEW", &w_HOEW, &b_w_HOEW);
   fChain->SetBranchAddress("w_HOQCD", &w_HOQCD, &b_w_HOQCD);
   fChain->SetBranchAddress("w_MCw", &w_MCw, &b_w_MCw);
   fChain->SetBranchAddress("w_br", &w_br, &b_w_br);
   fChain->SetBranchAddress("w_btagEff", &w_btagEff, &b_w_btagEff);
   fChain->SetBranchAddress("w_lepEff", &w_lepEff, &b_w_lepEff);
   fChain->SetBranchAddress("w_lumi", &w_lumi, &b_w_lumi);
   fChain->SetBranchAddress("w_pileup", &w_pileup, &b_w_pileup);
   fChain->SetBranchAddress("w_sherpaLep", &w_sherpaLep, &b_w_sherpaLep);
   fChain->SetBranchAddress("w_triggerSF", &w_triggerSF, &b_w_triggerSF);
   fChain->SetBranchAddress("w_xs", &w_xs, &b_w_xs);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("weight_corr", &weight_corr, &b_weight_corr);
   fChain->SetBranchAddress("weight_lumi", &weight_lumi, &b_weight_lumi);
   fChain->SetBranchAddress("weight_sampleoverlap", &weight_sampleoverlap, &b_weight_sampleoverlap);
   fChain->SetBranchAddress("y4l_fsr", &y4l_fsr, &b_y4l_fsr);
   fChain->SetBranchAddress("y4l_unconstrained", &y4l_unconstrained, &b_y4l_unconstrained);
   fChain->SetBranchAddress("weight_var_EL_EFF_ID_TOTAL_1NPCOR_PLUS_UNCOR__1down", &weight_var_EL_EFF_ID_TOTAL_1NPCOR_PLUS_UNCOR__1down, &b_weight_var_EL_EFF_ID_TOTAL_1NPCOR_PLUS_UNCOR__1down);
   fChain->SetBranchAddress("weight_var_EL_EFF_ID_TOTAL_1NPCOR_PLUS_UNCOR__1up", &weight_var_EL_EFF_ID_TOTAL_1NPCOR_PLUS_UNCOR__1up, &b_weight_var_EL_EFF_ID_TOTAL_1NPCOR_PLUS_UNCOR__1up);
   fChain->SetBranchAddress("weight_var_EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR__1down", &weight_var_EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR__1down, &b_weight_var_EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR__1down);
   fChain->SetBranchAddress("weight_var_EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR__1up", &weight_var_EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR__1up, &b_weight_var_EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR__1up);
   fChain->SetBranchAddress("weight_var_EL_EFF_Reco_TOTAL_1NPCOR_PLUS_UNCOR__1down", &weight_var_EL_EFF_Reco_TOTAL_1NPCOR_PLUS_UNCOR__1down, &b_weight_var_EL_EFF_Reco_TOTAL_1NPCOR_PLUS_UNCOR__1down);
   fChain->SetBranchAddress("weight_var_EL_EFF_Reco_TOTAL_1NPCOR_PLUS_UNCOR__1up", &weight_var_EL_EFF_Reco_TOTAL_1NPCOR_PLUS_UNCOR__1up, &b_weight_var_EL_EFF_Reco_TOTAL_1NPCOR_PLUS_UNCOR__1up);
   fChain->SetBranchAddress("weight_var_HOEW_QCD_syst__1down", &weight_var_HOEW_QCD_syst__1down, &b_weight_var_HOEW_QCD_syst__1down);
   fChain->SetBranchAddress("weight_var_HOEW_QCD_syst__1up", &weight_var_HOEW_QCD_syst__1up, &b_weight_var_HOEW_QCD_syst__1up);
   fChain->SetBranchAddress("weight_var_HOEW_syst__1down", &weight_var_HOEW_syst__1down, &b_weight_var_HOEW_syst__1down);
   fChain->SetBranchAddress("weight_var_HOEW_syst__1up", &weight_var_HOEW_syst__1up, &b_weight_var_HOEW_syst__1up);
   fChain->SetBranchAddress("weight_var_HOQCD_scale_syst__1down", &weight_var_HOQCD_scale_syst__1down, &b_weight_var_HOQCD_scale_syst__1down);
   fChain->SetBranchAddress("weight_var_HOQCD_scale_syst__1up", &weight_var_HOQCD_scale_syst__1up, &b_weight_var_HOQCD_scale_syst__1up);
   fChain->SetBranchAddress("weight_var_MUON_EFF_STAT_LOWPT__1down", &weight_var_MUON_EFF_STAT_LOWPT__1down, &b_weight_var_MUON_EFF_STAT_LOWPT__1down);
   fChain->SetBranchAddress("weight_var_MUON_EFF_STAT_LOWPT__1up", &weight_var_MUON_EFF_STAT_LOWPT__1up, &b_weight_var_MUON_EFF_STAT_LOWPT__1up);
   fChain->SetBranchAddress("weight_var_MUON_EFF_STAT__1down", &weight_var_MUON_EFF_STAT__1down, &b_weight_var_MUON_EFF_STAT__1down);
   fChain->SetBranchAddress("weight_var_MUON_EFF_STAT__1up", &weight_var_MUON_EFF_STAT__1up, &b_weight_var_MUON_EFF_STAT__1up);
   fChain->SetBranchAddress("weight_var_MUON_EFF_SYS_LOWPT__1down", &weight_var_MUON_EFF_SYS_LOWPT__1down, &b_weight_var_MUON_EFF_SYS_LOWPT__1down);
   fChain->SetBranchAddress("weight_var_MUON_EFF_SYS_LOWPT__1up", &weight_var_MUON_EFF_SYS_LOWPT__1up, &b_weight_var_MUON_EFF_SYS_LOWPT__1up);
   fChain->SetBranchAddress("weight_var_MUON_EFF_SYS__1down", &weight_var_MUON_EFF_SYS__1down, &b_weight_var_MUON_EFF_SYS__1down);
   fChain->SetBranchAddress("weight_var_MUON_EFF_SYS__1up", &weight_var_MUON_EFF_SYS__1up, &b_weight_var_MUON_EFF_SYS__1up);
   fChain->SetBranchAddress("weight_var_MUON_ISO_STAT__1down", &weight_var_MUON_ISO_STAT__1down, &b_weight_var_MUON_ISO_STAT__1down);
   fChain->SetBranchAddress("weight_var_MUON_ISO_STAT__1up", &weight_var_MUON_ISO_STAT__1up, &b_weight_var_MUON_ISO_STAT__1up);
   fChain->SetBranchAddress("weight_var_MUON_ISO_SYS__1down", &weight_var_MUON_ISO_SYS__1down, &b_weight_var_MUON_ISO_SYS__1down);
   fChain->SetBranchAddress("weight_var_MUON_ISO_SYS__1up", &weight_var_MUON_ISO_SYS__1up, &b_weight_var_MUON_ISO_SYS__1up);
   fChain->SetBranchAddress("weight_var_MUON_TTVA_STAT__1down", &weight_var_MUON_TTVA_STAT__1down, &b_weight_var_MUON_TTVA_STAT__1down);
   fChain->SetBranchAddress("weight_var_MUON_TTVA_STAT__1up", &weight_var_MUON_TTVA_STAT__1up, &b_weight_var_MUON_TTVA_STAT__1up);
   fChain->SetBranchAddress("weight_var_MUON_TTVA_SYS__1down", &weight_var_MUON_TTVA_SYS__1down, &b_weight_var_MUON_TTVA_SYS__1down);
   fChain->SetBranchAddress("weight_var_MUON_TTVA_SYS__1up", &weight_var_MUON_TTVA_SYS__1up, &b_weight_var_MUON_TTVA_SYS__1up);
   fChain->SetBranchAddress("weight_var_PRW_DATASF__1down", &weight_var_PRW_DATASF__1down, &b_weight_var_PRW_DATASF__1down);
   fChain->SetBranchAddress("weight_var_PRW_DATASF__1up", &weight_var_PRW_DATASF__1up, &b_weight_var_PRW_DATASF__1up);
   fChain->SetBranchAddress("MELA_ggZZ", &MELA_ggZZ, &b_MELA_ggZZ);
   fChain->SetBranchAddress("MELA_ggZZ_deco", &MELA_ggZZ_deco, &b_MELA_ggZZ_deco);
   fChain->SetBranchAddress("w_MCw_uncorrected", &w_MCw_uncorrected, &b_w_MCw_uncorrected);
   fChain->SetBranchAddress("weight_SumwCorrection", &weight_SumwCorrection, &b_weight_SumwCorrection);
   fChain->SetBranchAddress("weight_ggZZNLO_kS", &weight_ggZZNLO_kS, &b_weight_ggZZNLO_kS);
   fChain->SetBranchAddress("weight_ggZZNLO_kB", &weight_ggZZNLO_kB, &b_weight_ggZZNLO_kB);
   fChain->SetBranchAddress("weight_ggZZNLO_kI", &weight_ggZZNLO_kI, &b_weight_ggZZNLO_kI);
   fChain->SetBranchAddress("weight_ggZZNLO_kSBI", &weight_ggZZNLO_kSBI, &b_weight_ggZZNLO_kSBI);
   fChain->SetBranchAddress("weight_var_th_ggZZNLO_kS_up", &weight_var_th_ggZZNLO_kS_up, &b_weight_var_th_ggZZNLO_kS_up);
   fChain->SetBranchAddress("weight_var_th_ggZZNLO_kB_up", &weight_var_th_ggZZNLO_kB_up, &b_weight_var_th_ggZZNLO_kB_up);
   fChain->SetBranchAddress("weight_var_th_ggZZNLO_kI_up", &weight_var_th_ggZZNLO_kI_up, &b_weight_var_th_ggZZNLO_kI_up);
   fChain->SetBranchAddress("weight_var_th_ggZZNLO_kSBI_up", &weight_var_th_ggZZNLO_kSBI_up, &b_weight_var_th_ggZZNLO_kSBI_up);
   fChain->SetBranchAddress("weight_var_th_ggZZNLO_kS_down", &weight_var_th_ggZZNLO_kS_down, &b_weight_var_th_ggZZNLO_kS_down);
   fChain->SetBranchAddress("weight_var_th_ggZZNLO_kB_down", &weight_var_th_ggZZNLO_kB_down, &b_weight_var_th_ggZZNLO_kB_down);
   fChain->SetBranchAddress("weight_var_th_ggZZNLO_kI_down", &weight_var_th_ggZZNLO_kI_down, &b_weight_var_th_ggZZNLO_kI_down);
   fChain->SetBranchAddress("weight_var_th_ggZZNLO_kSBI_down", &weight_var_th_ggZZNLO_kSBI_down, &b_weight_var_th_ggZZNLO_kSBI_down);
   Notify();
}

Bool_t offShellTry2::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void offShellTry2::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t offShellTry2::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef offShellTry2_cxx

//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jul 18 09:44:04 2018 by ROOT version 6.14/00
// from TTree HWWTree/HWWTree
// found on file: mc_361077__nominal.root
//////////////////////////////////////////////////////////

#ifndef MyClass_h
#define MyClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class MyClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           runNb;
   ULong64_t       evtNb;
   Float_t         LeadLepPtReco;
   Float_t         SubleadLepPtReco;
   Float_t         LeadLepEtaReco;
   Float_t         SubleadLepEtaReco;
   Float_t         LeadLepPhiReco;
   Float_t         SubleadLepPhiReco;
   Float_t         LeadLepEReco;
   Float_t         SubleadLepEReco;
   Float_t         mLL;
   Float_t         DYllReco;
   Float_t         ptLL;
   Int_t           LeadLepIsEle;
   Int_t           SubleadLepIsEle;
   Float_t         MET;
   Float_t         JetPt0;
   Float_t         JetEta0;
   Float_t         JetPhi0;
   Float_t         JetE0;
   Float_t         JetBTag0;
   Float_t         JetPt1;
   Float_t         JetEta1;
   Float_t         JetPhi1;
   Float_t         JetE1;
   Float_t         JetBTag1;
   Float_t         JetPt2;
   Float_t         JetEta2;
   Float_t         JetPhi2;
   Float_t         JetE2;
   Float_t         JetBTag2;
   Float_t         JetPt3;
   Float_t         JetEta3;
   Float_t         JetPhi3;
   Float_t         JetE3;
   Float_t         JetBTag3;
   Float_t         JetPt4;
   Float_t         JetEta4;
   Float_t         JetPhi4;
   Float_t         JetE4;
   Float_t         JetBTag4;
   Float_t         JetPt5;
   Float_t         JetEta5;
   Float_t         JetPhi5;
   Float_t         JetE5;
   Float_t         JetBTag5;
   Int_t           nJets30;
   Int_t           nJets35;
   Int_t           nJets40;
   Int_t           nJets45;
   Int_t           nJets50;
   Int_t           nJets55;
   Int_t           nJets60;
   Int_t           nJets;
   Int_t           nBJets;
   Int_t           nBJetsAbove30;
   Int_t           nBJetsAbove35;
   Int_t           nBJetsAbove40;
   Int_t           nBJetsAbove45;
   Int_t           nBJetsAbove50;
   Int_t           nBJetsAbove55;
   Int_t           nBJetsAbove60;
   Int_t           DSID;
   Float_t         JetPtLow;
   Float_t         JetEtaLow;
   Float_t         JetPhiLow;
   Float_t         JetELow;
   Float_t         JetBTagLow;
   Float_t         BJetPt0;
   Float_t         BJetEta0;
   Float_t         BJetPhi0;
   Float_t         BJetE0;
   Float_t         BJetBTag0;
   Float_t         BJetPt1;
   Float_t         BJetEta1;
   Float_t         BJetPhi1;
   Float_t         BJetE1;
   Float_t         BJetBTag1;
   Float_t         BJetPt2;
   Float_t         BJetEta2;
   Float_t         BJetPhi2;
   Float_t         BJetE2;
   Float_t         BJetBTag2;
   Float_t         METphi;
   Float_t         BtagWeight;
   Float_t         JetPt6;
   Float_t         JetEta6;
   Float_t         JetPhi6;
   Float_t         JetE6;
   Float_t         JetBTag6;
   Double_t        weight;

   // List of branches
   TBranch        *b_runNb;   //!
   TBranch        *b_evtNb;   //!
   TBranch        *b_LeadLepPtReco;   //!
   TBranch        *b_SubleadLepPtReco;   //!
   TBranch        *b_LeadLepEtaReco;   //!
   TBranch        *b_SubleadLepEtaReco;   //!
   TBranch        *b_LeadLepPhiReco;   //!
   TBranch        *b_SubleadLepPhiReco;   //!
   TBranch        *b_LeadLepEReco;   //!
   TBranch        *b_SubleadLepEReco;   //!
   TBranch        *b_mLL;   //!
   TBranch        *b_DYllReco;   //!
   TBranch        *b_ptLL;   //!
   TBranch        *b_LeadLepIsEle;   //!
   TBranch        *b_SubleadLepIsEle;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_JetPt0;   //!
   TBranch        *b_JetEta0;   //!
   TBranch        *b_JetPhi0;   //!
   TBranch        *b_JetE0;   //!
   TBranch        *b_JetBTag0;   //!
   TBranch        *b_JetPt1;   //!
   TBranch        *b_JetEta1;   //!
   TBranch        *b_JetPhi1;   //!
   TBranch        *b_JetE1;   //!
   TBranch        *b_JetBTag1;   //!
   TBranch        *b_JetPt2;   //!
   TBranch        *b_JetEta2;   //!
   TBranch        *b_JetPhi2;   //!
   TBranch        *b_JetE2;   //!
   TBranch        *b_JetBTag2;   //!
   TBranch        *b_JetPt3;   //!
   TBranch        *b_JetEta3;   //!
   TBranch        *b_JetPhi3;   //!
   TBranch        *b_JetE3;   //!
   TBranch        *b_JetBTag3;   //!
   TBranch        *b_JetPt4;   //!
   TBranch        *b_JetEta4;   //!
   TBranch        *b_JetPhi4;   //!
   TBranch        *b_JetE4;   //!
   TBranch        *b_JetBTag4;   //!
   TBranch        *b_JetPt5;   //!
   TBranch        *b_JetEta5;   //!
   TBranch        *b_JetPhi5;   //!
   TBranch        *b_JetE5;   //!
   TBranch        *b_JetBTag5;   //!
   TBranch        *b_nJets30;   //!
   TBranch        *b_nJets35;   //!
   TBranch        *b_nJets40;   //!
   TBranch        *b_nJets45;   //!
   TBranch        *b_nJets50;   //!
   TBranch        *b_nJets55;   //!
   TBranch        *b_nJets60;   //!
   TBranch        *b_nJets;   //!
   TBranch        *b_nBJets;   //!
   TBranch        *b_nBJetsAbove30;   //!
   TBranch        *b_nBJetsAbove35;   //!
   TBranch        *b_nBJetsAbove40;   //!
   TBranch        *b_nBJetsAbove45;   //!
   TBranch        *b_nBJetsAbove50;   //!
   TBranch        *b_nBJetsAbove55;   //!
   TBranch        *b_nBJetsAbove60;   //!
   TBranch        *b_DSID;   //!
   TBranch        *b_JetPtLow;   //!
   TBranch        *b_JetEtaLow;   //!
   TBranch        *b_JetPhiLow;   //!
   TBranch        *b_JetELow;   //!
   TBranch        *b_JetBTagLow;   //!
   TBranch        *b_BJetPt0;   //!
   TBranch        *b_BJetEta0;   //!
   TBranch        *b_BJetPhi0;   //!
   TBranch        *b_BJetE0;   //!
   TBranch        *b_BJetBTag0;   //!
   TBranch        *b_BJetPt1;   //!
   TBranch        *b_BJetEta1;   //!
   TBranch        *b_BJetPhi1;   //!
   TBranch        *b_BJetE1;   //!
   TBranch        *b_BJetBTag1;   //!
   TBranch        *b_BJetPt2;   //!
   TBranch        *b_BJetEta2;   //!
   TBranch        *b_BJetPhi2;   //!
   TBranch        *b_BJetE2;   //!
   TBranch        *b_BJetBTag2;   //!
   TBranch        *b_METphi;   //!
   TBranch        *b_BtagWeight;   //!
   TBranch        *b_JetPt6;   //!
   TBranch        *b_JetEta6;   //!
   TBranch        *b_JetPhi6;   //!
   TBranch        *b_JetE6;   //!
   TBranch        *b_JetBTag6;   //!
   TBranch        *b_weight;   //!

   MyClass(TTree *tree=0);
   virtual ~MyClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MyClass_cxx
MyClass::MyClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("mc_361077__nominal.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("mc_361077__nominal.root");
      }
      f->GetObject("HWWTree",tree);

   }
   Init(tree);
}

MyClass::~MyClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MyClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MyClass::LoadTree(Long64_t entry)
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

void MyClass::Init(TTree *tree)
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

   fChain->SetBranchAddress("runNb", &runNb, &b_runNb);
   fChain->SetBranchAddress("evtNb", &evtNb, &b_evtNb);
   fChain->SetBranchAddress("LeadLepPtReco", &LeadLepPtReco, &b_LeadLepPtReco);
   fChain->SetBranchAddress("SubleadLepPtReco", &SubleadLepPtReco, &b_SubleadLepPtReco);
   fChain->SetBranchAddress("LeadLepEtaReco", &LeadLepEtaReco, &b_LeadLepEtaReco);
   fChain->SetBranchAddress("SubleadLepEtaReco", &SubleadLepEtaReco, &b_SubleadLepEtaReco);
   fChain->SetBranchAddress("LeadLepPhiReco", &LeadLepPhiReco, &b_LeadLepPhiReco);
   fChain->SetBranchAddress("SubleadLepPhiReco", &SubleadLepPhiReco, &b_SubleadLepPhiReco);
   fChain->SetBranchAddress("LeadLepEReco", &LeadLepEReco, &b_LeadLepEReco);
   fChain->SetBranchAddress("SubleadLepEReco", &SubleadLepEReco, &b_SubleadLepEReco);
   fChain->SetBranchAddress("mLL", &mLL, &b_mLL);
   fChain->SetBranchAddress("DYllReco", &DYllReco, &b_DYllReco);
   fChain->SetBranchAddress("ptLL", &ptLL, &b_ptLL);
   fChain->SetBranchAddress("LeadLepIsEle", &LeadLepIsEle, &b_LeadLepIsEle);
   fChain->SetBranchAddress("SubleadLepIsEle", &SubleadLepIsEle, &b_SubleadLepIsEle);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("JetPt0", &JetPt0, &b_JetPt0);
   fChain->SetBranchAddress("JetEta0", &JetEta0, &b_JetEta0);
   fChain->SetBranchAddress("JetPhi0", &JetPhi0, &b_JetPhi0);
   fChain->SetBranchAddress("JetE0", &JetE0, &b_JetE0);
   fChain->SetBranchAddress("JetBTag0", &JetBTag0, &b_JetBTag0);
   fChain->SetBranchAddress("JetPt1", &JetPt1, &b_JetPt1);
   fChain->SetBranchAddress("JetEta1", &JetEta1, &b_JetEta1);
   fChain->SetBranchAddress("JetPhi1", &JetPhi1, &b_JetPhi1);
   fChain->SetBranchAddress("JetE1", &JetE1, &b_JetE1);
   fChain->SetBranchAddress("JetBTag1", &JetBTag1, &b_JetBTag1);
   fChain->SetBranchAddress("JetPt2", &JetPt2, &b_JetPt2);
   fChain->SetBranchAddress("JetEta2", &JetEta2, &b_JetEta2);
   fChain->SetBranchAddress("JetPhi2", &JetPhi2, &b_JetPhi2);
   fChain->SetBranchAddress("JetE2", &JetE2, &b_JetE2);
   fChain->SetBranchAddress("JetBTag2", &JetBTag2, &b_JetBTag2);
   fChain->SetBranchAddress("JetPt3", &JetPt3, &b_JetPt3);
   fChain->SetBranchAddress("JetEta3", &JetEta3, &b_JetEta3);
   fChain->SetBranchAddress("JetPhi3", &JetPhi3, &b_JetPhi3);
   fChain->SetBranchAddress("JetE3", &JetE3, &b_JetE3);
   fChain->SetBranchAddress("JetBTag3", &JetBTag3, &b_JetBTag3);
   fChain->SetBranchAddress("JetPt4", &JetPt4, &b_JetPt4);
   fChain->SetBranchAddress("JetEta4", &JetEta4, &b_JetEta4);
   fChain->SetBranchAddress("JetPhi4", &JetPhi4, &b_JetPhi4);
   fChain->SetBranchAddress("JetE4", &JetE4, &b_JetE4);
   fChain->SetBranchAddress("JetBTag4", &JetBTag4, &b_JetBTag4);
   fChain->SetBranchAddress("JetPt5", &JetPt5, &b_JetPt5);
   fChain->SetBranchAddress("JetEta5", &JetEta5, &b_JetEta5);
   fChain->SetBranchAddress("JetPhi5", &JetPhi5, &b_JetPhi5);
   fChain->SetBranchAddress("JetE5", &JetE5, &b_JetE5);
   fChain->SetBranchAddress("JetBTag5", &JetBTag5, &b_JetBTag5);
   fChain->SetBranchAddress("nJets30", &nJets30, &b_nJets30);
   fChain->SetBranchAddress("nJets35", &nJets35, &b_nJets35);
   fChain->SetBranchAddress("nJets40", &nJets40, &b_nJets40);
   fChain->SetBranchAddress("nJets45", &nJets45, &b_nJets45);
   fChain->SetBranchAddress("nJets50", &nJets50, &b_nJets50);
   fChain->SetBranchAddress("nJets55", &nJets55, &b_nJets55);
   fChain->SetBranchAddress("nJets60", &nJets60, &b_nJets60);
   fChain->SetBranchAddress("nJets", &nJets, &b_nJets);
   fChain->SetBranchAddress("nBJets", &nBJets, &b_nBJets);
   fChain->SetBranchAddress("nBJetsAbove30", &nBJetsAbove30, &b_nBJetsAbove30);
   fChain->SetBranchAddress("nBJetsAbove35", &nBJetsAbove35, &b_nBJetsAbove35);
   fChain->SetBranchAddress("nBJetsAbove40", &nBJetsAbove40, &b_nBJetsAbove40);
   fChain->SetBranchAddress("nBJetsAbove45", &nBJetsAbove45, &b_nBJetsAbove45);
   fChain->SetBranchAddress("nBJetsAbove50", &nBJetsAbove50, &b_nBJetsAbove50);
   fChain->SetBranchAddress("nBJetsAbove55", &nBJetsAbove55, &b_nBJetsAbove55);
   fChain->SetBranchAddress("nBJetsAbove60", &nBJetsAbove60, &b_nBJetsAbove60);
   fChain->SetBranchAddress("DSID", &DSID, &b_DSID);
   fChain->SetBranchAddress("JetPtLow", &JetPtLow, &b_JetPtLow);
   fChain->SetBranchAddress("JetEtaLow", &JetEtaLow, &b_JetEtaLow);
   fChain->SetBranchAddress("JetPhiLow", &JetPhiLow, &b_JetPhiLow);
   fChain->SetBranchAddress("JetELow", &JetELow, &b_JetELow);
   fChain->SetBranchAddress("JetBTagLow", &JetBTagLow, &b_JetBTagLow);
   fChain->SetBranchAddress("BJetPt0", &BJetPt0, &b_BJetPt0);
   fChain->SetBranchAddress("BJetEta0", &BJetEta0, &b_BJetEta0);
   fChain->SetBranchAddress("BJetPhi0", &BJetPhi0, &b_BJetPhi0);
   fChain->SetBranchAddress("BJetE0", &BJetE0, &b_BJetE0);
   fChain->SetBranchAddress("BJetBTag0", &BJetBTag0, &b_BJetBTag0);
   fChain->SetBranchAddress("BJetPt1", &BJetPt1, &b_BJetPt1);
   fChain->SetBranchAddress("BJetEta1", &BJetEta1, &b_BJetEta1);
   fChain->SetBranchAddress("BJetPhi1", &BJetPhi1, &b_BJetPhi1);
   fChain->SetBranchAddress("BJetE1", &BJetE1, &b_BJetE1);
   fChain->SetBranchAddress("BJetBTag1", &BJetBTag1, &b_BJetBTag1);
   fChain->SetBranchAddress("BJetPt2", &BJetPt2, &b_BJetPt2);
   fChain->SetBranchAddress("BJetEta2", &BJetEta2, &b_BJetEta2);
   fChain->SetBranchAddress("BJetPhi2", &BJetPhi2, &b_BJetPhi2);
   fChain->SetBranchAddress("BJetE2", &BJetE2, &b_BJetE2);
   fChain->SetBranchAddress("BJetBTag2", &BJetBTag2, &b_BJetBTag2);
   fChain->SetBranchAddress("METphi", &METphi, &b_METphi);
   fChain->SetBranchAddress("BtagWeight", &BtagWeight, &b_BtagWeight);
   fChain->SetBranchAddress("JetPt6", &JetPt6, &b_JetPt6);
   fChain->SetBranchAddress("JetEta6", &JetEta6, &b_JetEta6);
   fChain->SetBranchAddress("JetPhi6", &JetPhi6, &b_JetPhi6);
   fChain->SetBranchAddress("JetE6", &JetE6, &b_JetE6);
   fChain->SetBranchAddress("JetBTag6", &JetBTag6, &b_JetBTag6);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   Notify();
}

Bool_t MyClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MyClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MyClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MyClass_cxx

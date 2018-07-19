#define MyClass_cxx
#include "MyClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void MyClass::Loop()
{
//   In a ROOT session, you can do:
//      root> .L MyClass.C
//      root> MyClass t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

	
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;



   }

   	//Works on old root version
   	TFile *file=TFile::Open("mc_361077__nominal.root");
	TTree* tree = (TTree*) file->Get("HWWTree");
	ULong64_t evtNb;
	tree->SetBranchAddress("evtNb", &evtNb);
	
	int counter=0;
	for (int i = 0, N = tree->GetEntries(); i < N; ++i) {
	    tree->GetEntry(i);
	    cout << evtNb << endl;
	    counter+=1;
	}  	
	cout << "Number of events:"<< endl;
	cout << counter << endl; 
	tree->Draw("evtNb");

   /*
	//Works only on new root version
	TFile *f=TFile::Open("mc_361077__nominal.root");
	if (f==0){
		printf("Cannot open file");
		return;
	}
	
	TTreeReader myReader("HWWTree",f);
	
	TTreeReaderValue<ULong64_t> eventNumber(myReader, "evtNb");
	Int_t i=0;
	while(myReader.Next()){
		cout << *eventNumber<< endl;
		++i;
	}

	cout << "Number of events:"<< endl;
	cout << i << endl; 
	return 0;

	*/
	//cout <<"hello" <<endl;

}
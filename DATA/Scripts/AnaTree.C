// this macro compiles and runs AnalyzeTree.cxx, which takes as input the 
// starlight.root file produced by convertStarlightAsciiToTree.cxx
// output histograms are stored in starlight_histos.root 
//
void AnaTree(){
gROOT->ProcessLine(".x ConvertStarlightAsciiToTree.C");
gROOT->ProcessLine(".L AnalyzeTree.cxx");
gROOT->ProcessLine("AnalyzeTree* l = new AnalyzeTree()");
gROOT->ProcessLine("l->Loop()");
gROOT->ProcessLine("TFile f(\"starlight_histos.root\")");
gROOT->ProcessLine("TCanvas *D1 = new TCanvas(\"D1\",\"D1Eta\")");
gROOT->ProcessLine("D1Eta->Draw()");
gROOT->ProcessLine("TCanvas *D2 = new TCanvas(\"D2\",\"D2Eta\")");
gROOT->ProcessLine("D2->cd(1)");
gROOT->ProcessLine("D2Eta->Draw()");
}

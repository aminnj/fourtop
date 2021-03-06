float electronFakeRate(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.212947;
   if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.191067;
   if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.114535;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0598557;
   if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0583876;
   if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0485127;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0502397;
   if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.055552;
   if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0547698;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0612282;
   if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0709114;
   if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0685393;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.126793;
   if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.134804;
   if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.138614;
   return 0.;
}
float electronFakeRateError(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.00957134;
   if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.00844421;
   if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.00823802;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.00347422;
   if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.00319052;
   if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.00318651;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.00200887;
   if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0019377;
   if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.00178593;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.00440903;
   if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.00399083;
   if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.00302364;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0125623;
   if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0100297;
   if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.00661812;
   return 0.;
}
float electronAlternativeFakeRate(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.213998;
   if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.191629;
   if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.115074;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0615844;
   if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0593789;
   if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0493942;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0560121;
   if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0587569;
   if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0571373;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0849149;
   if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0881262;
   if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0790308;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.178784;
   if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.167336;
   if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.155869;
   return 0.;
}
// float electronQCDMCFakeRate(float pt, float eta) {
//    if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.293352;
//    if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.299996;
//    if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.359616;
//    if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0497494;
//    if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0724343;
//    if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.103874;
//    if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0378364;
//    if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0718485;
//    if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0751442;
//    if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0688698;
//    if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0645863;
//    if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0684674;
//    if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.108517;
//    if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.147993;
//    if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.153676;
//    return 0.;
// }
// float electronQCDMCFakeRate(float pt, float eta) {
//    if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.288745;
//    if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.288812;
//    if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.236798;
//    if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0813268;
//    if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0904299;
//    if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0807302;
//    if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.049328;
//    if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0794922;
//    if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0505763;
//    if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0542913;
//    if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0908666;
//    if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0620759;
//    if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.133031;
//    if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.146056;
//    if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.123357;
//    return 0.;
// }

float electronQCDMCFakeRate(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.300186;
   if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.294154;
   if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.249293;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.08778;
   if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0977887;
   if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0902851;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0540886;
   if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0877336;
   if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0624113;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0590063;
   if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.111845;
   if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0733026;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.145939;
   if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.161412;
   if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.14486;
   return 0.;
}
float muonFakeRate(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.303083;
   if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.358831;
   if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.383154;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0711473;
   if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0771226;
   if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0880371;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0423236;
   if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0447963;
   if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0513743;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0452653;
   if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0421763;
   if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0437186;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0587507;
   if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0498613;
   if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0;
   return 0.;
}
float muonFakeRateError(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.00721329;
   if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.00967646;
   if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0206302;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.00302625;
   if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.00393619;
   if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.00914311;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.00091705;
   if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.00116013;
   if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.00304744;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.00166003;
   if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.00196206;
   if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0048238;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.00547084;
   if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0062721;
   if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0136565;
   return 0.;
}
float muonAlternativeFakeRate(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.30331;
   if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.359038;
   if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.383389;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0715748;
   if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0775189;
   if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0884769;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0435583;
   if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0458865;
   if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0529224;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0498163;
   if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0467553;
   if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0499567;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.081462;
   if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0718956;
   if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0185418;
   return 0.;
}

// float muonQCDMCFakeRate(float pt, float eta) {
//    if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.358382;
//    if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.417846;
//    if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.534696;
//    if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.078349;
//    if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0884682;
//    if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.122276;
//    if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0525553;
//    if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0588008;
//    if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0704128;
//    if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0582335;
//    if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0599187;
//    if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0735816;
//    if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0709558;
//    if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0570007;
//    if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0482109;
//    return 0.;
// }

// float muonQCDMCFakeRate(float pt, float eta) {
//    if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.348786;
//    if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.395038;
//    if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.449988;
//    if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0899584;
//    if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0960066;
//    if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.119288;
//    if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0559242;
//    if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0553673;
//    if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0645758;
//    if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0558166;
//    if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0474714;
//    if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0554824;
//    if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0562167;
//    if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0453456;
//    if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0465711;
//    return 0.;
// }

// float muonQCDMCFakeRate(float pt, float eta) {
//    if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.35065;
//    if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.399463;
//    if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.442673;
//    if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.090643;
//    if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0973432;
//    if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.121245;
//    if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.055949;
//    if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0553922;
//    if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0646052;
//    if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.05585;
//    if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0475;
//    if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0555149;
//    if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.056495;
//    if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0455615;
//    if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0467622;
//    return 0.;
// }

float muonQCDMCFakeRate(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.351064;
   if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.400847;
   if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.442068;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0909698;
   if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.101132;
   if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.127172;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0562548;
   if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0566511;
   if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0691028;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0554049;
   if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.048622;
   if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0559193;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.056687;
   if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0457155;
   if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0481817;
   return 0.;
}

float electronFakeRate_IsoTrigs(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.29519;
   if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.259057;
   if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.131562;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.12745;
   if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.127191;
   if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0859382;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.14444;
   if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.146665;
   if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.129899;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.197826;
   if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.196305;
   if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.171395;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.328461;
   if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.298701;
   if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.271449;
   return 0.;
}
float electronFakeRateError_IsoTrigs(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0118739;
   if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0112231;
   if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.00964814;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.00706781;
   if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.00665043;
   if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.00555776;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.00618466;
   if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.00555629;
   if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0044183;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0126553;
   if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0104359;
   if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.00714557;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.0283268;
   if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.0210151;
   if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0120671;
   return 0.;
}
float electronAlternativeFakeRate_IsoTrigs(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.29629;
   if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.259744;
   if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.132181;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.130749;
   if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.129121;
   if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0874116;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.159532;
   if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.154472;
   if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.13482;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.256636;
   if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.236685;
   if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.193891;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.428686;
   if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.359844;
   if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.300518;
   return 0.;
}
// float electronQCDMCFakeRate_IsoTrigs(float pt, float eta) {
//    if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.36391;
//    if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.37104;
//    if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.478343;
//    if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.102167;
//    if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.140531;
//    if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.186112;
//    if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.120949;
//    if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.152582;
//    if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.155725;
//    if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.178655;
//    if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.127851;
//    if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.153945;
//    if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.210804;
//    if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.279995;
//    if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.258195;
//    return 0.;
// }
// float electronQCDMCFakeRate_IsoTrigs(float pt, float eta) {
//    if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.364424;
//    if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.362543;
//    if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.255331;
//    if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.158859;
//    if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.164657;
//    if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.139058;
//    if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.116282;
//    if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.147704;
//    if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.0959552;
//    if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.116711;
//    if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.167246;
//    if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.103391;
//    if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.262527;
//    if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.251446;
//    if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.206997;
//    return 0.;
// }
float electronQCDMCFakeRate_IsoTrigs(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.376709;
   if (pt>=10 && pt<15 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.368919;
   if (pt>=10 && pt<15 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.257943;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.16129;
   if (pt>=15 && pt<25 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.174033;
   if (pt>=15 && pt<25 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.149289;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.129813;
   if (pt>=25 && pt<35 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.162479;
   if (pt>=25 && pt<35 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.103529;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.134471;
   if (pt>=35 && pt<50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.196851;
   if (pt>=35 && pt<50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.109899;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<0.8 ) return 0.284008;
   if (pt>=50 && fabs(eta)>=0.8 && fabs(eta)<1.479 ) return 0.277981;
   if (pt>=50 && fabs(eta)>=1.479 && fabs(eta)<2.5 ) return 0.220997;
   return 0.;
}
float muonFakeRate_IsoTrigs(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.334722;
   if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.372321;
   if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.377708;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0913886;
   if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.101491;
   if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.106955;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0620827;
   if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0686233;
   if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0652329;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0691848;
   if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0710012;
   if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0571331;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.087843;
   if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.089634;
   if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0;
   return 0.;
}
float muonFakeRateError_IsoTrigs(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.00545534;
   if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.00709176;
   if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0157604;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.00273855;
   if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.00363839;
   if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.00773028;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.00128476;
   if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.00173027;
   if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.00356143;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.00254016;
   if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.00329751;
   if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.00663705;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.00883208;
   if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0113382;
   if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0306071;
   return 0.;
}
float muonAlternativeFakeRate_IsoTrigs(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.334989;
   if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.372567;
   if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.378029;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0920142;
   if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.102081;
   if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.107549;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0641541;
   if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0705977;
   if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0674937;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0772773;
   if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0797381;
   if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0671027;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.128024;
   if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.132056;
   if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0410995;
   return 0.;
}

// float muonQCDMCFakeRate_IsoTrigs(float pt, float eta) {
//    if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.358382;
//    if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.417846;
//    if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.534696;
//    if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.078349;
//    if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0884682;
//    if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.122276;
//    if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0525553;
//    if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0588008;
//    if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0704128;
//    if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0582335;
//    if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0599187;
//    if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0735816;
//    if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0709558;
//    if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0570007;
//    if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0482109;
//    return 0.;
// }

// float muonQCDMCFakeRate_IsoTrigs(float pt, float eta) {
//    if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.348786;
//    if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.395038;
//    if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.449988;
//    if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0899584;
//    if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0960066;
//    if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.119288;
//    if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0559242;
//    if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0553673;
//    if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0645758;
//    if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0558166;
//    if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0474714;
//    if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0554824;
//    if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0562167;
//    if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0453456;
//    if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0465711;
//    return 0.;
// }

// float muonQCDMCFakeRate_IsoTrigs(float pt, float eta) {
//    if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.35065;
//    if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.399463;
//    if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.442673;
//    if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.090643;
//    if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0973432;
//    if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.121245;
//    if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.055949;
//    if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0553922;
//    if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0646052;
//    if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.05585;
//    if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0475;
//    if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0555149;
//    if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.056495;
//    if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0455615;
//    if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0467622;
//    return 0.;
// }

float muonQCDMCFakeRate_IsoTrigs(float pt, float eta) {
   if (pt>=10 && pt<15 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.370786;
   if (pt>=10 && pt<15 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.421886;
   if (pt>=10 && pt<15 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.455732;
   if (pt>=15 && pt<25 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.115238;
   if (pt>=15 && pt<25 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.126395;
   if (pt>=15 && pt<25 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.149923;
   if (pt>=25 && pt<35 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0838494;
   if (pt>=25 && pt<35 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0826661;
   if (pt>=25 && pt<35 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0929938;
   if (pt>=35 && pt<50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.0852247;
   if (pt>=35 && pt<50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0755065;
   if (pt>=35 && pt<50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0774966;
   if (pt>=50 && fabs(eta)>=0 && fabs(eta)<1.2 ) return 0.093793;
   if (pt>=50 && fabs(eta)>=1.2 && fabs(eta)<2.1 ) return 0.0743385;
   if (pt>=50 && fabs(eta)>=2.1 && fabs(eta)<2.4 ) return 0.0753781;
   return 0.;
}

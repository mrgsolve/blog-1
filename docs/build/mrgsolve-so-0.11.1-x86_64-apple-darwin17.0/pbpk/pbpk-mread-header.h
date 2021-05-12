// Source MD5: 70b229955925c59abe63ed267bc83a3b


// FIXED:
// No fixed parameters.

// INCLUDES:


// NAMESPACES:

// MODEL HEADER FILES:
#include "mrgsolv.h"
#include "modelheader.h"

//INCLUDE databox functions:
#include "databox_cpp.h"

//USING plugins

// GLOBAL CODE BLOCK:
// GLOBAL VARS FROM BLOCKS & TYPEDEFS:
typedef double capture;
namespace {
  double Vad;
  double Vbo;
  double Vbr;
  double Vgu;
  double Vhe;
  double Vki;
  double Vli;
  double Vlu;
  double Vmu;
  double Vsk;
  double Vsp;
  double Vte;
  double Vve;
  double Var;
  double Vpl;
  double Vrb;
  double Vre;
  double Vplas_ven;
  double Vplas_art;
  double QC;
  double Qad;
  double Qbo;
  double Qbr;
  double Qgu;
  double Qhe;
  double Qki;
  double Qh;
  double Qha;
  double Qlu;
  double Qmu;
  double Qsk;
  double Qsp;
  double Qte;
  double Qre;
  double Cadipose;
  double Cbone;
  double Cbrain;
  double Cgut;
  double Cheart;
  double Ckidney;
  double Cliver;
  double Clung;
  double Cmuscle;
  double Cskin;
  double Cspleen;
  double Ctestes;
  double Cvenous;
  double Carterial;
  double Crest;
  double Cliverfree;
  double Ckidneyfree;
  double MPPGL;
  double CLmet;
  double Venous;
  double Absorption;
  capture Cp;
}

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_pbpk_main__
#define __ODEFUN___ _model_pbpk_ode__
#define __TABLECODE___ _model_pbpk_table__
#define __CONFIGFUN___ _model_pbpk_config__
#define __REGISTERFUN___ R_init_pbpk
#define _nEQ 16
#define _nPAR 52
#define D_0 _A_0_[0]
#define Aad_0 _A_0_[1]
#define Abo_0 _A_0_[2]
#define Abr_0 _A_0_[3]
#define Agu_0 _A_0_[4]
#define Ahe_0 _A_0_[5]
#define Aki_0 _A_0_[6]
#define Ali_0 _A_0_[7]
#define Alu_0 _A_0_[8]
#define Amu_0 _A_0_[9]
#define Ask_0 _A_0_[10]
#define Asp_0 _A_0_[11]
#define Ate_0 _A_0_[12]
#define Ave_0 _A_0_[13]
#define Aar_0 _A_0_[14]
#define Are_0 _A_0_[15]
#define D _A_[0]
#define Aad _A_[1]
#define Abo _A_[2]
#define Abr _A_[3]
#define Agu _A_[4]
#define Ahe _A_[5]
#define Aki _A_[6]
#define Ali _A_[7]
#define Alu _A_[8]
#define Amu _A_[9]
#define Ask _A_[10]
#define Asp _A_[11]
#define Ate _A_[12]
#define Ave _A_[13]
#define Aar _A_[14]
#define Are _A_[15]
#define dxdt_D _DADT_[0]
#define dxdt_Aad _DADT_[1]
#define dxdt_Abo _DADT_[2]
#define dxdt_Abr _DADT_[3]
#define dxdt_Agu _DADT_[4]
#define dxdt_Ahe _DADT_[5]
#define dxdt_Aki _DADT_[6]
#define dxdt_Ali _DADT_[7]
#define dxdt_Alu _DADT_[8]
#define dxdt_Amu _DADT_[9]
#define dxdt_Ask _DADT_[10]
#define dxdt_Asp _DADT_[11]
#define dxdt_Ate _DADT_[12]
#define dxdt_Ave _DADT_[13]
#define dxdt_Aar _DADT_[14]
#define dxdt_Are _DADT_[15]
#define BW _THETA_[0]
#define FVad _THETA_[1]
#define FVbo _THETA_[2]
#define FVbr _THETA_[3]
#define FVgu _THETA_[4]
#define FVhe _THETA_[5]
#define FVki _THETA_[6]
#define FVli _THETA_[7]
#define FVlu _THETA_[8]
#define FVmu _THETA_[9]
#define FVsk _THETA_[10]
#define FVsp _THETA_[11]
#define FVte _THETA_[12]
#define FVve _THETA_[13]
#define FVar _THETA_[14]
#define FVpl _THETA_[15]
#define FVrb _THETA_[16]
#define FVre _THETA_[17]
#define FQad _THETA_[18]
#define FQbo _THETA_[19]
#define FQbr _THETA_[20]
#define FQgu _THETA_[21]
#define FQhe _THETA_[22]
#define FQki _THETA_[23]
#define FQh _THETA_[24]
#define FQlu _THETA_[25]
#define FQmu _THETA_[26]
#define FQsk _THETA_[27]
#define FQsp _THETA_[28]
#define FQte _THETA_[29]
#define FQre _THETA_[30]
#define Kpad _THETA_[31]
#define Kpbo _THETA_[32]
#define Kpbr _THETA_[33]
#define Kpgu _THETA_[34]
#define Kphe _THETA_[35]
#define Kpki _THETA_[36]
#define Kpli _THETA_[37]
#define Kplu _THETA_[38]
#define Kpmu _THETA_[39]
#define Kpsk _THETA_[40]
#define Kpsp _THETA_[41]
#define Kpte _THETA_[42]
#define Kpre _THETA_[43]
#define fup _THETA_[44]
#define BP _THETA_[45]
#define fumic _THETA_[46]
#define HLM_CLint _THETA_[47]
#define CLrenal _THETA_[48]
#define Ka _THETA_[49]
#define F _THETA_[50]
#define CO _THETA_[51]

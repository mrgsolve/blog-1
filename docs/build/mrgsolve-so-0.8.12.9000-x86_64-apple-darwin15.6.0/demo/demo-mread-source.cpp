// Source MD5: 3b42f5733ad9916a5da7da6756b736a9


// FIXED:
// No fixed parameters.

// INCLUDES:


// NAMESPACES:

// MODEL HEADER FILES:
#include "mrgsolv.h"
#include "modelheader.h"

//INCLUDE databox functions:
#include "databox_cpp.h"

// GLOBAL CODE BLOCK:
// GLOBAL VARS FROM BLOCKS & TYPEDEFS:
typedef double capture;
namespace {
  double CL;
  double V;
  double KA;
  capture IPRED;
  capture DV;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_demo_main__
#define __ODEFUN___ _model_demo_ode__
#define __TABLECODE___ _model_demo_table__
#define __CONFIGFUN___ _model_demo_config__
#define __REGISTERFUN___ R_init_demo
#define _nEQ 2
#define _nPAR 7
#define N_GUT 1
#define F_GUT _F_[0]
#define ALAG_GUT _ALAG_[0]
#define R_GUT _R_[0]
#define D_GUT _D_[0]
#define GUT _A_[0]
#define CENT _A_[1]
#define GUT_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define dxdt_GUT _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define TVCL _THETA_[0]
#define TVV _THETA_[1]
#define TVKA _THETA_[2]
#define F1 _THETA_[3]
#define ALAG _THETA_[4]
#define WT _THETA_[5]
#define SEX _THETA_[6]
#define ECL _xETA(1)
#define EV _xETA(2)
#define EKA _xETA(3)
#define PROP _xEPS(1)
#define ADD _xEPS(2)

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
CL = TVCL*pow(WT/70,0.75)*exp(ECL);
V  = TVV*(WT/70)*exp(EV);
KA = TVKA*exp(EKA);
if(SEX==1) V = V*0.8;
F_GUT = F1;
ALAG_GUT = ALAG;
__ADVAN2_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
IPRED = CENT/(V/1000);
DV = IPRED*(1+PROP)+ADD;
while(DV < 0) {
  simeps();
  DV = IPRED*(1+PROP)+ADD;
}
_capture_[0] = WT;
_capture_[1] = CL;
_capture_[2] = IPRED;
_capture_[3] = DV;
__END_table__

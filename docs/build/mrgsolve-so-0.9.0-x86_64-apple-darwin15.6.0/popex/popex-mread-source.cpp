// Source MD5: 6347e27589bc69ec037df494a12cd28c


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
  double IPRED;
  double DV;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_popex_main__
#define __ODEFUN___ _model_popex_ode__
#define __TABLECODE___ _model_popex_table__
#define __CONFIGFUN___ _model_popex_config__
#define __REGISTERFUN___ R_init_popex
#define _nEQ 2
#define _nPAR 4
#define GUT _A_[0]
#define CENT _A_[1]
#define GUT_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define dxdt_GUT _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define TVKA _THETA_[0]
#define TVCL _THETA_[1]
#define TVV _THETA_[2]
#define WT _THETA_[3]
#define ECL _xETA(1)
#define EV _xETA(2)
#define EKA _xETA(3)

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
CL = exp(log(TVCL) + 0.75*log(WT/70) + ECL);
V  = exp(log(TVV)  +      log(WT/70) + EV );
KA = exp(log(TVKA)                   + EKA);
__ADVAN2_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
IPRED = CENT/V;
DV = IPRED*exp(EPS(1));
_capture_[0] = CL;
_capture_[1] = V;
_capture_[2] = IPRED;
_capture_[3] = DV;
_capture_[4] = ECL;
__END_table__

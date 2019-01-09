// Source MD5: ee07e8a9ffeec70f4371117345fb4175

#include <Rcpp.h>


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
  int POP;
  double myETA;
  double CL;
  double CLi;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_C_main__
#define __ODEFUN___ _model_C_ode__
#define __TABLECODE___ _model_C_table__
#define __CONFIGFUN___ _model_C_config__
#define __REGISTERFUN___ R_init_C
#define _nEQ 2
#define _nPAR 4
#define GUT _A_[0]
#define CENT _A_[1]
#define GUT_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define dxdt_GUT _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define TVCL _THETA_[0]
#define V _THETA_[1]
#define KA _THETA_[2]
#define THETA1 _THETA_[3]

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
if(NEWIND <=1) {
  POP = 1 + R::rbinom(1,0.2);
  myETA = R::rnorm(0,sqrt(0.09));
}
CL = TVCL;
if(POP==2) CL = TVCL * THETA1;
CLi = CL*exp(myETA);
__ADVAN2_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = POP;
_capture_[1] = CL;
_capture_[2] = CLi;
__END_table__

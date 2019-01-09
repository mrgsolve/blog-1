// Source MD5: b734122a42ecd8007785ba13f73b33b6


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
  capture BASE;
  int i;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_simeta_main__
#define __ODEFUN___ _model_simeta_ode__
#define __TABLECODE___ _model_simeta_table__
#define __CONFIGFUN___ _model_simeta_config__
#define __REGISTERFUN___ R_init_simeta
#define _nEQ 1
#define _nPAR 2
#define RESPONSE _A_[0]
#define RESPONSE_0 _A_0_[0]
#define dxdt_RESPONSE _DADT_[0]
#define TVBASE _THETA_[0]
#define FLAG _THETA_[1]
#define EBASE _xETA(1)

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
if(NEWIND <=1) {
  BASE = TVBASE*exp(EBASE);
  i = 0;
  if(FLAG > 0) {
    while((BASE < 80) || (BASE > 120)) {
      if(++i > 100) {
        mrg::report("There was a problem simulating BASE.");
        break;
      }
      simeta();
      BASE = TVBASE*exp(EBASE);
    }
  }
  RESPONSE_0 = BASE;
}
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = EBASE;
_capture_[1] = BASE;
__END_table__

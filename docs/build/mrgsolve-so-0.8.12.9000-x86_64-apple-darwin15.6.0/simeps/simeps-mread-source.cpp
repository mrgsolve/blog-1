// Source MD5: 41d719f9313f350714750ec2f28064a8


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
  capture CP;
  int i;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_simeps_main__
#define __ODEFUN___ _model_simeps_ode__
#define __TABLECODE___ _model_simeps_table__
#define __CONFIGFUN___ _model_simeps_config__
#define __REGISTERFUN___ R_init_simeps
#define _nEQ 1
#define _nPAR 3
#define CENT _A_[0]
#define CENT_0 _A_0_[0]
#define dxdt_CENT _DADT_[0]
#define CL _THETA_[0]
#define V _THETA_[1]
#define FLAG _THETA_[2]

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
__ADVAN1_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
CP = CENT/V + EPS(1);
i = 0;
while(CP < 0 && FLAG > 0) {
  if(++i > 100) {
    mrg::report("Problem simulating positive CP");
    break;
  }
  simeps();
  CP = CENT/V + EPS(1);
}
_capture_[0] = CP;
__END_table__

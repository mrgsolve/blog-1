// Source MD5: 00f02cc75db9fc8f47e3479427c3f5d2


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
  capture ETA1;
  capture ETA2;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_test_main__
#define __ODEFUN___ _model_test_ode__
#define __TABLECODE___ _model_test_table__
#define __CONFIGFUN___ _model_test_config__
#define __REGISTERFUN___ R_init_test
#define _nEQ 1
#define _nPAR 2
#define CENT _A_[0]
#define CENT_0 _A_0_[0]
#define dxdt_CENT _DADT_[0]
#define CL _THETA_[0]
#define V _THETA_[1]

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
ETA1 = ETA(1);
ETA2 = ETA(2);
_capture_[0] = ETA1;
_capture_[1] = ETA2;
__END_table__

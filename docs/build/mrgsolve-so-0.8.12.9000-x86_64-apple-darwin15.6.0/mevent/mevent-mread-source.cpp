// Source MD5: 7ff7a4c6d92fde1f2f896587c1e11d1d


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
  capture KA;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_mevent_main__
#define __ODEFUN___ _model_mevent_ode__
#define __TABLECODE___ _model_mevent_table__
#define __CONFIGFUN___ _model_mevent_config__
#define __REGISTERFUN___ R_init_mevent
#define _nEQ 2
#define _nPAR 5
#define GUT _A_[0]
#define CENT _A_[1]
#define GUT_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define dxdt_GUT _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define CL _THETA_[0]
#define V _THETA_[1]
#define KA1 _THETA_[2]
#define KA2 _THETA_[3]
#define KA3 _THETA_[4]

// PREAMBLE CODE BLOCK:
__BEGIN_config__
KA = KA1;
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
if(EVID==1) {
  KA = KA1;
  self.mevent(TIME + 2, 33);
}
if(EVID==33) KA = KA3;
__ADVAN2_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = KA;
__END_table__

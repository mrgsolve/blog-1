// Source MD5: fc05db2b5e7aa4ffcbd9421faab3cf11


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
  
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_mevent4_main__
#define __ODEFUN___ _model_mevent4_ode__
#define __TABLECODE___ _model_mevent4_table__
#define __CONFIGFUN___ _model_mevent4_config__
#define __REGISTERFUN___ R_init_mevent4
#define _nEQ 2
#define _nPAR 3
#define GUT _A_[0]
#define CENT _A_[1]
#define GUT_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define dxdt_GUT _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define CL _THETA_[0]
#define V _THETA_[1]
#define KA _THETA_[2]

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
if(TIME/12 ==floor(TIME/12) && TIME < 120) {
  mrg::evdata ev(TIME,1);
  ev.cmt = 1;
  ev.amt = 100; 
  self.mevector.push_back(ev);
}
__ADVAN2_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
__END_table__

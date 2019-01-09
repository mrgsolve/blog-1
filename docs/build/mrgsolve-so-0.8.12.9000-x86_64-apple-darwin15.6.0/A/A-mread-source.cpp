// Source MD5: 52ac2287a1ddd530a360eb3ad4de014c


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
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_A_main__
#define __ODEFUN___ _model_A_ode__
#define __TABLECODE___ _model_A_table__
#define __CONFIGFUN___ _model_A_config__
#define __REGISTERFUN___ R_init_A
#define _nEQ 2
#define _nPAR 5
#define GUT _A_[0]
#define CENT _A_[1]
#define GUT_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define dxdt_GUT _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define TVCL _THETA_[0]
#define V _THETA_[1]
#define KA _THETA_[2]
#define POP _THETA_[3]
#define THETA1 _THETA_[4]

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
CL = TVCL;
if(POP==2) CL = TVCL * THETA1;
__ADVAN2_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
__END_table__

// Source MD5: 6e876482433287da93faeb0fa892bf7a


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
  double N;
  double R0;
}

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_sir_main__
#define __ODEFUN___ _model_sir_ode__
#define __TABLECODE___ _model_sir_table__
#define __CONFIGFUN___ _model_sir_config__
#define __REGISTERFUN___ R_init_sir
#define _nEQ 3
#define _nPAR 4
#define S_0 _A_0_[0]
#define I_0 _A_0_[1]
#define R_0 _A_0_[2]
#define S _A_[0]
#define I _A_[1]
#define R _A_[2]
#define dxdt_S _DADT_[0]
#define dxdt_I _DADT_[1]
#define dxdt_R _DADT_[2]
#define B _THETA_[0]
#define mu _THETA_[1]
#define Beta _THETA_[2]
#define gamma _THETA_[3]

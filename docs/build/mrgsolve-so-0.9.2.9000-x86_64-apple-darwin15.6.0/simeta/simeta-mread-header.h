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
#define RESPONSE_0 _A_0_[0]
#define RESPONSE _A_[0]
#define dxdt_RESPONSE _DADT_[0]
#define TVBASE _THETA_[0]
#define FLAG _THETA_[1]
#define EBASE _xETA(1)

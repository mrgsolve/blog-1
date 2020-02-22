// Source MD5: 97a657a3144b3124bb6f367fc746b520


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

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_init__long_main__
#define __ODEFUN___ _model_init__long_ode__
#define __TABLECODE___ _model_init__long_table__
#define __CONFIGFUN___ _model_init__long_config__
#define __REGISTERFUN___ R_init_init_long
#define _nEQ 1
#define _nPAR 2
#define A_0 _A_0_[0]
#define A _A_[0]
#define dxdt_A _DADT_[0]
#define BASE _THETA_[0]
#define IFLAG _THETA_[1]

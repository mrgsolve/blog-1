// Source MD5: 917d66da072a14634b0533d7a3f7fde1


// FIXED:
// No fixed parameters.

// INCLUDES:


// NAMESPACES:

// MODEL HEADER FILES:
#include "mrgsolv.h"
#include "modelheader.h"

//INCLUDE databox functions:
#include "databox_cpp.h"

//USING plugins

// GLOBAL CODE BLOCK:
// GLOBAL VARS FROM BLOCKS & TYPEDEFS:
typedef double capture;
namespace {
   ;
}

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_init__long2_main__
#define __ODEFUN___ _model_init__long2_ode__
#define __TABLECODE___ _model_init__long2_table__
#define __CONFIGFUN___ _model_init__long2_config__
#define __REGISTERFUN___ R_init_init_long2
#define _nEQ 1
#define _nPAR 4
#define RESP_0 _A_0_[0]
#define RESP _A_[0]
#define dxdt_RESP _DADT_[0]
#define AUC _THETA_[0]
#define AUC50 _THETA_[1]
#define KIN _THETA_[2]
#define KOUT _THETA_[3]

// Source MD5: 18e11c41ed2c177e4ae1b730922f4391


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
  double beta0i;
  double beta1i;
  capture Y;
}

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_pred1_main__
#define __ODEFUN___ _model_pred1_ode__
#define __TABLECODE___ _model_pred1_table__
#define __CONFIGFUN___ _model_pred1_config__
#define __REGISTERFUN___ R_init_pred1
#define _nEQ 0
#define _nPAR 3
#define B _THETA_[0]
#define beta0 _THETA_[1]
#define beta1 _THETA_[2]

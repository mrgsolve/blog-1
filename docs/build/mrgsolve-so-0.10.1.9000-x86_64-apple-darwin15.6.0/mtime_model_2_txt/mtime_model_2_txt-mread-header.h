// Source MD5: 6c224855d7d50761556dd7dbe6d3a95b


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
  double mt;
  double mt2;
  capture KA;
}

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_mtime__model__2__txt_main__
#define __ODEFUN___ _model_mtime__model__2__txt_ode__
#define __TABLECODE___ _model_mtime__model__2__txt_table__
#define __CONFIGFUN___ _model_mtime__model__2__txt_config__
#define __REGISTERFUN___ R_init_mtime_model_2_txt
#define _nEQ 2
#define _nPAR 6
#define GUT_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define GUT _A_[0]
#define CENT _A_[1]
#define dxdt_GUT _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define CL _THETA_[0]
#define V _THETA_[1]
#define KA1 _THETA_[2]
#define KA2 _THETA_[3]
#define KA3 _THETA_[4]
#define change_t _THETA_[5]

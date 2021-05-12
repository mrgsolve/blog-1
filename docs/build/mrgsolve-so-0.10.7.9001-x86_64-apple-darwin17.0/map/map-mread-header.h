// Source MD5: ed2d0439d5d5548cb52c0511be447889


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
  double CL;
  double V;
  capture DV;
  capture ET1;
  capture ET2;
}

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_map_main__
#define __ODEFUN___ _model_map_ode__
#define __TABLECODE___ _model_map_table__
#define __CONFIGFUN___ _model_map_config__
#define __REGISTERFUN___ R_init_map
#define _nEQ 1
#define _nPAR 4
#define CENT_0 _A_0_[0]
#define CENT _A_[0]
#define dxdt_CENT _DADT_[0]
#define TVCL _THETA_[0]
#define TVVC _THETA_[1]
#define ETA1 _THETA_[2]
#define ETA2 _THETA_[3]

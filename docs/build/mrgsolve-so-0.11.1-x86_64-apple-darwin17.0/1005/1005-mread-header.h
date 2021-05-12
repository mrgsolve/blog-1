// Source MD5: 0a75a3c7aa1c914c94b534defb44ecfc


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
  double V2;
  double KA;
  double Q;
  double V3;
  double S2;
  double F;
  double Y;
  capture IPRED;
}

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_1005_main__
#define __ODEFUN___ _model_1005_ode__
#define __TABLECODE___ _model_1005_table__
#define __CONFIGFUN___ _model_1005_config__
#define __REGISTERFUN___ R_init_1005
#define _nEQ 3
#define _nPAR 9
#define GUT_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define PERIPH_0 _A_0_[2]
#define GUT _A_[0]
#define CENT _A_[1]
#define PERIPH _A_[2]
#define dxdt_GUT _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define dxdt_PERIPH _DADT_[2]
#define SEX _THETA_[0]
#define WT _THETA_[1]
#define THETA1 _THETA_[2]
#define THETA2 _THETA_[3]
#define THETA3 _THETA_[4]
#define THETA4 _THETA_[5]
#define THETA5 _THETA_[6]
#define THETA6 _THETA_[7]
#define THETA7 _THETA_[8]

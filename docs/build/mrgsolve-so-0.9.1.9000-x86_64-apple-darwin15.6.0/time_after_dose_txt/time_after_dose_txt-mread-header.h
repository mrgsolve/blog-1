// Source MD5: a1fe20fb9a4cd881ea88abf564a50a94


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
  capture tadose;
  capture CP;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_time__after__dose__txt_main__
#define __ODEFUN___ _model_time__after__dose__txt_ode__
#define __TABLECODE___ _model_time__after__dose__txt_table__
#define __CONFIGFUN___ _model_time__after__dose__txt_config__
#define __REGISTERFUN___ R_init_time_after_dose_txt
#define _nEQ 2
#define _nPAR 3
#define GUT_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define GUT _A_[0]
#define CENT _A_[1]
#define dxdt_GUT _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define CL _THETA_[0]
#define V _THETA_[1]
#define KA _THETA_[2]

// Source MD5: acccc72feaeb29820b257715f9be8bac


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
  capture AUC;
  capture Y;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_pkpd_main__
#define __ODEFUN___ _model_pkpd_ode__
#define __TABLECODE___ _model_pkpd_table__
#define __CONFIGFUN___ _model_pkpd_config__
#define __REGISTERFUN___ R_init_pkpd
#define _nEQ 0
#define _nPAR 6
#define TVCL _THETA_[0]
#define WT _THETA_[1]
#define AUC50 _THETA_[2]
#define DOSE _THETA_[3]
#define E0 _THETA_[4]
#define EMAX _THETA_[5]

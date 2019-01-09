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

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
CL = TVCL*pow(WT/70,0.75)*exp(ETA(1));
AUC = DOSE/CL;
Y = E0*(1+EMAX*AUC/(AUC50+AUC))+EPS(1);
_capture_[0] = AUC;
_capture_[1] = Y;
__END_table__

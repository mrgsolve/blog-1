// Source MD5: ad605f5c1e4146f5331ac54920239d56


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
  double V;
  double DV;
  double ET1;
  double ET2;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_map_main__
#define __ODEFUN___ _model_map_ode__
#define __TABLECODE___ _model_map_table__
#define __CONFIGFUN___ _model_map_config__
#define __REGISTERFUN___ R_init_map
#define _nEQ 1
#define _nPAR 4
#define CENT _A_[0]
#define CENT_0 _A_0_[0]
#define dxdt_CENT _DADT_[0]
#define TVCL _THETA_[0]
#define TVVC _THETA_[1]
#define ETA1 _THETA_[2]
#define ETA2 _THETA_[3]

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
CL = TVCL*exp(ETA1 + ETA(1));
V =  TVVC*exp(ETA2 + ETA(2));
__ADVAN1_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
DV = (CENT/V)*(1+EPS(1));
ET1 = ETA(1);
ET2 = ETA(2);
_capture_[0] = DV;
_capture_[1] = ET1;
_capture_[2] = ET2;
__END_table__

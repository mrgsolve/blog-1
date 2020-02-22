// Source MD5: 86fc70bc1e4390773edb38260ade9757

#define __MRGSOLVE_USE_PLUGIN_TAD__

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
  capture tad;
  capture flag;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_tad_main__
#define __ODEFUN___ _model_tad_ode__
#define __TABLECODE___ _model_tad_table__
#define __CONFIGFUN___ _model_tad_config__
#define __REGISTERFUN___ R_init_tad
#define _nEQ 1
#define _nPAR 2
#define CENT _A_[0]
#define CENT_0 _A_0_[0]
#define dxdt_CENT _DADT_[0]
#define CL _THETA_[0]
#define V _THETA_[1]

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
__ADVAN1_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
tad = self.tad();
flag = tad >= 3;
_capture_[0] = tad;
_capture_[1] = flag;
__END_table__

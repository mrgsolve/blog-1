// Source MD5: a9f1db2e54348836bedb2975ff34ce6c

#include <Rcpp.h>


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
  int POP;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_B_main__
#define __ODEFUN___ _model_B_ode__
#define __TABLECODE___ _model_B_table__
#define __CONFIGFUN___ _model_B_config__
#define __REGISTERFUN___ R_init_B
#define _nEQ 0
#define _nPAR 0

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
if(NEWIND <=1) {
  POP = 1 + R::rbinom(1,0.2);
}
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = POP;
__END_table__

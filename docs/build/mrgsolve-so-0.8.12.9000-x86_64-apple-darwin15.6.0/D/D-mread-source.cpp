// Source MD5: dd88b18ba488475160de0ea8c1247389

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
  double mixv;
  int POP;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:

// DEFS:
#define __INITFUN___ _model_D_main__
#define __ODEFUN___ _model_D_ode__
#define __TABLECODE___ _model_D_table__
#define __CONFIGFUN___ _model_D_config__
#define __REGISTERFUN___ R_init_D
#define _nEQ 0
#define _nPAR 2
#define p1 _THETA_[0]
#define p2 _THETA_[1]

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
if(NEWIND <=1) {
  mixv = R::runif(0,1);
  POP = 1;
  if(mixv > p1) POP = 2;
  if(mixv > (p1+p2)) POP = 3;
}
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = POP;
_capture_[1] = mixv;
__END_table__

// Source MD5: 16d4e6cb5c14a0fc64d3586e0f3ee80c

#include <Rcpp.h>

#include "mrgx.h"


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
  double yout;
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:
namespace  {
   Rcpp::Environment _env;
}
Rcpp::Function appx("approx"); 
Rcpp::NumericVector x;
Rcpp::NumericVector y;

// DEFS:
#define __INITFUN___ _model_approx_main__
#define __ODEFUN___ _model_approx_ode__
#define __TABLECODE___ _model_approx_table__
#define __CONFIGFUN___ _model_approx_config__
#define __REGISTERFUN___ R_init_approx
#define _nEQ 0
#define _nPAR 1
#define xout _THETA_[0]

// PREAMBLE CODE BLOCK:
__BEGIN_config__
_env = mrgx::get_envir(self);
x = mrgx::get<Rcpp::NumericVector>("x", self);
y = mrgx::get<Rcpp::NumericVector>("y", self);
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
Rcpp::List out = appx(x,y,xout);
yout = Rcpp::as<double>(out["y"]);
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = xout;
_capture_[1] = yout;
__END_table__

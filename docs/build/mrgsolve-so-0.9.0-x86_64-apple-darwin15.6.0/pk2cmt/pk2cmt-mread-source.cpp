// Source MD5: 12edf553daf6188b38cf386b38c78f91


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
  
}
typedef double localdouble;
typedef int localint;
typedef bool localbool;

// GLOBAL START USER CODE:
#define CP (CENT/VC)
#define CT (PERIPH/VP)
#define CLNL (VMAX/(KM+CP))

// DEFS:
#define __INITFUN___ _model_pk2cmt_main__
#define __ODEFUN___ _model_pk2cmt_ode__
#define __TABLECODE___ _model_pk2cmt_table__
#define __CONFIGFUN___ _model_pk2cmt_config__
#define __REGISTERFUN___ R_init_pk2cmt
#define _nEQ 4
#define _nPAR 8
#define EV1 _A_[0]
#define CENT _A_[1]
#define PERIPH _A_[2]
#define EV2 _A_[3]
#define EV1_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define PERIPH_0 _A_0_[2]
#define EV2_0 _A_0_[3]
#define dxdt_EV1 _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define dxdt_PERIPH _DADT_[2]
#define dxdt_EV2 _DADT_[3]
#define CL _THETA_[0]
#define VC _THETA_[1]
#define Q _THETA_[2]
#define VP _THETA_[3]
#define KA1 _THETA_[4]
#define KA2 _THETA_[5]
#define VMAX _THETA_[6]
#define KM _THETA_[7]

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
dxdt_EV1 = -KA1*EV1;
dxdt_EV2 = -KA2*EV2;
dxdt_CENT = KA1*EV1 + KA2*EV2 - (CL+CLNL+Q)*CP  + Q*CT;
dxdt_PERIPH = Q*CP - Q*CT;
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = CP;
__END_table__

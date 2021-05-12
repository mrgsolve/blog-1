// Source MD5: 5fcc031732103e6555c0a0ebe254fa37


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
   ;
}

// GLOBAL START USER CODE:
#define CP (CENT/VC)
#define CT (PERIPH/VP)
#define CLNL (VMAX/(KM+CP))

// DEFS:
#define __INITFUN___ _model_pk1cmt_main__
#define __ODEFUN___ _model_pk1cmt_ode__
#define __TABLECODE___ _model_pk1cmt_table__
#define __CONFIGFUN___ _model_pk1cmt_config__
#define __REGISTERFUN___ R_init_pk1cmt
#define _nEQ 3
#define _nPAR 6
#define EV1_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define EV2_0 _A_0_[2]
#define EV1 _A_[0]
#define CENT _A_[1]
#define EV2 _A_[2]
#define dxdt_EV1 _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define dxdt_EV2 _DADT_[2]
#define CL _THETA_[0]
#define VC _THETA_[1]
#define KA1 _THETA_[2]
#define KA2 _THETA_[3]
#define VMAX _THETA_[4]
#define KM _THETA_[5]

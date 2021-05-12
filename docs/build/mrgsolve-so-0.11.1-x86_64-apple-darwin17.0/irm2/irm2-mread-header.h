// Source MD5: 2bbc4ee5149ab746d97b0fb1454c55b6


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
#define INH (IMAX*pow(CP,n)/(pow(IC50,n)+pow(CP,n)))

// DEFS:
#define __INITFUN___ _model_irm2_main__
#define __ODEFUN___ _model_irm2_ode__
#define __TABLECODE___ _model_irm2_table__
#define __CONFIGFUN___ _model_irm2_config__
#define __REGISTERFUN___ R_init_irm2
#define _nEQ 5
#define _nPAR 13
#define EV1_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define PERIPH_0 _A_0_[2]
#define RESP_0 _A_0_[3]
#define EV2_0 _A_0_[4]
#define EV1 _A_[0]
#define CENT _A_[1]
#define PERIPH _A_[2]
#define RESP _A_[3]
#define EV2 _A_[4]
#define dxdt_EV1 _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define dxdt_PERIPH _DADT_[2]
#define dxdt_RESP _DADT_[3]
#define dxdt_EV2 _DADT_[4]
#define CL _THETA_[0]
#define VC _THETA_[1]
#define Q _THETA_[2]
#define VP _THETA_[3]
#define KA1 _THETA_[4]
#define KA2 _THETA_[5]
#define KIN _THETA_[6]
#define KOUT _THETA_[7]
#define IC50 _THETA_[8]
#define IMAX _THETA_[9]
#define n _THETA_[10]
#define VMAX _THETA_[11]
#define KM _THETA_[12]

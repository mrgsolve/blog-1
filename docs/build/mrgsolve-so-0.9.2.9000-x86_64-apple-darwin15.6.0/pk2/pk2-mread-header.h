// Source MD5: 63efef4e2961e6247acc91972a73f47d


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

// GLOBAL START USER CODE:
#define CP (CENT/V2)

// DEFS:
#define __INITFUN___ _model_pk2_main__
#define __ODEFUN___ _model_pk2_ode__
#define __TABLECODE___ _model_pk2_table__
#define __CONFIGFUN___ _model_pk2_config__
#define __REGISTERFUN___ R_init_pk2
#define _nEQ 3
#define _nPAR 5
#define EV_0 _A_0_[0]
#define CENT_0 _A_0_[1]
#define PERIPH_0 _A_0_[2]
#define EV _A_[0]
#define CENT _A_[1]
#define PERIPH _A_[2]
#define dxdt_EV _DADT_[0]
#define dxdt_CENT _DADT_[1]
#define dxdt_PERIPH _DADT_[2]
#define CL _THETA_[0]
#define V2 _THETA_[1]
#define Q _THETA_[2]
#define V3 _THETA_[3]
#define KA _THETA_[4]

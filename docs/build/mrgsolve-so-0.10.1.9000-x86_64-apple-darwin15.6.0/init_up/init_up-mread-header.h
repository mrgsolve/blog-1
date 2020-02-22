// Source MD5: 39a1d3ada306a3bad5039f3c0cc45556


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

// DEFS:
#define __INITFUN___ _model_init__up_main__
#define __ODEFUN___ _model_init__up_ode__
#define __TABLECODE___ _model_init__up_table__
#define __CONFIGFUN___ _model_init__up_config__
#define __REGISTERFUN___ R_init_init_up
#define _nEQ 1
#define _nPAR 0
#define RESP_0 _A_0_[0]
#define RESP _A_[0]
#define dxdt_RESP _DADT_[0]

// Source MD5: 917d66da072a14634b0533d7a3f7fde1

#include "init_long2-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
RESP_0 = KIN/KOUT;
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
dxdt_RESP = KIN*(1-AUC/(AUC50+AUC)) - KOUT*RESP;
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
__END_table__

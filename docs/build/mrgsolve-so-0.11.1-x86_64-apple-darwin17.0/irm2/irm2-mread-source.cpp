// Source MD5: 2bbc4ee5149ab746d97b0fb1454c55b6

#include "irm2-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
RESP_0 = KIN/KOUT; 
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
dxdt_EV1    = -KA1*EV1;
dxdt_EV2    = -KA2*EV2;
dxdt_CENT   =  KA1*EV1 + KA2*EV2 - (CL+CLNL+Q)*CP  + Q*CT;
dxdt_PERIPH =  Q*CP - Q*CT;
dxdt_RESP   =  KIN - KOUT*(1-INH)*RESP;
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = CP;
__END_table__

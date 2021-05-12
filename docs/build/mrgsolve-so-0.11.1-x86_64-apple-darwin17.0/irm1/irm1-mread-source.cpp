// Source MD5: 3881f0182d65ff5a7aa1adcdd012f0ed

#include "irm1-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
RESP_0 = KIN/KOUT;
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
dxdt_EV1    = -KA *EV1;
dxdt_EV2    = -KA2*EV2;
dxdt_CENT   =  KA *EV1 + KA2*EV2 - (CL+CLNL+Q)*CP  + Q*CT;
dxdt_PERIPH =  Q*CP - Q*CT;
dxdt_RESP   =  KIN*(1-INH) - KOUT*RESP;
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = CP;
_capture_[1] = CT;
_capture_[2] = CLNL;
_capture_[3] = INH;
__END_table__

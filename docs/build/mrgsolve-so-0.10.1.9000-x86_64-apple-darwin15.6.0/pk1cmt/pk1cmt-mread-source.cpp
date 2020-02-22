// Source MD5: 5fcc031732103e6555c0a0ebe254fa37

#include "pk1cmt-mread-header.h"

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
dxdt_CENT = KA1*EV1 + KA2*EV2 - (CL+CLNL)*CP;
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = CP;
__END_table__

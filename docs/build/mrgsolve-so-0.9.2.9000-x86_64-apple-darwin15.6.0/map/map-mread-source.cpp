// Source MD5: ed2d0439d5d5548cb52c0511be447889

#include "map-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
CL = TVCL*exp(ETA1 + ETA(1));
V =  TVVC*exp(ETA2 + ETA(2));
__ADVAN1_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
DV = (CENT/V)*(1+EPS(1));
ET1 = ETA(1);
ET2 = ETA(2);
_capture_[0] = DV;
_capture_[1] = ET1;
_capture_[2] = ET2;
__END_table__

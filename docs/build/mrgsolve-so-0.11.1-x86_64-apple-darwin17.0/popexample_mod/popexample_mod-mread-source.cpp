// Source MD5: 82e7a6379cd93d3c8627c8b9d78c2839

#include "popexample_mod-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
CL = exp(log(TVCL) + 0.75*log(WT/70) + ECL);
V  = exp(log(TVV)  +      log(WT/70) + EV );
KA = exp(log(TVKA)                   + EKA);
__ADVAN2_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
IPRED = CENT/V;
DV = IPRED*exp(EPS(1));
_capture_[0] = CL;
_capture_[1] = DV;
__END_table__

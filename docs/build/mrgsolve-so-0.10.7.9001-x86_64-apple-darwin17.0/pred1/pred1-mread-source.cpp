// Source MD5: 18e11c41ed2c177e4ae1b730922f4391

#include "pred1-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
beta0i = beta0 + ETA(1);
beta1i = beta1*exp(ETA(2));
Y = beta0i + beta1i*B;
_capture_[0] = Y;
__END_table__

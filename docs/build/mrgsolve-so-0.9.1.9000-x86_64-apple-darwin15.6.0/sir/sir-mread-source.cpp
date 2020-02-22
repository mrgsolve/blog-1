// Source MD5: 6e876482433287da93faeb0fa892bf7a

#include "sir-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
N = S+I+R;
dxdt_S = B-Beta*S*I/N-mu*S;
dxdt_I = Beta*S*I/N-(mu+gamma)*I;
dxdt_R = gamma*I-mu*R;
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
R0 = Beta/(mu+gamma);
__END_table__

// Source MD5: 0a75a3c7aa1c914c94b534defb44ecfc

#include "1005-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
CL=THETA1*exp(ETA(1)) * pow(THETA6,SEX) * pow(WT/70.0,THETA7);
V2=THETA2*exp(ETA(2));
KA=THETA3*exp(ETA(3));
Q =THETA4;
V3=THETA5;
S2=V2;
__ADVAN4_TRANS4__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
F = CENT/S2;
Y=F*(1+EPS(1)) + EPS(2); 
IPRED=F; 
_capture_[0] = CL;
_capture_[1] = Q;
_capture_[2] = V2;
_capture_[3] = V3;
_capture_[4] = KA;
_capture_[5] = ETA(1);
_capture_[6] = ETA(2);
_capture_[7] = ETA(3);
_capture_[8] = IPRED;
__END_table__

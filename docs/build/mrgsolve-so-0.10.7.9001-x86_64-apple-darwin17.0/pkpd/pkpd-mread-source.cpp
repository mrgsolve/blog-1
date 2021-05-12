// Source MD5: acccc72feaeb29820b257715f9be8bac

#include "pkpd-mread-header.h"

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
CL = TVCL*pow(WT/70,0.75)*exp(ETA(1));
AUC = DOSE/CL;
Y = E0*(1+EMAX*AUC/(AUC50+AUC))+EPS(1);
_capture_[0] = AUC;
_capture_[1] = Y;
__END_table__

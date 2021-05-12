// Source MD5: 41d719f9313f350714750ec2f28064a8

#include "simeps-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
__ADVAN1_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
CP = CENT/V + EPS(1);
i = 0;
while(CP < 0 && FLAG > 0) {
  if(++i > 100) {
    mrg::report("Problem simulating positive CP");
    break;
  }
  simeps();
  CP = CENT/V + EPS(1);
}
_capture_[0] = CP;
__END_table__

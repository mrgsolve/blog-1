// Source MD5: fc05db2b5e7aa4ffcbd9421faab3cf11

#include "mevent4-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
if(TIME/12 ==floor(TIME/12) && TIME < 120) {
  mrg::evdata ev(TIME,1);
  ev.cmt = 1;
  ev.amt = 100; 
  self.mevector.push_back(ev);
}
__ADVAN2_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
__END_table__

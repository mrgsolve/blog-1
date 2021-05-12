// Source MD5: a91ae7924464eb4b96e09f9b3657deb5

#include "mevent2-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
KA = KA1;
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
if(EVID==1) {
  KA = KA1;
  self.mevent(TIME + 1, 33);
  self.mevent(TIME + 2, 34);
}
if(EVID==33) KA = KA2;
if(EVID==34) KA = KA3;
__ADVAN2_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = KA;
__END_table__

// Source MD5: 25000f70727277cc3a65777c020aa772

#include "mevent-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
if(NEWIND <=1) KA = KA1;
if(EVID==1) {
  KA = KA1;
  self.mevent(TIME + 2, 33);
}
if(EVID==33) KA = KA3;
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

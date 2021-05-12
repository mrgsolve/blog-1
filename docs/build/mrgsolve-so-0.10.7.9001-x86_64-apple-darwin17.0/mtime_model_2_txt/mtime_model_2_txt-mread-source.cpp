// Source MD5: 6c224855d7d50761556dd7dbe6d3a95b

#include "mtime_model_2_txt-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
mt = self.mtime(change_t);
mt2 = self.mtime(change_t + 1);
KA = KA1;
if(TIME > mt) KA = KA2;
if(TIME > mt2) KA = KA3;
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

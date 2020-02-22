// Source MD5: 1dfb303d14fbde505f6086bfcc34035f

#include "mtime_model_txt-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
mt = self.mtime(change_t);
KA = KA1;
if(TIME > mt) KA = KA2;
if(TIME == change_t) {
  mrg::report("wait a minute ... time is 2.1?");  
}
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

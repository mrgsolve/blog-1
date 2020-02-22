// Source MD5: a1fe20fb9a4cd881ea88abf564a50a94

#include "time_after_dose_txt-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
tadose = self.tad();
__ADVAN2_TRANS2__
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
CP  = CENT/V;
_capture_[0] = tadose;
_capture_[1] = CP;
__END_table__

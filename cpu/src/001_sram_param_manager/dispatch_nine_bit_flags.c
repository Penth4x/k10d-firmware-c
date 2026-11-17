/* @k10d dispatch_nine_bit_flags @ 0x100f1794
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_nine_bit_flags(uint param_1)

{
  if ((param_1 & 0x100) != 0) {
    call_helper_with_256();
  }
  if ((param_1 & 0x80) != 0) {
    call_helper_with_0x80();
  }
  if ((param_1 & 0x40) != 0) {
    call_two_init_helpers_100f1800();
  }
  if ((param_1 & 0x20) != 0) {
    call_two_init_helpers_100f180e();
  }
  if ((param_1 & 0x10) != 0) {
    call_two_init_helpers_100f181c();
  }
  if ((param_1 & 8) != 0) {
    call_two_init_helpers_100f182a();
  }
  if ((param_1 & 4) != 0) {
    call_two_init_helpers_100f1838();
  }
  if ((param_1 & 2) != 0) {
    call_two_init_routines_100f1846();
  }
  if ((param_1 & 1) != 0) {
    call_two_helpers_with_one();
  }
  return;
}

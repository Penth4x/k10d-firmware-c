/* @k10d set_flag_bit_from_index @ 0x10426638
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * purpose:
 *   Maps a 0-3 index to a 1,2,4,8 bitmask and writes it to an object field at offset 0x2c.
 * summary:
 *   The function converts param_2 into a single-bit mask (1,2,4,8) for valid indices 0-3
 *   and returns early for other values. It then calls eventflag_clr_flg with param_1 + 0x2c
 *   and the computed mask, suggesting it sets a specific bit in a 32-bit field within a
 *   structure. The caller init_object_with_two_flags_10426266 is not named, so the specific
 *   subsystem (e.g., exposure mode, status flags) cannot be determined from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bit_from_index(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else if (param_2 == 1) {
    uVar1 = 2;
  }
  else if (param_2 == 2) {
    uVar1 = 4;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    uVar1 = 8;
  }
  eventflag_clr_flg((void *)(param_1 + 0x2c),uVar1);
  return;
}

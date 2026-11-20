/* @k10d FUN_000e9fd2 @ 0x000e9fd2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000e9fd2(uint32_t param_1)

{
  uint32_t uVar1;
  
  clear_interrupt_flags_and_update_counters();
  update_bitmask_status_byte(6,param_1);
  if ((DAT_0003c023 & 0x40) == 0) {
    uVar1 = reverse_bits_in_word(0);
  }
  else {
    uVar1 = 0;
  }
  clear_bit_and_set_flags();
  return uVar1;
}

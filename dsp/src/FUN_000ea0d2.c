/* @k10d FUN_000ea0d2 @ 0x000ea0d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000ea0d2(uint32_t param_1,uint32_t param_2)

{
  FUN_000ea136();
  clear_interrupt_flags_and_update_counters();
  update_bitmask_status_byte(5,param_1);
  if ((DAT_0003c023 & 0x40) == 0) {
    reverse_bits_in_word(param_2);
  }
  clear_bit_and_set_flags();
  return 1;
}

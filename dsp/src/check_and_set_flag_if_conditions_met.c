/* @k10d check_and_set_flag_if_conditions_met @ 0x000ecbf8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks two bit conditions in global variables and sets a flag bit if both are clear.
 * summary:
 *   Calls write_nibble_to_ram_region with argument 0. Then checks if bit 3 of DAT_0003c000
 *   is 0 and bit 2 of DAT_0003c391 is 0. If both conditions are true, it sets bit 0 of
 *   DAT_0003c1ed and returns 1, otherwise returns 0. The specific meaning of these global
 *   variables is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_set_flag_if_conditions_met(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  write_nibble_to_ram_region(0);
  if (((DAT_0003c000 & 8) == 0) && ((DAT_0003c391 & 4) == 0)) {
    DAT_0003c1ed = DAT_0003c1ed | 1;
    uVar1 = 1;
  }
  return uVar1;
}

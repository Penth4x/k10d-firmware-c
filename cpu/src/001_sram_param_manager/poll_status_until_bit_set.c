/* @k10d poll_status_until_bit_set @ 0x100f19aa
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Polls a status function up to 10000 times until bit 11 is set, calling a handler each
 *   iteration.
 * summary:
 *   The function loops up to 10000 times, calling get_sram_field_at_offset_0x24 to check a
 *   status value. If bit 11 (0x800) is set, it returns 0 (success). Otherwise, it calls
 *   infinite_loop_100f1cb0 and continues. After the loop, it calls
 *   store_value_at_dat_800482d4_offset_0x34 with argument 0x20 and returns 0xffffffff
 *   (failure) if the bit was never set. The specific subsystem (e.g., sensor, flash, lens)
 *   is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_status_until_bit_set(void)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar2 = 0xffffffff;
  iVar3 = 0;
  do {
    uVar1 = get_sram_field_at_offset_0x24();
    if ((uVar1 & 0x800) != 0) {
      uVar2 = 0;
      break;
    }
    infinite_loop_100f1cb0();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10000);
  store_value_at_dat_800482d4_offset_0x34(0x20);
  return uVar2;
}

/* @k10d test_bit_16_of_status_word @ 0x100f1d2c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 16 is set in the value returned by get_sram_field_at_offset_0x24.
 * summary:
 *   Calls get_sram_field_at_offset_0x24 to obtain a 32-bit status or flag word, then masks
 *   it with 0x10000 to test bit 16. The result is returned as a boolean. The specific
 *   meaning of bit 16 and the source of the status word are not determinable from the
 *   provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bit_16_of_status_word(void)

{
  uint uVar1;
  
  uVar1 = get_sram_field_at_offset_0x24();
  return (uVar1 & 0x10000) != 0;
}

/* @k10d gpio_dsp_ack_check @ 0x1044055c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_bit_10_of_word_at_offset_0x20)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 10 is set in the 16-bit word at offset 0x20 of the given structure.
 * summary:
 *   The function dereferences the pointer param_1, adds offset 0x20, and reads a 16-bit
 *   value. It then checks if bit 10 (mask 0x400) is set in that value. No other side
 *   effects or callees are present. The specific meaning of the bit or the structure is not
 *   determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool gpio_dsp_ack_check(void *param_1)

{
  return (**(ushort **)((int)param_1 + 0x20) & 0x400) != 0;
}

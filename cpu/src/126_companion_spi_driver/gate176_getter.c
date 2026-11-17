/* @k10d gate176_getter @ 0x1044bed4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed read_low_nibble_at_offset_one)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the low 4 bits of the byte at offset 1 from the given pointer.
 * summary:
 *   The function takes a pointer, reads the byte at offset +1, and masks it with 0xf to
 *   extract the lower nibble. It has no callees and performs no side effects. The specific
 *   meaning of the data is not determinable from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte gate176_getter(void *param_1)

{
  return *(byte *)((int)param_1 + 1) & 0xf;
}

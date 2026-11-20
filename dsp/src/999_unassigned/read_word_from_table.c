/* @k10d read_word_from_table @ 0x000df262
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns a 16-bit value from a table at offset param_1*2 + 0x3e000.
 * summary:
 *   The function takes an integer index, multiplies it by 2, adds the constant base
 *   0x3e000, and dereferences the resulting address as an unsigned 16-bit value. It has no
 *   callees and performs no side effects. The base address 0x3e000 is likely within the ROM
 *   region (0x10000000..0x105fffff) if this is a relative offset, but the absolute address
 *   is not explicitly shown in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_word_from_table(int param_1)

{
  return *(uint16_t *)(param_1 * 2 + 0x3e000);
}

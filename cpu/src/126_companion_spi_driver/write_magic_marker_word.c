/* @k10d write_magic_marker_word @ 0x10435832
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit magic marker (0xa55a5aa5 or 0xffffffff) to the first word of a memory
 *   block.
 * summary:
 *   The function takes a pointer and an integer flag. If the flag is zero, it writes
 *   0xffffffff to the pointed-to location; otherwise, it writes the pattern 0xa55a5aa5.
 *   This is a common idiom for initializing or invalidating a data structure header with a
 *   recognizable signature. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_magic_marker_word(uint32_t *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xa55a5aa5;
  }
  *param_1 = uVar1;
  return;
}

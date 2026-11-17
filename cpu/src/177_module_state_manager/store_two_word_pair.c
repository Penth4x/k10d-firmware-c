/* @k10d store_two_word_pair @ 0x10485a6e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Stores two 16-bit values into the global variables uRam800102d0 and uRam800102d2.
 * summary:
 *   The function takes two 16-bit parameters and writes them directly to two adjacent
 *   global memory locations in SDRAM (0x800102d0 and 0x800102d2). It has no callees and
 *   performs no other operations. The specific role of these globals is not determinable
 *   from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_word_pair(uint16_t param_1,uint16_t param_2)

{
  uRam800102d2 = param_1;
  uRam800102d0 = param_2;
  return;
}

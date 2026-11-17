/* @k10d write_array_element_1051e8f8 @ 0x1051e8f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit value into an array at a computed offset.
 * summary:
 *   The function stores param_3 into the memory location param_1 + 0xc + param_2 * 4. It
 *   acts as a simple setter for an element in a structure or array where the first 3 bytes
 *   (0xc offset) are skipped. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_array_element_1051e8f8(int param_1,int param_2,uint32_t param_3)

{
  *(uint32_t *)(param_1 + 0xc + param_2 * 4) = param_3;
  return;
}

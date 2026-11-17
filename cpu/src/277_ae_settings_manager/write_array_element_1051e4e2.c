/* @k10d write_array_element_1051e4e2 @ 0x1051e4e2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit value into an array at a computed offset.
 * summary:
 *   The function stores param_3 into the memory location param_1 + 0xc + param_2 * 4. This
 *   is a simple array element write where param_1 is the base pointer, param_2 is the
 *   index, and 0xc is a fixed offset (likely a struct header or base offset). No callees
 *   are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_array_element_1051e4e2(int param_1,int param_2,uint32_t param_3)

{
  *(uint32_t *)(param_1 + 0xc + param_2 * 4) = param_3;
  return;
}

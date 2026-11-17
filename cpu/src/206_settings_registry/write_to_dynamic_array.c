/* @k10d write_to_dynamic_array @ 0x104a8c08
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit value into an array, using a fallback base address if the primary
 *   pointer is null.
 * summary:
 *   The function reads a pointer from offset 0xc of the object in param_1. If that pointer
 *   is zero, it uses param_1 + 8 as the base address instead. It then writes param_3 to the
 *   memory location calculated as base + (param_2 * 4). This is a generic array element
 *   setter with a fallback buffer mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_to_dynamic_array(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = param_1 + 8;
  }
  *(uint32_t *)(iVar1 + param_2 * 4) = param_3;
  return;
}

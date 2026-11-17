/* @k10d store_computed_value_at_offset_0xb4 @ 0x10395e46
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helpers and stores the second helper's return value at offset 0xb4 of the
 *   input structure.
 * summary:
 *   The function takes a pointer param_1, calls get_or_init_sram_object_103973c4 to get an
 *   intermediate value, passes that to dispatch_on_mode_value, and writes the resulting
 *   32-bit value to *(param_1 + 0xb4). The specific roles of the callees and the structure
 *   are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_computed_value_at_offset_0xb4(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_or_init_sram_object_103973c4();
  uVar2 = dispatch_on_mode_value(iVar1);
  *(uint32_t *)((int)param_1 + 0xb4) = uVar2;
  return;
}

/* @k10d destroy_system_parameter_entry @ 0x1053616e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Resets fields of a system parameter object and optionally frees its heap memory.
 * summary:
 *   The function nulls out three fields at offsets 0x14, 0x18, and 0x1c of the object
 *   pointed to by param_1. It then calls destroy_sysparam_entry with the value at offset
 *   0x10 and the constant 3. If the low bit of param_2 is set, it calls heap_free to
 *   release the object. This behavior is consistent with a destructor or cleanup routine
 *   for a parameter store entry.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_system_parameter_entry(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 0x1c) = 0;
    *(uint32_t *)(param_1 + 0x18) = 0;
    *(uint8_t *)(param_1 + 0x14) = 0;
    destroy_sysparam_entry((void *)(*(uint32_t *)(param_1 + 0x10)),3);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}

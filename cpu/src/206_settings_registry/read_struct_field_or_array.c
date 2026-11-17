/* @k10d read_struct_field_or_array @ 0x104a2fca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns a 32-bit value from a struct at a fixed offset or from an array indexed by
 *   param_2.
 * summary:
 *   The function takes a base pointer (param_1) and an index (param_2). If param_2 is -1,
 *   it reads the 32-bit value at offset 0x3c from the base pointer. Otherwise, it reads the
 *   32-bit value at offset 0x24 plus 4 times param_2. It returns this value in r4. No
 *   callees are involved, and the specific data structure is not identifiable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_struct_field_or_array(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == -1) {
    uVar1 = *(uint32_t *)(param_1 + 0x3c);
  }
  else {
    uVar1 = *(uint32_t *)(param_1 + 0x24 + param_2 * 4);
  }
  return uVar1;
}

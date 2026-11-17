/* @k10d get_field_by_index @ 0x1042840c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer from an object at offset 0x1c or 0x28 based on a boolean flag.
 * summary:
 *   The function takes an object pointer and a flag. If the flag is zero, it returns the
 *   value stored at offset 0x1c of the object; otherwise, it returns the value at offset
 *   0x28. It performs no other operations and has no callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_by_index(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint32_t *)(param_1 + 0x1c);
  }
  else {
    uVar1 = *(uint32_t *)(param_1 + 0x28);
  }
  return uVar1;
}

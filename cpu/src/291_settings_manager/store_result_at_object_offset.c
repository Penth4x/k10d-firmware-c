/* @k10d store_result_at_object_offset @ 0x1053246c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores the 16-bit result of a helper call into a field at offset 0x22 of a sub-object.
 * summary:
 *   Reads a pointer from offset 0x18 of the object in param_1. Calls
 *   read_u16_from_struct_array with param_2 and 0, then writes the returned 16-bit value to
 *   offset 0x22 of the sub-object. The role of the sub-object and the helper is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_at_object_offset(int param_1,int param_2)

{
  uint16_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = read_u16_from_struct_array(param_2,0);
  *(uint16_t *)(iVar2 + 0x22) = uVar1;
  return;
}

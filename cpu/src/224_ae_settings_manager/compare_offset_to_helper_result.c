/* @k10d compare_offset_to_helper_result @ 0x104bcbca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns true if the int at param_1+0x4c is less than
 *   read_struct_field_at_offset_4(param_1) minus one.
 * summary:
 *   Reads a 32-bit field at offset 0x4c of the object pointed to by param_1 and compares it
 *   against the return value of read_struct_field_at_offset_4(param_1) minus 1. The result
 *   is a boolean indicating whether the stored value is strictly less than that adjusted
 *   helper result. No side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool compare_offset_to_helper_result(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0x4c);
  iVar1 = read_struct_field_at_offset_4(param_1);
  return iVar2 < iVar1 + -1;
}

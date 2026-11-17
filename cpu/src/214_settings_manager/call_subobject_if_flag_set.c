/* @k10d call_subobject_if_flag_set @ 0x104b34fa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on a sub-object pointer if a status field is non-zero, then sets a
 *   flag on another object.
 * summary:
 *   Checks if the integer at offset 0x2c of the input object is non-zero. If so, it calls
 *   store_result_at_offset_0x14_104b2e32 with that value and the other parameters. If that
 *   call returns non-zero, it calls set_flg_obj on the pointer at offset 0x44. Returns true
 *   if the flag was set, false otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_subobject_if_flag_set(int param_1,uint32_t *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*(int *)(param_1 + 0x2c) != 0) &&
     (iVar1 = store_result_at_offset_0x14_104b2e32(*(int *)(param_1 + 0x2c),param_2,param_3), iVar1 != 0)) {
    bVar2 = set_flg_obj(*(uint32_t **)(param_1 + 0x44));
  }
  return bVar2;
}

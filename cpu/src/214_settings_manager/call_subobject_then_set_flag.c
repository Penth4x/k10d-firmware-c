/* @k10d call_subobject_then_set_flag @ 0x104b3558
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on a sub-object pointer if present, then sets a flag on another sub-
 *   object.
 * summary:
 *   Checks if the field at offset 0x30 is non-null. If so, it calls
 *   store_result_at_offset_0x14_104b31b6 with that pointer, param_2, and param_3. If the
 *   helper returns non-zero, it calls set_flg_obj on the object pointer at offset 0x44.
 *   Returns true if the flag was set, false otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_subobject_then_set_flag(cls_105b7f68 *param_1,uint32_t *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((param_1->field_0x30 != 0) &&
     (iVar1 = store_result_at_offset_0x14_104b31b6(param_1->field_0x30,param_2,param_3), iVar1 != 0)) {
    bVar2 = set_flg_obj((void *)param_1->field_0x44, 0x200);
  }
  return bVar2;
}

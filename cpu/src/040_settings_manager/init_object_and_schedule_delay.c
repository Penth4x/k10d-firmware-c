/* @k10d init_object_and_schedule_delay @ 0x1039590a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure, conditionally calls a sequence of setup functions, and
 *   schedules a delayed callback.
 * summary:
 *   The function sets the second field of the object to point to the third field. It checks
 *   a flag at offset 0x3c; if clear, it calls a series of initialization functions
 *   (get_value_from_object, add_offset_to_pointer_104df392, return_r4_passthrough_104d800e,
 *   add_offset_to_pointer_104d6862) and potentially another block of setup code. It then
 *   calls call_subroutine_with_offset_args, clears two flags at offsets 0x3d and 0x3e,
 *   calls forward_param_to_helper_10394ad8 with a 500ms delay, and finally calls
 *   call_helper_with_object_and_field_10395a26. The specific subsystem is not identifiable
 *   from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562d94 * init_object_and_schedule_delay(cls_10562d94 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  param_1->field_0x4 = (uintptr_t)(&param_1->field_0x8);
  if (param_1->field_0x3c == '\0') {
    iVar1 = get_value_from_object();
    add_offset_to_pointer_104df392(iVar1);
    return_r4_passthrough_104d800e();
    add_offset_to_pointer_104d6862(__frv_reg_unset(4));
    iVar1 = (*(code *)0x104d7b5e/*ROM*/)();
    if (iVar1 != 0) {
      uStack_10 = 0;
      uStack_c = 0;
      iVar1 = get_value_from_object();
      add_offset_to_pointer_104df392(iVar1);
      return_r4_passthrough_104d800e();
      uVar2 = add_offset_to_pointer_104d6862(__frv_reg_unset(4));
      (*(code *)0x104d7b46/*ROM*/)(uVar2,&uStack_10,&uStack_c);
      call_subroutine_with_offset_args((int)param_1);
    }
  }
  else {
    call_subroutine_with_offset_args((int)param_1);
  }
  param_1->field_0x3d = 0;
  param_1->field_0x3e = 0;
  forward_param_to_helper_10394ad8(param_1,500);
  call_helper_with_object_and_field_10395a26((int)param_1);
  return param_1;
}

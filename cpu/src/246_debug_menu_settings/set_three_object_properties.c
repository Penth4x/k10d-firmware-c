/* @k10d set_three_object_properties @ 0x104d87e8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructs three temporary objects from string parameters and assigns them to
 *   properties of a shared target object.
 * summary:
 *   The function creates three instances of class cls_105bb0b8 on the stack, initializing
 *   each with one of the input string parameters (param_2, param_3, param_4) via
 *   initialize_pointer_pair_struct_104de052. It retrieves a target object handle via
 *   return_r4_passthrough_104d800e and adjust_pointer_by_offset, then calls three distinct
 *   setter methods (call_helper_with_offset_arg_104d7d02,
 *   call_helper_with_offset_arg_104d7d34, call_helper_with_offset_arg_104d7d66) to assign
 *   the temporary objects to the target. Finally, it destroys the temporary objects by
 *   calling their virtual destructor (slot 1) via
 *   reset_vtable_and_free_if_flagged_104ddfe6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_three_object_properties(uint32_t param_1,char *param_2,void *param_3,char *param_4)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_68;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_68);
  initialize_pointer_pair_struct_104de052(&cStack_68,param_2);
  uVar1 = return_r4_passthrough_104d800e();
  iVar2 = adjust_pointer_by_offset(uVar1,0);
  call_helper_with_offset_arg_104d7d02(iVar2,&cStack_68);
  cls_105bb0b8_new(&cStack_48);
  initialize_pointer_pair_struct_104de052(&cStack_48,param_3);
  uVar1 = return_r4_passthrough_104d800e();
  iVar2 = adjust_pointer_by_offset(uVar1,0);
  call_helper_with_offset_arg_104d7d34(iVar2,&cStack_48);
  cls_105bb0b8_new(&cStack_28);
  initialize_pointer_pair_struct_104de052(&cStack_28,param_4);
  uVar1 = return_r4_passthrough_104d800e();
  iVar2 = adjust_pointer_by_offset(uVar1,0);
  call_helper_with_offset_arg_104d7d66(iVar2,&cStack_28);
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_68,2);
  return;
}

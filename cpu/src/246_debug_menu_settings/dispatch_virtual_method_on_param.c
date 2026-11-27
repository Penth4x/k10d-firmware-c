/* @k10d dispatch_virtual_method_on_param @ 0x104d85b8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Checks a status flag, allocates a temporary object, and invokes a virtual method on
 *   param_1 if the flag is set.
 * summary:
 *   The function first calls check_flag_bit2_in_struct to check a condition. If non-zero,
 *   it retrieves a value via return_r4_passthrough_104d800e, allocates memory with
 *   add_offset_by_flag, and initializes a local object of class cls_105bb0b8. It then
 *   performs a virtual call on param_1 (slot 12, offset 0x60) passing the local object. If
 *   the virtual call returns non-zero, it attempts another operation via
 *   invoke_virtual_slot_six_104d6dc4. Finally, it cleans up the local object using the
 *   verified virtual method slot 1 (reset_vtable_and_free_if_flagged_104ddfe6).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_method_on_param(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *pvVar3;
  uintptr_t sp;
  cls_105bb0b8 cStack_28;
  
  iVar1 = check_flag_bit2_in_struct((uint32_t)param_1);
  if (iVar1 != 0) {
    uVar2 = return_r4_passthrough_104d800e();
    pvVar3 = (void *)add_offset_by_flag(uVar2,1);
    clear_two_fields_at_offset_0x20(pvVar3);
    cls_105bb0b8_new(&cStack_28);
    iVar1 = (((vtbl_entry*)(*(int *)(param_1 + 0x2b18)))[12].fn)
                      (((vtbl_entry*)(*(int *)(param_1 + 0x2b18)))[12].adj + param_1,&cStack_28);
    if (iVar1 != 0) {
      uVar2 = return_r4_passthrough_104d800e();
      iVar1 = invoke_virtual_slot_six_104d6dc4(uVar2,&cStack_28);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
        return 1;
      }
    }
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
  }
  return 0;
}

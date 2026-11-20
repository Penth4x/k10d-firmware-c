/* @k10d dispatch_virtual_call_on_param1_104d84ca @ 0x104d84ca
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object at param_1+0x2b18 and branches on the result to
 *   call one of several handlers.
 * summary:
 *   Constructs a temporary cls_105bb0b8 object on the stack and passes it as an argument to
 *   a virtual call (slot 12) on the object located at param_1+0x2b18. Based on the integer
 *   return value of that call, it dispatches to one of five different functions
 *   (invoke_virtual_slot_seven_104d6d54, invoke_virtual_slot_six_104d6dc4,
 *   invoke_virtual_slot_seven_104d6e3a, invoke_virtual_slot_seven_104d6e98,
 *   dispatch_virtual_call_with_cleanup), passing either the temporary object or a pointer
 *   to param_1+0x2b1c. If the dispatch chain fails, it calls
 *   invoke_virtual_then_check_helper and returns its result; otherwise it returns 0. The
 *   temporary object is destroyed via its virtual destructor (slot 1) before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_call_on_param1_104d84ca(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_28);
  iVar1 = (((vtbl_entry*)(*(int *)(param_1 + 0x2b18)))[12].fn)
                    (((vtbl_entry*)(*(int *)(param_1 + 0x2b18)))[12].adj + param_1,&cStack_28);
  if (iVar1 != 0) {
    uVar2 = return_r4_passthrough_104d800e();
    iVar1 = invoke_virtual_slot_six_104d6dc4(uVar2,&cStack_28);
    if (iVar1 == 0) {
      uVar2 = return_r4_passthrough_104d800e();
      iVar1 = invoke_virtual_slot_seven_104d6d54(uVar2,param_1 + 0x2b1c);
    }
    else {
      return_r4_passthrough_104d800e();
      iVar1 = (*(code *)0x104d689e/*ROM*/)();
      if (iVar1 == 6) {
        uVar2 = return_r4_passthrough_104d800e();
        iVar1 = invoke_virtual_slot_seven_104d6e3a(uVar2,param_1 + 0x2b1c);
      }
      else if (iVar1 == 7) {
        uVar2 = return_r4_passthrough_104d800e();
        iVar1 = invoke_virtual_slot_seven_104d6e98(uVar2,param_1 + 0x2b1c);
      }
      else {
        if (iVar1 != 8) goto LAB_104d8586;
        uVar2 = return_r4_passthrough_104d800e();
        iVar1 = dispatch_virtual_call_with_cleanup(uVar2,param_1 + 0x2b1c);
      }
    }
    if (iVar1 != 0) {
      uVar2 = invoke_virtual_then_check_helper(param_1,param_1 + 0x2b1c);
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
      return uVar2;
    }
  }
LAB_104d8586:
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
  return 0;
}

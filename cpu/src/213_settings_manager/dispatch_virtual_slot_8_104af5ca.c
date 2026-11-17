/* @k10d dispatch_virtual_slot_8_104af5ca @ 0x104af5ca
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 8 of an object if a status check passes, wrapping the call with
 *   lock/unlock helpers.
 * summary:
 *   Checks a status via dispatch_state_based_on_flag_104af61a. If zero, acquires a lock
 *   (call_subroutine_on_field_16_104ea70a), invokes virtual slot 8 (offset 0x44) on the
 *   object pointed to by param_1[0] with a this-adjustment, and releases the lock
 *   (invoke_object_method_at_offset_0x10_104ea71c). Returns 9 if the virtual call returns
 *   0, otherwise returns the status code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_virtual_slot_8_104af5ca(int *param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = dispatch_state_based_on_flag_104af61a((int *)__frv_reg_unset(4),__frv_reg_unset(5),__frv_reg_unset(6));
  if (iVar1 == 0) {
    call_subroutine_on_field_16_104ea70a((void *)param_1[1]);
    iVar2 = *(int *)(*param_1 + 4);
    iVar2 = (**(code **)(iVar2 + 0x44))(*param_1 + (int)*(short *)(iVar2 + 0x40),param_2,param_3);
    if (iVar2 == 0) {
      iVar1 = 9;
    }
    invoke_object_method_at_offset_0x10_104ea71c((void *)param_1[1]);
  }
  return iVar1;
}

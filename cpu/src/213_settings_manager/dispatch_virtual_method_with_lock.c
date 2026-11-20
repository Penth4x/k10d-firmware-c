/* @k10d dispatch_virtual_method_with_lock @ 0x104af516
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object after acquiring a lock, returning a specific error
 *   code on failure.
 * summary:
 *   The function first calls dispatch_state_based_on_flag_104af61a with the first three
 *   parameters. If that returns 0, it acquires a lock via
 *   call_subroutine_on_field_16_104ea70a, invokes a virtual method (slot 7) on the object
 *   pointed to by *param_1, and then releases the lock via
 *   invoke_object_method_at_offset_0x10_104ea71c. If the virtual call returns 0, the
 *   function returns 10; otherwise, it returns the result of the initial check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_virtual_method_with_lock(int *param_1,void *param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = dispatch_state_based_on_flag_104af61a(param_1,param_3,param_4);
  if (iVar1 == 0) {
    call_subroutine_on_field_16_104ea70a((void *)param_1[1]);
    iVar2 = *(int *)(*param_1 + 4);
    iVar2 = (((vtbl_entry*)(iVar2))[7].fn)
                      (*param_1 + (int)((vtbl_entry*)(iVar2))[7].adj,param_3,param_4,param_2);
    if (iVar2 == 0) {
      iVar1 = 10;
    }
    invoke_object_method_at_offset_0x10_104ea71c((void *)param_1[1]);
  }
  return iVar1;
}

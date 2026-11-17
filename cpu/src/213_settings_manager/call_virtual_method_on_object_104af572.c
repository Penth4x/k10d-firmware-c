/* @k10d call_virtual_method_on_object_104af572 @ 0x104af572
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, invokes a virtual method on an object, and releases the lock.
 * summary:
 *   The function first calls check_status_or_field_condition, likely to acquire a mutex or
 *   lock associated with param_1. If successful, it calls
 *   call_subroutine_on_field_16_104ea70a (likely lock acquire) on param_1[1], then performs
 *   a virtual function call on the object pointed to by *param_1 using the vtable entry at
 *   offset 0x34. The result of the virtual call is checked; if zero, the return value is
 *   set to 0xb. Finally, invoke_object_method_at_offset_0x10_104ea71c (likely lock release)
 *   is called on param_1[1].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_virtual_method_on_object_104af572(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = check_status_or_field_condition((int)param_1);
  if (iVar1 == 0) {
    call_subroutine_on_field_16_104ea70a((void *)param_1[1]);
    iVar2 = *(int *)(*param_1 + 4);
    iVar2 = (**(code **)(iVar2 + 0x34))
                      (*param_1 + (int)*(short *)(iVar2 + 0x30),param_2,param_3,param_4);
    if (iVar2 == 0) {
      iVar1 = 0xb;
    }
    invoke_object_method_at_offset_0x10_104ea71c((void *)param_1[1]);
  }
  return iVar1;
}

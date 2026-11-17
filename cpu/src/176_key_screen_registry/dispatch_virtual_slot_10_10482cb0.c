/* @k10d dispatch_virtual_slot_10_10482cb0 @ 0x10482cb0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 10 of an object, then conditionally invokes two helper functions if
 *   the result is non-zero.
 * summary:
 *   The function first calls call_kernel_with_short_id on a sub-object at offset 6. It then
 *   performs a virtual call to slot 10 (offset 0x54) of the object pointed to by param_1.
 *   If the virtual call returns non-zero, it calls set_two_fields_at_offset_0xc with the
 *   object and parameters 3 and 4, and then calls store_value_and_check_flag with the
 *   object and the constant 3, returning the result of the latter. Finally, it calls
 *   check_kernel_call_success_10459d88 on the sub-object at offset 6 and returns false if
 *   the virtual call was zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_virtual_slot_10_10482cb0(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  bool bVar2;
  
  call_kernel_with_short_id(param_1 + 6);
  iVar1 = (**(code **)(*param_1 + 0x54))((int)*(short *)(*param_1 + 0x50) + (int)param_1);
  bVar2 = false;
  if (iVar1 != 0) {
    set_two_fields_at_offset_0xc(param_1,param_3,param_4);
    bVar2 = store_value_and_check_flag(param_1,3);
  }
  check_kernel_call_success_10459d88(param_1 + 6);
  return bVar2;
}

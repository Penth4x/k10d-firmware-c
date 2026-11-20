/* @k10d dispatch_event_with_status_check @ 0x104d8644
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Checks a status flag, conditionally calls a helper, sets a byte in the object, and
 *   dispatches a virtual call.
 * summary:
 *   The function calls return_r4_passthrough_104d800e and adjust_pointer_by_offset, then
 *   checks the return value of a function at 0x104d7d90. If non-zero, it calls
 *   compare_null_terminated_strings with a pointer from 0x104d7d7e and a constant address.
 *   It sets a byte at offset 0x2b6d in param_1 to 0 or 1 based on the result. Finally, it
 *   performs a virtual call via a vtable pointer at offset 0x2b18 (slot 0x5c) and calls
 *   check_bit2_of_struct_field if the virtual call succeeds.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_with_status_check(int param_1,uint32_t param_2)

{
  uint8_t uVar1;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  
  uVar2 = return_r4_passthrough_104d800e();
  adjust_pointer_by_offset(uVar2,1);
  iVar3 = (*(code *)0x104d7d90/*ROM*/)();
  if (iVar3 != 0) {
    uVar2 = return_r4_passthrough_104d800e();
    adjust_pointer_by_offset(uVar2,1);
    pvVar4 = (void *)(*(code *)0x104d7d7e/*ROM*/)();
    iVar3 = compare_null_terminated_strings(pvVar4,(void *)0x105ba18c/*ROM*/);
    uVar1 = 1;
    if (iVar3 == 0) goto LAB_104d8690;
  }
  uVar1 = 0;
LAB_104d8690:
  *(uint8_t *)(param_1 + 0x2b6d) = uVar1;
  iVar3 = (((vtbl_entry*)(*(int *)(param_1 + 0x2b18)))[11].fn)
                    (((vtbl_entry*)(*(int *)(param_1 + 0x2b18)))[11].adj + param_1,param_2,0x105ba198/*ROM*/);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = check_bit2_of_struct_field(param_1);
    uVar2 = 1;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

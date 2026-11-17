/* @k10d dispatch_virtual_call_if_flag_clear @ 0x1049492e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object if a status check returns zero.
 * summary:
 *   The function first calls iterate_virtual_handlers. If the return value is 0, it
 *   dereferences a pointer at offset 0x48 in param_1 to get an object pointer, then reads a
 *   vtable pointer from that object. It performs a virtual call using slot 0xcc/4 (slot 33)
 *   with a this-adjustment read from offset 200 of the vtable, passing param_2 as the
 *   second argument. The specific subsystem is not identifiable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_if_flag_clear(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = iterate_virtual_handlers(__frv_reg_unset(4), __frv_reg_unset(5));
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0xc);
    (**(code **)(iVar1 + 0xcc))(*(int *)(param_1 + 0x48) + (int)*(short *)(iVar1 + 200),param_2);
  }
  return;
}

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

void dispatch_virtual_call_if_flag_clear(cls_105b4ad4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uintptr_t)(iterate_virtual_handlers((cls_105b48dc *)param_1,param_2));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1->field_0x48 + 0xc);
    (((vtbl_entry*)(iVar1))[25].fn)(param_1->field_0x48 + (int)*(short *)(iVar1 + 200),param_2);
  }
  return;
}

/* @k10d call_virtual_method_on_param1 @ 0x10373ace
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on param_1 and, if it fails, calls a virtual method on an object
 *   stored at param_1+0x38.
 * summary:
 *   Calls retry_virtual_call_with_timeout_10373b24 with param_1 and several
 *   constants/fields. If the return value is not 1, it dereferences the pointer at
 *   param_1+0x38, reads a vtable pointer at offset 0x14, and invokes virtual slot 2 (offset
 *   0x14) with a this-adjustment from offset 0x10. Returns true only if
 *   retry_virtual_call_with_timeout_10373b24 returned 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_virtual_method_on_param1(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = retry_virtual_call_with_timeout_10373b24(param_1,0,(void *)0x80018058/*SDRAM*/,*(int *)(param_1 + 0x38),0,0);
  if (iVar1 != 1) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x38) + 0x14);
    (**(code **)(iVar2 + 0x14))(*(int *)(param_1 + 0x38) + (int)*(short *)(iVar2 + 0x10));
  }
  return iVar1 == 1;
}

/* @k10d forward_eight_bytes_to_subobject @ 0x10372340
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Reads eight bytes from a struct and passes each to a distinct setter on a sub-object at
 *   offset 0x20.
 * summary:
 *   The function takes param_1, computes a sub-object pointer at param_1+0x20, and reads
 *   eight bytes from param_1 at offsets 0x64 through 0x6b. Each byte is passed as the
 *   second argument to a different callee (register_and_select_menu_item_10404afc through
 *   dispatch_mode_parameter_update_10405fc2), with the sub-object pointer as the first
 *   argument. The callees are unnamed, so the specific meaning of each byte is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_eight_bytes_to_subobject(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  register_and_select_menu_item_10404afc(iVar1,(uint)*(byte *)(param_1 + 100));
  register_and_select_menu_item_10404bc8(iVar1,(uint)*(byte *)(param_1 + 0x65));
  register_and_select_menu_items_10404c94(iVar1,(uint)*(byte *)(param_1 + 0x66));
  dispatch_five_mode_variants(iVar1,(uint)*(byte *)(param_1 + 0x67));
  invoke_virtual_slot_on_two_objects_10405502(iVar1,(uint)*(byte *)(param_1 + 0x68));
  dispatch_seven_virtual_cases(iVar1,(uint)*(byte *)(param_1 + 0x69));
  dispatch_mode_parameter_update_10405aa8(iVar1,(uint)*(byte *)(param_1 + 0x6a));
  dispatch_mode_parameter_update_10405fc2(iVar1,(uint)*(byte *)(param_1 + 0x6b));
  return;
}

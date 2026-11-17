/* @k10d check_and_dispatch_state_change_103ac0ee @ 0x103ac0ee
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Compares two byte fields in the object against helper results and dispatches two
 *   virtual messages if they differ.
 * summary:
 *   Reads bytes at offsets 0x49 and 0x12 from the object and compares them against values
 *   returned by query_object_property_25 and call_two_helpers_in_sequence_104f1b02 (both
 *   taking param_1[10] as argument). If either comparison fails, it calls two unknown
 *   functions (empty_stub_function_103b76f0, empty_noop_stub_103b76f2) and then invokes
 *   virtual slot 2 on the object at param_1[0xb] with message ID 0x1120077, and virtual
 *   slot 14 on the object itself with message ID 0x112000b. The caller is a virtual method
 *   of class cls_10564150.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_dispatch_state_change_103ac0ee(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = *(byte *)((int)param_1 + 0x49);
  uVar2 = query_object_property_25(param_1[10]);
  if ((bVar1 != uVar2) ||
     (bVar1 = *(byte *)(param_1 + 0x12), uVar2 = call_two_helpers_in_sequence_104f1b02(param_1[10]), bVar1 != uVar2)) {
    empty_stub_function_103b76f0();
    empty_noop_stub_103b76f2();
    iVar3 = *(int *)param_1[0xb];
    (**(code **)(iVar3 + 0x14))(param_1[0xb] + (int)*(short *)(iVar3 + 0x10),0x1120077,0);
    (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x112000b,0);
  }
  return;
}

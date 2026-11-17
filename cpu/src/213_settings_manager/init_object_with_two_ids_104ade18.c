/* @k10d init_object_with_two_ids_104ade18 @ 0x104ade18
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by copying four fields from parameters and calling a helper with
 *   two computed values.
 * summary:
 *   The function takes an object pointer (param_1) and three other parameters. It calls
 *   dispatch_virtual_slot_two_104af096 twice with different arguments to compute two
 *   values, then writes param_2, param_3, and param_4 into the object at offsets 0x20,
 *   0x24, and 0x28 respectively. It also copies a value from param_4+8 into the object at
 *   offset 0x34. Finally, it calls dispatch_buffer_write_request with the object pointer
 *   and the two computed values. The specific roles of the parameters and the helper
 *   functions are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_104ade18(int param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = dispatch_virtual_slot_two_104af096(param_1,2,4);
  uVar2 = dispatch_virtual_slot_two_104af096(param_1,7,2);
  *(uint32_t *)(param_1 + 0x34) = *(uint32_t *)(param_4 + 8);
  *(uint32_t *)(param_1 + 0x20) = param_2;
  *(uint32_t *)(param_1 + 0x24) = param_3;
  *(int *)(param_1 + 0x28) = param_4;
  dispatch_buffer_write_request(param_1,iVar1,uVar2);
  return;
}

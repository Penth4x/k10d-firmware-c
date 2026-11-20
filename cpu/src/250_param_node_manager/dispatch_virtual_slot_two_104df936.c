/* @k10d dispatch_virtual_slot_two_104df936 @ 0x104df936
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 of an object stored at param_1[4] and copies fields from
 *   param_1[0].
 * summary:
 *   The function reads a vtable pointer from param_1[4]+0x40 and calls the method at offset
 *   0x34 (slot 2) with a this-adjusted object pointer and param_3. It then stores param_2
 *   into param_1[4]+4 and copies two 4-byte values from param_1[0]+8 and +0xc into
 *   param_1[4]+8 and +0xc. All callers are verified virtual method slot 2 implementations
 *   of various classes, suggesting this is a common base-class or helper implementation for
 *   that slot.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_two_104df936(int *param_1,uint16_t param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1[4] + 0x40);
  (((vtbl_entry*)(iVar1))[6].fn)(param_1[4] + (int)((vtbl_entry*)(iVar1))[6].adj,param_3);
  *(uint16_t *)(param_1[4] + 4) = param_2;
  *(uint32_t *)(param_1[4] + 8) = *(uint32_t *)(*param_1 + 8);
  *(uint32_t *)(param_1[4] + 0xc) = *(uint32_t *)(*param_1 + 0xc);
  return;
}

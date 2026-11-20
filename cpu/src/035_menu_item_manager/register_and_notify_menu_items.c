/* @k10d register_and_notify_menu_items @ 0x1038e208
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resets three objects obtained via a helper, optionally copies 8 bytes of data to the
 *   first, and signals an update.
 * summary:
 *   The function calls menu_item_register three times with param_1 to obtain pointers to
 *   three objects. It then invokes a virtual method (slot 2) on each object with an
 *   argument of 0, likely a reset or clear operation. If param_2 is non-zero, it copies 8
 *   bytes from param_3 into a stack buffer, passes that buffer to
 *   copy_event_payload_and_notify along with the first object pointer, and then invokes the
 *   same virtual method on all three objects with an argument of 1, likely an apply or
 *   update operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_notify_menu_items(int param_1,int param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int aiStack_14 [3];
  int iVar5;
  
  aiStack_14[0] = param_2;
  piVar1 = (int *)menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  (((vtbl_entry*)(piVar1[3]))[1].fn)((int)*(short *)(piVar1[3] + 8) + (int)piVar1,0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  if (aiStack_14[0] != 0) {
    iVar5 = 8;
    do {
      iVar4 = iVar5 + -4;
      *(uint32_t *)((int)aiStack_14 + iVar5) = *(uint32_t *)(iVar4 + (int)param_3);
      iVar5 = iVar4;
    } while (iVar4 != 0);
    copy_event_payload_and_notify(piVar1,aiStack_14 + 1);
    (((vtbl_entry*)(piVar1[3]))[1].fn)((int)*(short *)(piVar1[3] + 8) + (int)piVar1,1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  return;
}

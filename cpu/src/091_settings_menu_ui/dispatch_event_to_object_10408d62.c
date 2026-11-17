/* @k10d dispatch_event_to_object_10408d62 @ 0x10408d62
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Selects one of four objects based on param_4 and invokes a virtual method with a 0/1
 *   flag, optionally passing a 12-byte payload.
 * summary:
 *   The function retrieves four object pointers from menu_item_register(param_1) and
 *   selects one based on param_4 (defaulting to the first if param_4 is 0 or >3). It calls
 *   a virtual method (slot 2) on the selected object and two other objects (from iVar5 and
 *   iVar6) with argument 0. If param_2 is non-zero, it copies 12 bytes from param_3 to the
 *   stack, calls copy_event_payload_and_notify with the selected object and the payload,
 *   then calls the same virtual method on the three objects with argument 1. The specific
 *   role of the objects and the virtual method is not determinable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_to_object_10408d62(int param_1,int param_2,void *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uintptr_t sp;
  int aiStack_14 [3];
  int iVar9;
  
  aiStack_14[0] = param_2;
  piVar1 = (int *)menu_item_register(param_1);
  piVar2 = (int *)menu_item_register(param_1);
  piVar3 = (int *)menu_item_register(param_1);
  piVar4 = (int *)menu_item_register(param_1);
  iVar5 = menu_item_register(param_1);
  iVar6 = menu_item_register(param_1);
  piVar7 = piVar1;
  if ((((param_4 != 0) && (piVar7 = piVar2, param_4 != 1)) && (piVar7 = piVar3, param_4 != 2)) &&
     (piVar7 = piVar4, param_4 != 3)) {
    piVar7 = piVar1;
  }
  (**(code **)(piVar7[3] + 0xc))((int)*(short *)(piVar7[3] + 8) + (int)piVar7,0);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
  (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
  if (aiStack_14[0] != 0) {
    iVar9 = 8;
    do {
      iVar8 = iVar9 + -4;
      *(uint32_t *)((int)aiStack_14 + iVar9) = *(uint32_t *)(iVar8 + (int)param_3);
      iVar9 = iVar8;
    } while (iVar8 != 0);
    copy_event_payload_and_notify(piVar7,aiStack_14 + 1);
    (**(code **)(piVar7[3] + 0xc))((int)*(short *)(piVar7[3] + 8) + (int)piVar7,1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
  }
  return;
}

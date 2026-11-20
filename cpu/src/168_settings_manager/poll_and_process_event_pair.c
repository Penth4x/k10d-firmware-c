/* @k10d poll_and_process_event_pair @ 0x1047c162
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Polls a state object until a target pair of ushort values is reached, processing
 *   intermediate states via helper calls.
 * summary:
 *   The function initializes a local buffer from param_2 and enters a loop that calls
 *   configure_and_dispatch_event to check state. If the state is active (non-zero return),
 *   it calls build_event_from_params, increments a counter at param_1+0x3c, and invokes a
 *   virtual method with argument 0x1000d. It then calls forward_field_at_offset_0x10 on an
 *   object at param_1+0x50. The loop continues until the local state variables (uStack_c,
 *   uStack_a) match the target values in param_2. If the state changes unexpectedly or a
 *   flag at param_1+0x44 is set, it may re-enter a similar processing loop or return early.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_and_process_event_pair(int param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t *puVar5;
  uint8_t auStack_3a4 [4];
  cls_105b572c cStack_37c;
  cls_105b572c cStack_1c4;
  ushort uStack_c;
  ushort uStack_a;
  
  puVar5 = (uint32_t *)auStack_3a4;
  iVar3 = 4;
  do {
    iVar4 = iVar3 + -1;
    *(uint8_t *)((int)&cStack_1c4.field_0x1b4 + iVar3 + 3) =
         *(uint8_t *)(iVar4 + (int)param_2);
    iVar3 = iVar4;
  } while (iVar4 != 0);
  iVar3 = 1;
  while( true ) {
    cls_105b572c_new(&cStack_37c);
    iVar4 = configure_and_dispatch_event(param_1,&uStack_c,0,&cStack_37c);
    if (iVar4 != 0) {
      *puVar5 = (uintptr_t)(&cStack_37c);
      iVar3 = build_event_from_params(param_1,&uStack_c,0,param_3,(int *)*puVar5);
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      piVar2 = *(int **)(*(int *)(param_1 + 0x70) + 8);
      iVar4 = *piVar2;
      (((vtbl_entry*)(iVar4))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(iVar4))[2].adj,0x1000d);
    }
    forward_field_at_offset_0x10(*(int *)(param_1 + 0x50));
    if ((uStack_c <= *param_2) && (uStack_a <= param_2[1])) break;
    cls_105b572c_delete(&cStack_37c,2);
    if ((iVar3 != 1) || (*(char *)(param_1 + 0x44) != '\0')) {
      uVar1 = *param_2;
LAB_1047c25c:
      if (((uStack_c != uVar1) || (uStack_a != param_2[1])) && (iVar3 == 1)) {
        if (&uStack_c != param_2) {
          uStack_c = *param_2;
          uStack_a = param_2[1];
        }
        forward_field_at_offset_0x10(*(int *)(param_1 + 0x50));
        iVar3 = 1;
        while( true ) {
          cls_105b572c_new(&cStack_1c4);
          iVar4 = configure_and_dispatch_event(param_1,&uStack_c,0,&cStack_1c4);
          if (iVar4 != 0) {
            *puVar5 = (uintptr_t)(&cStack_1c4);
            iVar3 = build_event_from_params(param_1,&uStack_c,0,param_3,(int *)*puVar5);
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
            piVar2 = *(int **)(*(int *)(param_1 + 0x70) + 8);
            iVar4 = *piVar2;
            (((vtbl_entry*)(iVar4))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(iVar4))[2].adj,0x1000d);
          }
          forward_field_at_offset_0x10(*(int *)(param_1 + 0x50));
          if ((*param_2 == uStack_c) && (param_2[1] == uStack_a)) break;
          cls_105b572c_delete(&cStack_1c4,2);
          if (iVar3 != 1) {
            return;
          }
          if (*(char *)(param_1 + 0x44) != '\0') {
            return;
          }
        }
        cls_105b572c_delete(&cStack_1c4,2);
      }
      return;
    }
  }
  cls_105b572c_delete(&cStack_37c,2);
  uVar1 = *param_2;
  goto LAB_1047c25c;
}

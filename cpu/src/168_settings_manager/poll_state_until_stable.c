/* @k10d poll_state_until_stable @ 0x1047c070
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Polls a state function in a loop until the returned pair of shorts stabilizes or a flag
 *   is set.
 * summary:
 *   The function first checks a condition via forward_field_at_offset_0x10. If true, it
 *   enters a loop that calls configure_and_dispatch_event to update a local state structure
 *   (auStack_1c8) and compares the resulting shorts (sStack_10/uStack_e) against previous
 *   values (sStack_c/sStack_a). It increments a counter at param_1+0x3c and invokes a
 *   virtual method (slot 2) on an object retrieved from param_1+0x70. The loop continues as
 *   long as the state values change, a local flag (iStack_1d0) is 1, and a byte at
 *   param_1+0x44 is 0. It uses cls_105b572c_new/delete for object lifecycle management
 *   within the loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_state_until_stable(int param_1,ushort *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_1e4 [4];
  int iStack_1d0;
  uint8_t auStack_1c8 [439];
  uint8_t uStack_11;
  short sStack_10;
  uint16_t uStack_e;
  short sStack_c;
  short sStack_a;
  
  puVar4 = (uint32_t *)auStack_1e4;
  sStack_10 = 0;
  uStack_e = 0;
  iVar1 = forward_field_at_offset_0x10(*(int *)(param_1 + 0x50));
  if (iVar1 != 0) {
    forward_field_at_offset_0x10(*(int *)(param_1 + 0x50));
    iStack_1d0 = 1;
    iVar1 = 4;
    do {
      iVar3 = iVar1 + -1;
      *(uint8_t *)((int)&uStack_e + iVar1 + 1) = (&uStack_11)[iVar1];
      iVar1 = iVar3;
    } while (iVar3 != 0);
    do {
      cls_105b572c_new((void *)auStack_1c8);
      iVar1 = configure_and_dispatch_event(param_1,&sStack_10,0,(void *)auStack_1c8);
      if (iVar1 != 0) {
        *puVar4 = (uint32_t)(uintptr_t)auStack_1c8;
        iStack_1d0 = build_event_from_params(param_1,&sStack_10,0,param_2,(int *)*puVar4);
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      piVar2 = *(int **)(*(int *)(param_1 + 0x70) + 8);
      iVar1 = *piVar2;
      (**(code **)(iVar1 + 0x14))
                ((int)piVar2 + (int)*(short *)(iVar1 + 0x10),0x1000d,param_1 + 0x34);
      forward_field_at_offset_0x10(*(int *)(param_1 + 0x50));
      cls_105b572c_delete((void *)auStack_1c8,2);
    } while ((((sStack_c != sStack_10) || (sStack_a != uStack_e)) && (iStack_1d0 == 1)) &&
            (*(char *)(param_1 + 0x44) == '\0'));
  }
  return;
}

/* @k10d poll_state_until_stable @ 0x1047c070
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Polls a state function in a loop until the returned pair of shorts stabilizes or a flag
 *   is set.
 * summary:
 *   The function first checks a condition via forward_field_at_offset_0x10. If true, it
 *   enters a loop that calls configure_and_dispatch_event to update a local state structure
 *   (auStack_1c8) and compares the resulting shorts (sStack_10/_cfg_e.uStack_e) against previous
 *   values (_cfg_e.sStack_c/_cfg_e.sStack_a). It increments a counter at param_1+0x3c and invokes a
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
  struct {
    uint16_t uStack_e;
    short sStack_c;
    short sStack_a;
  } _cfg_e;
  int iVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_1e4 [4];
  int iStack_1d0;
  cls_105b572c cStack_1c8;
  short sStack_10;
  puVar4 = (uint32_t *)auStack_1e4;
  sStack_10 = 0;
  _cfg_e.uStack_e = 0;
  iVar1 = forward_field_at_offset_0x10(*(int *)(param_1 + 0x50));
  if (iVar1 != 0) {
    forward_field_at_offset_0x10(*(int *)(param_1 + 0x50));
    iStack_1d0 = 1;
    iVar1 = 4;
    do {
      iVar3 = iVar1 + -1;
      *(uint8_t *)((int)&_cfg_e.uStack_e + iVar1 + 1) =
           *(uint8_t *)((int)&cStack_1c8.field_0x1b4 + iVar1 + 3);
      iVar1 = iVar3;
    } while (iVar3 != 0);
    do {
      cls_105b572c_new(&cStack_1c8);
      iVar1 = configure_and_dispatch_event(param_1,&sStack_10,0,&cStack_1c8);
      if (iVar1 != 0) {
        *puVar4 = (uintptr_t)(&cStack_1c8);
        iStack_1d0 = build_event_from_params(param_1,&sStack_10,0,param_2,(int *)*puVar4);
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      piVar2 = *(int **)(*(int *)(param_1 + 0x70) + 8);
      iVar1 = *piVar2;
      (((vtbl_entry*)(iVar1))[2].fn)
                ((int)piVar2 + (int)((vtbl_entry*)(iVar1))[2].adj,0x1000d,param_1 + 0x34);
      forward_field_at_offset_0x10(*(int *)(param_1 + 0x50));
      cls_105b572c_delete(&cStack_1c8,2);
    } while ((((_cfg_e.sStack_c != sStack_10) || (_cfg_e.sStack_a != _cfg_e.uStack_e)) && (iStack_1d0 == 1)) &&
            (*(char *)(param_1 + 0x44) == '\0'));
  }
  return;
}

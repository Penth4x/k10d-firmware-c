/* @k10d dispatch_pending_event_flags_104ab7f0 @ 0x104ab7f0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a 4-bit status mask and invokes specific handlers for each set bit if the
 *   associated object's virtual check returns non-zero.
 * summary:
 *   The function reads a status word from offset 0x34 of the input object. For each of the
 *   four low bits (0x1, 0x2, 0x4, 0x8), it performs a virtual call on an associated object
 *   (stored at offsets 0x1c or 0x20) to verify a condition. If the condition is met, it
 *   calls a corresponding handler function (invoke_virtual_slot_7_104acd80,
 *   invoke_virtual_slot_12_104ace0c, invoke_virtual_slot_11_104acdf0, or
 *   invoke_virtual_slot_15_104ace44). It returns 1 if any bit was set and the condition
 *   passed, otherwise 0. The specific camera subsystem (e.g., AF, AE, SR) is not
 *   identifiable from the generic virtual call structure and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_pending_event_flags_104ab7f0(void *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  uVar3 = **(uint **)((int)param_1 + 0x34);
  if ((uVar3 & 0xf) != 0) {
    uVar2 = 1;
    if ((uVar3 & 1) != 0) {
      iVar4 = *(int *)**(int **)((int)param_1 + 0x1c);
      iVar4 = (**(code **)(iVar4 + 0x1c))
                        (**(int **)((int)param_1 + 0x1c) + (int)*(short *)(iVar4 + 0x18));
      if (iVar4 == 0) {
        iVar4 = *(int *)**(int **)((int)param_1 + 0x20);
        iVar4 = (**(code **)(iVar4 + 0x1c))
                          (**(int **)((int)param_1 + 0x20) + (int)*(short *)(iVar4 + 0x18));
        if (iVar4 == 0) {
          uVar2 = 0;
        }
        else {
          invoke_virtual_slot_8_104acd9c(param_1);
        }
      }
      else {
        invoke_virtual_slot_7_104acd80(param_1);
      }
    }
    if ((uVar3 & 2) != 0) {
      piVar1 = *(int **)(*(int *)((int)param_1 + 0x20) + 4);
      iVar4 = *piVar1;
      iVar4 = (**(code **)(iVar4 + 0x1c))((int)piVar1 + (int)*(short *)(iVar4 + 0x18));
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        invoke_virtual_slot_12_104ace0c(param_1);
      }
    }
    if ((uVar3 & 4) != 0) {
      piVar1 = *(int **)(*(int *)((int)param_1 + 0x1c) + 4);
      iVar4 = *piVar1;
      iVar4 = (**(code **)(iVar4 + 0x1c))((int)piVar1 + (int)*(short *)(iVar4 + 0x18));
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        invoke_virtual_slot_11_104acdf0(param_1);
      }
    }
    if ((uVar3 & 8) != 0) {
      piVar1 = *(int **)(*(int *)((int)param_1 + 0x20) + 8);
      iVar4 = *piVar1;
      iVar4 = (**(code **)(iVar4 + 0x1c))((int)piVar1 + (int)*(short *)(iVar4 + 0x18));
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        invoke_virtual_slot_15_104ace44(param_1);
      }
    }
  }
  return uVar2;
}

/* @k10d dispatch_event_if_enabled @ 0x10520596
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Checks an event object's flags and dispatches a virtual handler if the event is enabled
 *   and not already handled.
 * summary:
 *   The function reads a pointer at offset 0xc of the object in param_1. If valid, it
 *   clears the pointer and checks a flag byte at offset 0x10 and a bitmask at offset 8. If
 *   the event is enabled (flag is 0) and the bitmask at offset 4 of param_1 does not
 *   overlap with the event's mask, it invokes a virtual method (slot 8) on the object
 *   pointed to by param_1+8. The return value is either the original param_2 or the result
 *   of the virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_if_enabled(int param_1,uint32_t param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar2 = *(int *)(param_1 + 0xc), iVar2 != 0)) {
    uVar3 = *(uint *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x10);
    *(uint32_t *)(param_1 + 0xc) = 0;
    if ((cVar1 == '\0') && ((uVar3 != 0 && ((*(uint *)(param_1 + 4) & uVar3) == 0)))) {
      iVar2 = **(int **)(param_1 + 8);
      param_2 = (**(code **)(iVar2 + 0x44))
                          ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x40),1,0);
    }
  }
  return param_2;
}

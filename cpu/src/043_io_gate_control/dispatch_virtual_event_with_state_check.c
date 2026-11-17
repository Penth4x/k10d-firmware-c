/* @k10d dispatch_virtual_event_with_state_check @ 0x1039f44e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 043_io_gate_control (unit names are model-proposed)
 * purpose:
 *   Checks object state fields and dispatches a virtual method call with a specific event
 *   code.
 * summary:
 *   The function first checks if a byte at offset 0x34 is non-zero and an int at 0x3c is
 *   zero. If so, it compares the value at 0x38 against values at 100, 0x60, and 0x8c,
 *   potentially setting flags at 0x40 and 0x3c. It then performs a virtual call on the
 *   object pointer at 0x30, invoking slot 2 (offset 0x14) with arguments 0x1170005 and 0.
 *   The caller is a virtual method slot 5 of class cls_10564150.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1039f494) overlaps instruction at (ram,0x1039f492)
    */

void dispatch_virtual_event_with_state_check(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x34) != '\0') && (*(int *)(param_1 + 0x3c) == 0)) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == *(int *)(param_1 + 100)) {
      call_single_helper_103a6382((void *)__frv_reg_unset(4));
    }
    else if (((iVar1 == *(int *)(param_1 + 0x60)) || (*(int *)(param_1 + 0x38) == 0)) ||
            (iVar1 == *(int *)(param_1 + 0x8c))) {
      *(uint8_t *)(param_1 + 0x40) = 1;
      *(uint32_t *)(param_1 + 0x3c) = *(uint32_t *)(param_1 + 100);
    }
  }
  iVar1 = **(int **)(param_1 + 0x30);
  (**(code **)(iVar1 + 0x14))
            ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar1 + 0x10),0x1170005,0);
  return;
}

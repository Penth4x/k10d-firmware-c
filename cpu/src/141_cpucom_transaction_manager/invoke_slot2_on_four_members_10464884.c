/* @k10d invoke_slot2_on_four_members_10464884 @ 0x10464884
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on four object pointers stored in a struct array if the index is
 *   negative.
 * summary:
 *   Checks if param_2 is less than 1. If so, it treats param_2 as a negative index
 *   (multiplied by 16) and accesses four consecutive pointers in the object at param_1 +
 *   0x48. For each non-null pointer, it invokes virtual method slot 2 (offset 0x14) with
 *   the appropriate this-adjustment. This is virtual method slot 17 of class cls_105a7a9c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_slot2_on_four_members_10464884(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 < 1) {
    param_2 = param_2 * 0x10;
    param_1 = param_1 + 0x48;
    piVar1 = *(int **)(param_1 + param_2);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1);
    }
    piVar1 = *(int **)(param_1 + param_2 + 4);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1);
    }
    piVar1 = *(int **)(param_1 + param_2 + 8);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1);
    }
    piVar1 = *(int **)(param_1 + param_2 + 0xc);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1);
    }
  }
  return;
}

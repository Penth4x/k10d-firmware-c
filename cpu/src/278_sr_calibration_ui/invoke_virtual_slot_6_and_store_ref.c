/* @k10d invoke_virtual_slot_6_and_store_ref @ 0x10520324
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 6 of the object in param_2 and stores param_2 into param_1+4 if the
 *   return value is not 3.
 * summary:
 *   The function performs a Cfront-style virtual call on the object pointed to by param_2,
 *   targeting virtual slot 6 (offset 0x34) with a this-adjustment from the short at offset
 *   0x30. It passes 0 and 0 as the first two arguments. If the return value is not equal to
 *   3, it writes the pointer param_2 into the memory location at param_1 + 4. No other side
 *   effects or callees are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_6_and_store_ref(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x34))((int)*(short *)(*param_2 + 0x30) + (int)param_2,0,0);
  if (iVar1 != 3) {
    *(int **)(param_1 + 4) = param_2;
  }
  return;
}

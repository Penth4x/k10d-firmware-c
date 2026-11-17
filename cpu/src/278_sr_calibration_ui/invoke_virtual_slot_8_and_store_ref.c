/* @k10d invoke_virtual_slot_8_and_store_ref @ 0x105203e4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 8 of the object in param_2 and stores the object pointer in
 *   param_1+4 if the return value is not 3.
 * summary:
 *   The function performs a virtual call on the object pointed to by param_2, specifically
 *   invoking slot 8 (offset 0x44) with arguments 0 and 0. It checks if the return value is
 *   not equal to 3. If the condition is met, it writes the pointer param_2 into the memory
 *   location at param_1 + 4. No other side effects or callees are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_and_store_ref(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x44))((int)*(short *)(*param_2 + 0x40) + (int)param_2,0,0);
  if (iVar1 != 3) {
    *(int **)(param_1 + 4) = param_2;
  }
  return;
}

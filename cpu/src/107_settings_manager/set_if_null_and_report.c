/* @k10d set_if_null_and_report @ 0x10427f88
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a table entry to param_3 if it is currently zero, returning true when it was zero.
 * summary:
 *   The function indexes a global table at param_2*4 - 0x7ffe21d8 and checks if the 32-bit
 *   value is zero. If zero, it stores param_3 into that slot and returns true; otherwise it
 *   returns false. No callees are invoked, and the specific role of the table or the stored
 *   value is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_if_null_and_report(uint32_t param_1,int param_2,uint32_t param_3)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_2 * 4 + -0x7ffe21d8) == 0;
  if (bVar1) {
    *(uint32_t *)(param_2 * 4 + -0x7ffe21d8) = param_3;
  }
  return bVar1;
}

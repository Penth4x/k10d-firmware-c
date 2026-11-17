/* @k10d scan_byte_array_for_value @ 0x104de40e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Scans a byte array for a target value, tracking the start and length of the current
 *   non-matching run.
 * summary:
 *   Iterates through a byte array defined by param_1 (base pointer, length, current index)
 *   looking for param_3. It uses check_param_is_0x3c_or_0x3e to advance the index and
 *   zero_struct_seven_words/drain_byte_queue to manage state in param_2. The function
 *   returns true if a match is found after a non-matching sequence, or if the scan
 *   completes with a non-empty sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool scan_byte_array_for_value(int *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  zero_struct_seven_words(param_2);
  bVar1 = false;
  uVar2 = param_1[2];
  do {
    if (*(byte *)(*param_1 + uVar2) == param_3) {
      if (bVar1) {
        drain_byte_queue(param_2);
        return true;
      }
    }
    else {
      if (!bVar1) {
        *param_2 = *param_1 + uVar2;
        bVar1 = true;
      }
      param_2[1] = param_2[1] + 1;
    }
    iVar3 = check_param_is_0x3c_or_0x3e(param_1,(uint)*(byte *)(*param_1 + param_1[2]));
    if (iVar3 != 0) break;
    uVar2 = param_1[2] + 1;
    param_1[2] = uVar2;
  } while (uVar2 < (uint)param_1[1]);
  iVar3 = param_2[1];
  if (iVar3 == 0) {
    zero_struct_seven_words(param_2);
  }
  else {
    drain_byte_queue((int *)__frv_reg_unset(4));
  }
  return iVar3 != 0;
}

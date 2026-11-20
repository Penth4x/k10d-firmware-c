/* @k10d sum_call_results_over_array @ 0x10527ce6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Iterates over an array of pointers and sums the return values of a helper called on
 *   each.
 * summary:
 *   Reads a count from param_1[0x83]. If positive, loops that many times, calling the
 *   function at 0x10526e72 with each 4-byte entry from param_1+0x214 and param_1[0] as
 *   arguments. Accumulates and returns the sum of the helper's return values. No camera-
 *   specific subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sum_call_results_over_array(cls_105f9250 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < (int)param_1->field_0x20c) {
    iVar2 = 0;
    do {
      iVar1 = (*(code *)0x10526e72/*ROM*/)
                        (*(uint32_t *)((int)&param_1[1].field_0x0 + iVar2),param_1->field_0x0);
      iVar2 = iVar2 + 4;
      iVar4 = iVar1 + iVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1->field_0x20c);
  }
  return iVar4;
}

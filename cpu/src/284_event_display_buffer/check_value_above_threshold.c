/* @k10d check_value_above_threshold @ 0x105295f8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Returns true if a value read from an object offset exceeds a fixed threshold.
 * summary:
 *   Calls sum_virtual_method_results with param_1 + 0xe00 to retrieve an integer value.
 *   Performs a scaled comparison (value * 256 / 0x4b0000 > 3) to determine if the value
 *   exceeds a specific limit. The caller is a virtual method slot 2 of an unknown class.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_value_above_threshold(int param_1)

{
  int iVar1;
  
  iVar1 = sum_virtual_method_results((cls_105f9250 *)(param_1 + 0xe00));
  return 3 < (uint)(iVar1 << 8) / 0x4b0000;
}

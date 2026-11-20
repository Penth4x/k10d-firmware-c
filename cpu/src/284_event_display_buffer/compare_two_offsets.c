/* @k10d compare_two_offsets @ 0x105295c2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Reads two values from offsets in a struct and returns whether the first exceeds 130000.
 * summary:
 *   Calls sum_virtual_method_results twice with param_1+0x4b0 and param_1+0x25c. Stores the
 *   first result in uVar1 and discards the second. Returns true if uVar1 is greater than
 *   130000 (0x1f900). The role of sum_virtual_method_results and the struct at param_1 are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool compare_two_offsets(int param_1)

{
  uint uVar1;
  
  uVar1 = sum_virtual_method_results((cls_105f9250 *)(param_1 + 0x4b0));
  sum_virtual_method_results((cls_105f9250 *)(param_1 + 0x25c));
  return 130000 < uVar1;
}

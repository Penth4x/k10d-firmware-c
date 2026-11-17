/* @k10d release_object_at_offset_0x2c_104718e2 @ 0x104718e2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Releases or frees the object pointer stored at offset 0x2c of the given structure.
 * summary:
 *   The function dereferences the pointer located at param_1 + 0x2c and passes it to
 *   clear_flag_with_notify. Based on the pattern, clear_flag_with_notify likely performs a
 *   deallocation, termination, or cleanup operation on that sub-object. No other side
 *   effects or register manipulations are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x2c_104718e2(int param_1)

{
  clear_flag_with_notify(*(void **)(param_1 + 0x2c));
  return;
}

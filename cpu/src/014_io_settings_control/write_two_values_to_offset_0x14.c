/* @k10d write_two_values_to_offset_0x14 @ 0x1036a41a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Writes two constant values (6 and 0x12) to the memory location at param_1 + 0x14 via a
 *   helper.
 * summary:
 *   The function calls call_helper_on_fetched_object twice with the same destination
 *   pointer (param_1 + 0x14) but different data values: first 6, then 0x12. The role of
 *   call_helper_on_fetched_object is unknown, but it appears to be a write or set operation
 *   given the two-argument pattern. No camera-specific subsystem is identifiable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_values_to_offset_0x14(int param_1)

{
  call_helper_on_fetched_object((void *)(param_1 + 0x14),6);
  call_helper_on_fetched_object((void *)(param_1 + 0x14),0x12);
  return;
}

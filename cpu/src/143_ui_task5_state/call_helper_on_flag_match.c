/* @k10d call_helper_on_flag_match @ 0x10467238
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a fixed argument when param_2 equals 0x1090001 and param_3 is non-
 *   zero.
 * summary:
 *   Checks if param_2 is 0x1090001 and param_3 is non-zero. If both conditions are met, it
 *   calls set_object_flag_at_offset_0x60 with the value at offset 0x30 of param_1 and the
 *   constant 1. Returns 0 unconditionally. The specific role of the helper and the meaning
 *   of the constants are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_on_flag_match(int param_1,int param_2,int param_3)

{
  if ((param_2 == 0x1090001) && (param_3 != 0)) {
    set_object_flag_at_offset_0x60((void *)(*(uint32_t *)(param_1 + 0x30)),1);
  }
  return 0;
}

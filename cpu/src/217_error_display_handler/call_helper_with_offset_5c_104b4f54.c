/* @k10d call_helper_with_offset_5c_104b4f54 @ 0x104b4f54
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at param_1+0x5c to execute_repeat_shutter_script.
 * summary:
 *   This function is a thin wrapper that reads a 32-bit value from offset 0x5c of the
 *   object pointed to by param_1 and passes it as the first argument to
 *   execute_repeat_shutter_script. It also passes the value in register r5 (in_r5) as the
 *   second argument. The specific role of the data at offset 0x5c and the behavior of
 *   execute_repeat_shutter_script are unknown, so the camera subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_5c_104b4f54(int param_1)

{
  char *r5_in;
  
  execute_repeat_shutter_script(*(uint32_t **)(param_1 + 0x5c),r5_in);
  return;
}

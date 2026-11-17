/* @k10d forward_shutter_trigger_args @ 0x104b6cf0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   Passes the first, 0x80th, and 0x218th words of a struct to a single callee.
 * summary:
 *   The function dereferences param_1 and forwards three 32-bit fields (offsets 0x0, 0x80,
 *   and 0x218) as arguments to camera_shutter_trigger. It performs no other operations and
 *   returns void. The specific role of the struct and the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_shutter_trigger_args(uint32_t *param_1)

{
  camera_shutter_trigger(*param_1,param_1[0x20],param_1[0x86]);
  return;
}

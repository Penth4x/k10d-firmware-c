/* @k10d init_shutter_trigger_state @ 0x104b6936
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Issues four sequential configuration calls to a device object passed as the first
 *   argument.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls four helper functions in
 *   sequence: store_value_at_offset_0x870 with mode 2, camera_shutter_trigger twice with
 *   different register/value pairs (0x97,0 and 0,1), and script_dispatcher with parameters
 *   0x20 and 8. The callees are not yet named, so the specific subsystem (e.g., sensor,
 *   display, or companion chip) cannot be determined from the available information. The
 *   pattern suggests a multi-step initialization or state-change sequence on a single
 *   device handle.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_shutter_trigger_state(uint32_t *param_1)

{
  store_value_at_offset_0x870(*param_1,2);
  camera_shutter_trigger(*param_1,0x97,0);
  camera_shutter_trigger(*param_1,0,1);
  script_dispatcher(param_1,0x20,8);
  return;
}

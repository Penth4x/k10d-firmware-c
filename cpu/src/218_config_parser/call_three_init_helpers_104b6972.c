/* @k10d call_three_init_helpers_104b6972 @ 0x104b6972
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions with fixed arguments to initialize or configure an
 *   object.
 * summary:
 *   The function takes a pointer to an object and calls three other functions:
 *   store_value_at_offset_0x870 with the object and 1, camera_shutter_trigger with the
 *   object, 1, and 0, and script_dispatcher with the object, 0, and 9. The specific roles
 *   of these callees are unknown, so the overall purpose is a sequence of initialization or
 *   configuration steps.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_init_helpers_104b6972(uint32_t *param_1)

{
  store_value_at_offset_0x870(*param_1,1);
  camera_shutter_trigger(*param_1,1,0);
  script_dispatcher(param_1,0,9);
  return;
}

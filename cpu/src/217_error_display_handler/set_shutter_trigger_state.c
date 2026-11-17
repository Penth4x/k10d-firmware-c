/* @k10d set_shutter_trigger_state @ 0x104b5c18
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Sets two struct fields to 0 or 1 based on a boolean parameter and calls a notification
 *   function.
 * summary:
 *   The function takes a pointer to a structure and an integer parameter. If the parameter
 *   is zero, it sets fields at offsets 0x78 and 0x80 to 0; otherwise, it sets them to 1. It
 *   then calls camera_shutter_trigger with the first field of the structure, the boolean
 *   result of the parameter check, and 0. The specific subsystem is not identifiable from
 *   the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_shutter_trigger_state(uint32_t *param_1,int param_2)

{
  if (param_2 == 0) {
    param_1[0x1e] = 0;
    param_1[0x20] = 0;
  }
  else {
    param_1[0x1e] = 1;
    param_1[0x20] = 1;
  }
  camera_shutter_trigger(*param_1,param_2 != 0,0);
  return;
}

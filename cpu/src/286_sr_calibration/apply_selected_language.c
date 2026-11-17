/* @k10d apply_selected_language @ 0x1052b7d2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Applies the chosen language index to the text context and returns success.
 * summary:
 *   Calls get_or_init_static_buffer_103fe528 to obtain a text context object, then passes
 *   it and param_2 to text_set_language to set the active language. Always returns 1 to
 *   indicate success. Used by the power-on language screen event handler after the user
 *   confirms a selection.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t apply_selected_language(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_static_buffer_103fe528();
  text_set_language(uVar1,param_2);
  return 1;
}

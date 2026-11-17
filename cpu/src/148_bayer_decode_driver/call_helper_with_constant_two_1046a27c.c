/* @k10d call_helper_with_constant_two_1046a27c @ 0x1046a27c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls render_display_layer_content with param_1, the constant 2, and param_2, returning
 *   the boolean result.
 * summary:
 *   This is a thin wrapper that forwards its two arguments to render_display_layer_content,
 *   inserting the literal integer 2 as the second argument. It converts the returned
 *   boolean to an unsigned int. The specific role of render_display_layer_content is
 *   unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_helper_with_constant_two_1046a27c(void *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = render_display_layer_content(param_1,2,param_2);
  return (uint)bVar1;
}

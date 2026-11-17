/* @k10d init_object_with_two_helpers_1048a868 @ 0x1048a868
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 186_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two helper functions and zeroing two fields at offsets
 *   0x60 and 0x68.
 * summary:
 *   The function takes an object pointer (param_1), calls set_two_fields_to_four and
 *   enable_display_output with that pointer, then writes 0 to the byte at offset 0x68 and
 *   calls set_flg_obj on the 4-byte field at offset 0x60. It returns the original pointer.
 *   The object size is 0x6c bytes, so these are the last two fields. The callees' roles are
 *   unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void * init_object_with_two_helpers_1048a868(void *param_1)

{
  set_two_fields_to_four((int)param_1);
  enable_display_output(param_1);
  *(uint8_t *)((int)param_1 + 0x68) = 0;
  set_flg_obj((uint32_t *)((int)param_1 + 0x60));
  return param_1;
}

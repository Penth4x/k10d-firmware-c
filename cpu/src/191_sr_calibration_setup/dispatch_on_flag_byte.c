/* @k10d dispatch_on_flag_byte @ 0x1048e410
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Checks a pointer field and a flag byte to call one of two helper functions.
 * summary:
 *   The function reads an integer at offset 4 of the object; if non-zero, it checks a byte
 *   at offset 0x18. If the byte is zero, it calls decode_rle_image_rows; otherwise, it
 *   calls decode_rle_pattern_to_buffer. The callees are not yet named, so the specific
 *   subsystem behavior is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_flag_byte(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      decode_rle_image_rows((ushort *)__frv_reg_unset(4));
    }
    else {
      decode_rle_pattern_to_buffer((ushort *)__frv_reg_unset(4));
    }
  }
  return;
}

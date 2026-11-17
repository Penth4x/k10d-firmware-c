/* @k10d FUN_000c3d86 @ 0x000c3d86
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000c3d86(void)

{
  compute_clamped_offset_value_000c3d94();
  clamp_and_adjust_value();
  update_status_byte_0x3c571();
  compute_clamped_value();
  return;
}

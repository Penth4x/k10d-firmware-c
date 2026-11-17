/* @k10d copy_block_at_offset_0x40 @ 0x1051c87c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 0x18 bytes from param_1+0x40 into param_2 via a single callee call.
 * summary:
 *   The function makes one call to copy_bytes_to_struct_field with param_2 as the first
 *   argument, a pointer offset by 0x40 from param_1 as the second, and a length of 0x18
 *   (24) as the third. The specific role of copy_bytes_to_struct_field is unknown, so the
 *   exact data being copied cannot be determined. No other side effects or flags are
 *   touched in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_block_at_offset_0x40(int param_1,void *param_2)

{
  copy_bytes_to_struct_field((int)param_2,(void *)(param_1 + 0x40),0x18);
  return;
}

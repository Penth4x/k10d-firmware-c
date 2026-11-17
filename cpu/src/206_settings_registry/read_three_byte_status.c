/* @k10d read_three_byte_status @ 0x104a476c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads three consecutive bytes from an object at offset 0x48 and writes them into a
 *   4-byte output buffer.
 * summary:
 *   The function calls three adjacent helper functions (read_byte_at_offset_5,
 *   read_byte_at_offset_six, read_byte_at_offset_seven), passing the pointer stored at
 *   param_1 + 0x48 to each. It stores the returned bytes into param_2[0], param_2[1], and
 *   param_2[2], respectively, and sets param_2[3] to 0. The specific role of the data at
 *   offset 0x48 is not determinable from the provided pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_three_byte_status(int param_1,uint8_t *param_2)

{
  uint8_t uVar1;
  
  uVar1 = read_byte_at_offset_5(*(void **)(param_1 + 0x48));
  *param_2 = uVar1;
  uVar1 = read_byte_at_offset_six(*(void **)(param_1 + 0x48));
  param_2[1] = uVar1;
  uVar1 = read_byte_at_offset_seven(*(void **)(param_1 + 0x48));
  param_2[2] = uVar1;
  param_2[3] = 0;
  return;
}

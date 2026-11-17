/* @k10d set_lens_update_flag @ 0x10537038
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Sets a byte at offset 0x50 in a lens firmware update state structure to 1.
 * summary:
 *   The function writes the value 1 to the byte at offset 0x50 of the structure pointed to
 *   by param_1. It is called as virtual method slot 2 of a class in the
 *   lens_firmware_update module, which handles lens CPU firmware updates. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_lens_update_flag(int param_1)

{
  *(uint8_t *)(param_1 + 0x50) = 1;
  return;
}

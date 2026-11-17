/* @k10d clear_lens_update_flag @ 0x10537046
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Clears a single byte at offset 0x50 in a lens firmware update state structure.
 * summary:
 *   The function writes zero to the byte at offset 0x50 of the object passed in param_1. It
 *   is called from within the lens_firmware_update module, which handles communication with
 *   the lens CPU for firmware updates. The specific meaning of the flag at offset 0x50 is
 *   not determinable from the pseudocode alone, but it likely represents a status or
 *   completion flag in the update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_lens_update_flag(void *param_1)

{
  *(uint8_t *)((int)param_1 + 0x50) = 0;
  return;
}

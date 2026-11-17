/* @k10d clear_lens_fw_update_flags @ 0x10536728
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Clears two byte fields at offsets 0x4c and 0x4d in a lens firmware update object.
 * summary:
 *   The function takes a pointer to an object (likely an instance of cls_10621d20 or
 *   related lens update state) and zeroes two consecutive bytes at offsets 0x4c and 0x4d.
 *   It is called by lens_fw_update_slot3 in the lens_firmware_update module. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_lens_fw_update_flags(int param_1)

{
  *(uint8_t *)(param_1 + 0x4c) = 0;
  *(uint8_t *)(param_1 + 0x4d) = 0;
  return;
}

/* @k10d reset_lens_update_context @ 0x1053e552
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Initializes a lens firmware update context structure by clearing two 8-byte fields and
 *   zeroing header words.
 * summary:
 *   The function iterates twice, calling free_lens_fw_update_context on offsets 0xc and
 *   0x14 of the parameter structure. It then explicitly sets the 4th and 1st words of the
 *   structure to 0. Given the module context 'lens_firmware_update', this appears to be a
 *   reset or initialization routine for a data structure used during lens firmware
 *   operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_lens_update_context(uint32_t *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    free_lens_fw_update_context((uint32_t *)((int)param_1 + iVar2 + 0xc));
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 8;
  } while (uVar1 < 2);
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

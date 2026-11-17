/* @k10d check_lens_fw_update_status @ 0x1053e63e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Searches a lens firmware update state table for a matching entry and triggers a
 *   callback if not found.
 * summary:
 *   Iterates through an array of 0x1c-byte structures at 0x800149fc, checking if the first
 *   field is 1 and the third field matches param_1. If a match is found, it returns -16
 *   (0xfffffff0). If no match is found after 19 iterations, it iterates through all 20
 *   entries again, calling free_lens_fw_update_context for any entry where the first field
 *   is 1, passing a pointer calculated from param_1. This logic appears to handle state
 *   transitions or error reporting during the lens firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_lens_fw_update_status(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  while ((*(int *)(_DAT_800149fc/*SDRAM*/ + iVar1) != 1 || (((int *)(_DAT_800149fc/*SDRAM*/ + iVar1))[2] != param_1)))
  {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x1c;
    if (0x13 < uVar2) {
      uVar2 = 0;
      iVar1 = 0;
      do {
        if (*(int *)(_DAT_800149fc/*SDRAM*/ + iVar1) == 1) {
          free_lens_fw_update_context((int *)(_DAT_800149fc/*SDRAM*/ + iVar1) + (uint)*(ushort *)(param_1 + 10) * 2 + 3);
        }
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x1c;
      } while (uVar2 < 0x14);
      return 0;
    }
  }
  return 0xfffffff0;
}

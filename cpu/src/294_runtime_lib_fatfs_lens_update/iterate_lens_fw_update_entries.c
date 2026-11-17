/* @k10d iterate_lens_fw_update_entries @ 0x105470fe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates over a fixed-size array of lens firmware update records and invokes a handler
 *   for each valid entry.
 * summary:
 *   The function walks an array of 0x18-byte structures starting at DAT_80014a6c+8, using
 *   the count at DAT_80014a6c+4. For each entry, it checks if the first field is non-
 *   negative and calls poll_transfer_state with a pointer to that entry. The module context
 *   indicates this is part of the lens firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iterate_lens_fw_update_entries(void)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(_DAT_80014a6c/*SDRAM*/ + 8);
      piVar1 <= (int *)(*(int *)(_DAT_80014a6c/*SDRAM*/ + 8) + *(int *)(_DAT_80014a6c/*SDRAM*/ + 4) * 0x18 + -0x18);
      piVar1 = piVar1 + 6) {
    if (-1 < *piVar1) {
      poll_transfer_state(piVar1);
    }
  }
  return;
}

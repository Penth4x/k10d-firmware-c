/* @k10d iterate_lens_update_entries @ 0x1053e3da
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Loops over 20 lens-update state entries and invokes a handler for those flagged as
 *   active.
 * summary:
 *   Iterates 20 (0x14) 28-byte (0x1c) records starting at DAT_800149fc. For each record
 *   whose first int field equals 1, it calls reset_lens_update_context with a pointer to
 *   that record. The module context is lens firmware update, so this appears to dispatch
 *   per-entry processing for active lens-update items. No other side effects are visible in
 *   this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iterate_lens_update_entries(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)((char*)_DAT_800149fc/*SDRAM*/ + iVar2) == 1) {
      reset_lens_update_context((int *)((char*)_DAT_800149fc/*SDRAM*/ + iVar2));
    }
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0x1c;
  } while (uVar1 < 0x14);
  return;
}

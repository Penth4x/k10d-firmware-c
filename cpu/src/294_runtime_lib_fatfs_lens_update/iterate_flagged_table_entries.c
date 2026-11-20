/* @k10d iterate_flagged_table_entries @ 0x1053e754
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Loops over 20 table entries and calls a helper for each entry whose first field equals
 *   1.
 * summary:
 *   The function iterates 20 times (0x14) over a table at 0x800149fc with a stride of 0x1c
 *   bytes. For each entry, it checks if the first integer is 1. If so, it calls
 *   free_lens_fw_update_context with a pointer calculated from the table entry, an offset
 *   from param_1 (at offset 10), and a constant 3. The specific subsystem or data type is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iterate_flagged_table_entries(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)((char*)_DAT_800149fc/*SDRAM*/ + iVar2) == 1) {
      free_lens_fw_update_context((int *)((char*)_DAT_800149fc/*SDRAM*/ + iVar2) + (uint)*(ushort *)(param_1 + 10) * 2 + 3);
    }
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0x1c;
  } while (uVar1 < 0x14);
  return;
}

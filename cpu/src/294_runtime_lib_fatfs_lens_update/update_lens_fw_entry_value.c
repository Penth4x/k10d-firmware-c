/* @k10d update_lens_fw_entry_value @ 0x1053ea6a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Updates a specific value in the lens firmware update table based on a key match.
 * summary:
 *   Iterates through a fixed-size array of 20 entries (0x14) pointed to by _DAT_800149fc.
 *   For each active entry (flag == 1), it traverses a linked list of sub-structures and
 *   updates fields matching param_2 with param_3. Returns 0 on success or an error code if
 *   the table is null.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t update_lens_fw_entry_value(void *param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint32_t uVar3;
  
  if (_DAT_800149fc/*SDRAM*/ == 0) {
    uVar3 = 0xfffffda7;
  }
  else {
    uVar1 = 0;
    do {
      piVar2 = (int *)(_DAT_800149fc/*SDRAM*/ + uVar1 * 0x1c);
      if (*piVar2 == 1) {
        for (piVar2 = (int *)piVar2[(uint)*(ushort *)((int)param_1 + 10) * 2 + 4];
            piVar2 != (int *)0x0; piVar2 = (int *)piVar2[5]) {
          if (*piVar2 == param_2) {
            *piVar2 = param_3;
          }
          if (piVar2[3] == param_2) {
            piVar2[3] = param_3;
          }
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x14);
    uVar3 = 0;
  }
  return uVar3;
}

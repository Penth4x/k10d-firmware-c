/* @k10d fill_two_entry_blocks @ 0x000d361a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Writes two 4-word blocks into param_1 using values from
 *   sum_absolute_diffs_of_two_arrays and iterate_and_store_values.
 * summary:
 *   Clears bit 1 of DAT_0003cbd4 and resets DAT_0003cc94. Populates the first block at
 *   param_1 with three calls to sum_absolute_diffs_of_two_arrays (args 0, 1, -1) and one
 *   call to iterate_and_store_values. Sets bit 1 of DAT_0003cbd4, then populates a second
 *   block at an offset determined by DAT_0003cc93 (which is then set to 4) using the same
 *   sequence of calls. Clears bit 1 of DAT_0003cbd4 before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_two_entry_blocks(uint16_t *param_1)

{
  uint16_t uVar1;
  uint16_t *puVar2;
  
  DAT_0003cbd4 = DAT_0003cbd4 & 0xfd;
  DAT_0003cc94 = 0;
  uVar1 = sum_absolute_diffs_of_two_arrays(0);
  *param_1 = uVar1;
  uVar1 = sum_absolute_diffs_of_two_arrays(1);
  param_1[1] = uVar1;
  uVar1 = sum_absolute_diffs_of_two_arrays(0xffffffff);
  param_1[2] = uVar1;
  iterate_and_store_values(param_1 + 3);
  DAT_0003cbd4 = DAT_0003cbd4 | 2;
  puVar2 = param_1 + 3 + (DAT_0003cc93 - 1) * 2;
  DAT_0003cc93 = 4;
  uVar1 = sum_absolute_diffs_of_two_arrays(0);
  *puVar2 = uVar1;
  uVar1 = sum_absolute_diffs_of_two_arrays(1);
  puVar2[1] = uVar1;
  uVar1 = sum_absolute_diffs_of_two_arrays(0xffffffff);
  puVar2[2] = uVar1;
  iterate_and_store_values(puVar2 + 3);
  DAT_0003cbd4 = DAT_0003cbd4 & 0xfd;
  return;
}

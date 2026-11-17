/* @k10d sum_loop_over_struct_array @ 0x10527ca4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Iterates over an array of pointers stored in a struct and sums the results of calling a
 *   helper on each.
 * summary:
 *   Reads a count from offset 0x210 of the input struct. If the count is positive, it loops
 *   that many times, reading a pointer from the struct at offset 0x214 plus the loop index,
 *   and calls the function at 0x10526df0 with that pointer and the struct base as
 *   arguments. It accumulates the integer return values into a total and returns that sum.
 *   The callee at 0x10526df0 is not identified in the database.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sum_loop_over_struct_array(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < (int)param_1[0x83]) {
    iVar2 = 0;
    do {
      iVar1 = (*(code *)0x10526df0/*ROM*/)(*(uint32_t *)((int)param_1 + iVar2 + 0x214),*param_1);
      iVar2 = iVar2 + 4;
      iVar4 = iVar1 + iVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x83]);
  }
  return iVar4;
}

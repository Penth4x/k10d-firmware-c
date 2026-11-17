/* @k10d check_entry_condition_in_table @ 0x104b4296
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Scans a table for a matching key and returns success if a secondary condition is met.
 * summary:
 *   The function iterates through an array of entries defined by param_1[0] and param_1[1].
 *   It compares a 16-bit value from the first sub-array (offset 4) against a key obtained
 *   from pack_two_bytes_into_short. If a match is found, it checks a 32-bit value in the
 *   second sub-array (offset 8) and calls process_three_object_lists. If both are non-zero,
 *   it updates param_1[2] and returns 1; otherwise, it clears param_1[2] and returns 0. If
 *   no match is found, it returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104b42e0) overlaps instruction at (ram,0x104b42de)
    */

uint32_t check_entry_condition_in_table(byte *param_1)

{
  uint uVar1;
  ushort uVar3;
  ushort uVar4;
  int iVar2;
  ushort r5_in;
  short r6_in;
  
  uVar3 = pack_two_bytes_into_short(param_1,r5_in,r6_in);
  uVar4 = read_second_word_from_struct(param_1);
  if ((uVar4 != uVar3) && (uVar1 = 0, (uint)*param_1 * (uint)param_1[1] != 0)) {
    do {
      if (*(ushort *)(*(int *)(param_1 + 4) + uVar1 * 2) == uVar3) {
        if ((*(int *)(*(int *)(param_1 + 8) + uVar1 * 4) != 0) &&
           (iVar2 = process_three_object_lists((byte *)__frv_reg_unset(4)), iVar2 != 0)) {
          *(ushort *)(param_1 + 2) = uVar3;
          return 1;
        }
        param_1[2] = 0;
        param_1[3] = 0;
        return 0;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < (uint)*param_1 * (uint)param_1[1]);
  }
  return 1;
}

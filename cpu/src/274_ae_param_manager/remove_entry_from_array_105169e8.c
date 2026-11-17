/* @k10d remove_entry_from_array_105169e8 @ 0x105169e8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Searches a fixed-size array for a matching value and calls a removal routine on the
 *   first match.
 * summary:
 *   Reads a count from offset 0x7c of the structure pointed to by param_1 and iterates over
 *   0xc-byte entries starting at the base. When an entry's first field equals param_2, it
 *   calls clear_byte_at_offset_eight with a pointer to that entry and returns. No other
 *   side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void remove_entry_from_array_105169e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + iVar2) == param_2) {
        clear_byte_at_offset_eight(iVar1 * 0xc + param_1);
        return;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 0x7c));
  }
  return;
}

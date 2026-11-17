/* @k10d extract_bitfield_with_offset @ 0x104ac8ac
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Extracts a bitfield from param_1 using a shift amount from a helper and adds a carry
 *   flag.
 * summary:
 *   The function calls find_index_in_table with param_2 to obtain a shift amount, masks it
 *   to 5 bits, and right-shifts param_1 by that amount. It also computes a carry-like flag
 *   (iVar2) based on whether (param_2 - 1) & param_1 is non-zero and param_3 is non-zero,
 *   adding this to the shifted result. The role of the specific bitfield or subsystem is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int extract_bitfield_with_offset(uint param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((param_2 - 1U & param_1) != 0) && (param_3 != 0)) {
    iVar2 = 1;
  }
  bVar1 = find_index_in_table(param_2);
  return (param_1 >> (bVar1 & 0x1f)) + iVar2;
}

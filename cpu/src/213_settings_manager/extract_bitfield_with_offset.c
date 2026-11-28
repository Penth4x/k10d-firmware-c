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

int extract_bitfield_with_offset(uint value, int field_index, int carry_enable)

{
  int carry;
  int shift_amount;

  carry = 0;
  if (((field_index - 1U) & value) != 0 && carry_enable != 0) {
    carry = 1;
  }
  shift_amount = find_index_in_table(field_index);
  return (value >> (shift_amount & 0x1f)) + carry;
}

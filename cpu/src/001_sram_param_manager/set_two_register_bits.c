/* @k10d set_two_register_bits @ 0x100f1a02
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Sets bits in two separate registers by OR-ing input masks with their current values.
 * summary:
 *   Reads the current value of a register via read_word_at_dat_offset_100f1f90 and writes
 *   back the result of OR-ing it with param_1 using store_word_at_dat_offset_100f1f82. It
 *   then reads a second register via read_word_at_dat_offset_100f1fc8 and writes back the
 *   result of OR-ing it with param_2 using store_word_at_dat_offset_100f1fba. The specific
 *   hardware registers and their roles are not identifiable from the provided pseudocode or
 *   callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_register_bits(ushort param_1,ushort param_2)

{
  ushort uVar1;
  
  uVar1 = read_word_at_dat_offset_100f1f90();
  store_word_at_dat_offset_100f1f82(uVar1 | param_1);
  uVar1 = read_word_at_dat_offset_100f1fc8();
  store_word_at_dat_offset_100f1fba(uVar1 | param_2);
  return;
}

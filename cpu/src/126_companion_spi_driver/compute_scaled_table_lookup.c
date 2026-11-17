/* @k10d compute_scaled_table_lookup @ 0x10447296
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs a table lookup using two indices derived from param_1 and returns a scaled
 *   product.
 * summary:
 *   Calls read_byte_at_offset_3_104470ee twice: once with no argument to get an index into
 *   a table at 0x105a18e4, and once with param_1 to get an index into a table at
 *   0x105a1904. It extracts the low 3 bits of the first result and bits 3-6 of the second
 *   result to index into two separate 8-entry integer tables. The function returns the
 *   product of the first table entry and the second table entry divided by 10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_scaled_table_lookup(uint32_t param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = read_byte_at_offset_3_104470ee(__frv_reg_unset(4));
  iVar2 = read_byte_at_offset_3_104470ee(param_1);
  return *(int *)((iVar2 >> 3 & 0xfU) * 4 + 0x105a1904/*ROM*/) *
         (*(uint *)((uVar1 & 7) * 4 + 0x105a18e4/*ROM*/) / 10);
}

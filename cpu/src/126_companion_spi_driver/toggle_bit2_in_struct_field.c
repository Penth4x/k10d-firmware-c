/* @k10d toggle_bit2_in_struct_field @ 0x1044b172
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears or sets bit 2 of a 16-bit field at offset 0x2c in a sub-structure pointed to by
 *   param_1+8.
 * summary:
 *   The function dereferences param_1+8 to get a pointer to a sub-structure, then accesses
 *   the 16-bit value at offset 0x2c. If param_2 is 0, it clears bit 2 (mask 0xfffb);
 *   otherwise, it sets bit 2 (OR 4). It also writes 0 to the global DAT_00000300 before
 *   storing the modified value back. No camera-specific subsystem is identifiable from the
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit2_in_struct_field(void *param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(*(int *)((int)param_1 + 8) + 0x2c) & 0xfffb;
  }
  else {
    uVar1 = *(ushort *)(*(int *)((int)param_1 + 8) + 0x2c) | 4;
  }
  _DAT_00000300 = 0;
  *(ushort *)(*(int *)((int)param_1 + 8) + 0x2c) = uVar1;
  return;
}

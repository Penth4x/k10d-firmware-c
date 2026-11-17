/* @k10d toggle_bit0_of_struct_field_1044b1d8 @ 0x1044b1d8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears or sets bit 0 of a 16-bit field at offset 0x2c in a sub-structure pointed to by
 *   param_1+8.
 * summary:
 *   The function reads a 16-bit value from *(param_1+8)+0x2c. If param_2 is 0, it clears
 *   bit 0 (AND 0xfffe); otherwise it sets bit 0 (OR 1). It writes the modified value back
 *   to the same location. It also writes 0 to the global DAT_00000300, whose role is
 *   unknown. No callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit0_of_struct_field_1044b1d8(void *param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(*(int *)((int)param_1 + 8) + 0x2c) & 0xfffe;
  }
  else {
    uVar1 = *(ushort *)(*(int *)((int)param_1 + 8) + 0x2c) | 1;
  }
  _DAT_00000300 = 0;
  *(ushort *)(*(int *)((int)param_1 + 8) + 0x2c) = uVar1;
  return;
}

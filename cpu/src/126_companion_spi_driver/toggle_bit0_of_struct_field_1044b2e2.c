/* @k10d toggle_bit0_of_struct_field_1044b2e2 @ 0x1044b2e2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears or sets bit 0 of a byte field at offset 0x2f in a sub-structure pointed to by
 *   param_1+8.
 * summary:
 *   The function dereferences the pointer stored at param_1+8 and accesses the byte at
 *   offset 0x2f. If param_2 is 0, it clears bit 0 (AND with 0xfe); otherwise it sets bit 0
 *   (OR with 1). It also writes 0 to the global DAT_00000300 before storing the modified
 *   byte back. No callees are present, and the specific subsystem role of this flag is not
 *   determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit0_of_struct_field_1044b2e2(void *param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(*(int *)((int)param_1 + 8) + 0x2f) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(*(int *)((int)param_1 + 8) + 0x2f) | 1;
  }
  _DAT_00000300 = 0;
  *(byte *)(*(int *)((int)param_1 + 8) + 0x2f) = bVar1;
  return;
}

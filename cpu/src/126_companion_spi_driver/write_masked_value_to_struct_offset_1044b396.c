/* @k10d write_masked_value_to_struct_offset_1044b396 @ 0x1044b396
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears a global flag and writes a masked 9-bit value to a struct field at offset 0x32.
 * summary:
 *   The function sets the global DAT_00000300 to 0. It then dereferences the pointer at
 *   offset 8 of param_1 and writes the lower 9 bits of param_2 to the memory location at
 *   offset 0x32 of that dereferenced structure. No other side effects or callees are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_struct_offset_1044b396(void *param_1,ushort param_2)

{
  _DAT_00000300 = 0;
  *(ushort *)(*(int *)((int)param_1 + 8) + 0x32) = param_2 & 0x1ff;
  return;
}

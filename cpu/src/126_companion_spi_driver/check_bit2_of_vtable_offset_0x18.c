/* @k10d check_bit2_of_vtable_offset_0x18 @ 0x1043c712
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 2 of the 16-bit value at offset 0x18 of the object is set.
 * summary:
 *   The function dereferences the pointer at offset 0x18 of param_1 and tests bit 2 (value
 *   4) of the resulting 16-bit word. It has no callees and performs no side effects. The
 *   specific meaning of the flag is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_bit2_of_vtable_offset_0x18(void *param_1)

{
  return (**(ushort **)((int)param_1 + 0x18) & 4) != 0;
}

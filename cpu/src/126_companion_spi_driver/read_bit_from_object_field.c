/* @k10d read_bit_from_object_field @ 0x1044aed4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls two helpers on an object, clears a global, and returns bit 0 of a byte at offset
 *   0x28 in a sub-object.
 * summary:
 *   The function first calls call_kernel_with_short_id with the object pointer, then sets
 *   global _DAT_00000300 to 0. It dereferences param_1[2] (the third pointer-sized field of
 *   the object) and reads the byte at offset 0x28 from that sub-object. It then calls
 *   check_kernel_call_success_10459d88 with the original object pointer and returns the
 *   least significant bit of the read byte. The two callees are unnamed, so their specific
 *   roles are unknown, but the mechanical operation is a guarded bit extraction from a
 *   nested structure field.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte read_bit_from_object_field(uint32_t *param_1)

{
  byte bVar1;
  
  call_kernel_with_short_id(param_1);
  _DAT_00000300 = 0;
  bVar1 = *(byte *)(param_1[2] + 0x28);
  check_kernel_call_success_10459d88(param_1);
  return bVar1 & 1;
}

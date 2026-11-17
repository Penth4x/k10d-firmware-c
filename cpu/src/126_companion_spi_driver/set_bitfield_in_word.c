/* @k10d set_bitfield_in_word @ 0x1043eeb8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets a 4-bit field within a 16-bit word at an offset determined by a byte in the
 *   object.
 * summary:
 *   Reads a nibble from offset 0x50 of the object to determine the bit position. Calls
 *   call_helper_on_field_0x58_1043ef36, then updates the 16-bit value at offset 0x18 by
 *   clearing the target 4-bit field and setting it to the lower 4 bits of param_2. Finally
 *   calls call_helper_on_field_0x58_1043ef48. The callees likely handle locking or
 *   synchronization around the modification.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bitfield_in_word(void *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = (byte)*(uint32_t *)((int)param_1 + 0x50);
  uVar2 = (ushort)(0xf << (bVar1 & 0xf));
  call_helper_on_field_0x58_1043ef36(param_1);
  **(ushort **)((int)param_1 + 0x18) =
       **(ushort **)((int)param_1 + 0x18) & (uVar2 ^ 0xffff) |
       (ushort)((param_2 & 0xf) << (bVar1 & 0xf)) & uVar2;
  call_helper_on_field_0x58_1043ef48(param_1);
  return;
}

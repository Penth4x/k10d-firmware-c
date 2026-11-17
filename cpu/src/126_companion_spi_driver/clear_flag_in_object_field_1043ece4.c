/* @k10d clear_flag_in_object_field_1043ece4 @ 0x1043ece4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears a specific bit in a 16-bit field of an object, sandwiched between two helper
 *   calls.
 * summary:
 *   The function reads a 32-bit value from offset 0x48 of the object pointed to by param_1.
 *   It calls call_helper_on_field_0x58_1043ef36, then clears a bit in the 16-bit value at
 *   offset 0x1c. The bit to clear is determined by the lower 4 bits of the value read from
 *   offset 0x48 (bit index 0-15). It then calls call_helper_on_field_0x58_1043ef48 and
 *   update_flag_bits_in_word with the object and two 0x8000 arguments. The specific
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_in_object_field_1043ece4(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = *(uint32_t *)((int)param_1 + 0x48);
  call_helper_on_field_0x58_1043ef36(param_1);
  **(ushort **)((int)param_1 + 0x1c) =
       **(ushort **)((int)param_1 + 0x1c) & ((ushort)(0x1000 << ((byte)uVar1 & 0xf)) ^ 0xffff);
  call_helper_on_field_0x58_1043ef48(param_1);
  update_flag_bits_in_word(param_1,0x8000,0x8000);
  return;
}

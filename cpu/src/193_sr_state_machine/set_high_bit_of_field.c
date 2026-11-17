/* @k10d set_high_bit_of_field @ 0x1048f9d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from an object offset and returns it with the top bit forced to 1.
 * summary:
 *   The function dereferences the pointer at param_1 + 0x14 and passes it to
 *   read_masked_register_40040308. It then ORs the returned value with 0x80000000 to set
 *   the most significant bit before returning the result. The specific role of the data at
 *   offset 0x14 and the behavior of read_masked_register_40040308 are not provided, so the
 *   camera subsystem context is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint set_high_bit_of_field(int param_1)

{
  uint uVar1;
  
  uVar1 = read_masked_register_40040308(*(uint32_t *)(param_1 + 0x14));
  return uVar1 | 0x80000000/*SDRAM*/;
}

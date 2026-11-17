/* @k10d write_low_byte_to_40004006 @ 0x104524fa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the low 8 bits of param_2 into the byte-addressed register at 0x40004006,
 *   preserving the upper bits.
 * summary:
 *   The function performs a read-modify-write on the global _DAT_40004006, masking out the
 *   lower 8 bits and replacing them with the value of param_2. It does not call any other
 *   functions and has no other side effects. The specific role of the register at
 *   0x40004006 is not determinable from the provided pseudocode or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_low_byte_to_40004006(uint32_t param_1,ushort param_2)

{
  _DAT_40004006 = _DAT_40004006 & 0xfc00 | param_2;
  return;
}

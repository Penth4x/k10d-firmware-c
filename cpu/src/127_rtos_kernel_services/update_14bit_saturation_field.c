/* @k10d update_14bit_saturation_field @ 0x10455034
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Updates a 14-bit saturation value within a 16-bit field at offset 0x318a of a
 *   structure.
 * summary:
 *   The function takes a pointer to a pointer (param_1) and a 16-bit value (param_2). It
 *   reads the 16-bit word at offset 0x318a from the structure pointed to by *param_1, masks
 *   out the lower 14 bits, and ORs in the lower 14 bits of param_2. This preserves the
 *   upper 2 bits of the original word while replacing the lower 14 bits with the new
 *   saturation value. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_14bit_saturation_field(int *param_1,ushort param_2)

{
  *(ushort *)(*param_1 + 0x318a) = *(ushort *)(*param_1 + 0x318a) & 0xc000 | param_2 & 0x3fff;
  return;
}

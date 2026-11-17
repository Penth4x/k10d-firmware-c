/* @k10d set_bit5_in_object_field @ 0x1043fcb4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets bit 5 (0x20) of the byte at offset 0x38 in the object pointed to by param_1.
 * summary:
 *   The function performs a read-modify-write on a single byte located at offset 0x38
 *   within the structure passed in param_1. It ORs the value 0x20 into that byte,
 *   effectively setting bit 5. No other memory locations are accessed and no callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit5_in_object_field(int param_1)

{
  **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) | 0x20;
  return;
}

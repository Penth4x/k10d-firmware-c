/* @k10d write_masked_value_to_mmio_10451cfa @ 0x10451cfa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes a masked 16-bit value to the MMIO address 0x400600c8.
 * summary:
 *   The function takes a 16-bit parameter, masks it with 0x1ff0, and stores the result to
 *   the global variable _DAT_400600c8. This address falls within the 0x40060000..0x4006003f
 *   range described in the brief as a byte-addressed GPIO/key port, though 0x400600c8 is
 *   slightly outside that specific range. The caller is imgp_c_program_and_start,
 *   suggesting this is part of configuring the image processor engine C.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_mmio_10451cfa(uint32_t param_1,ushort param_2)

{
  _DAT_400600c8 = param_2 & 0x1ff0;
  return;
}

/* @k10d write_engine_c_status_bits @ 0x10451cea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes a masked subset of a 16-bit value to the image processor engine C status/control
 *   register at 0x400600c6.
 * summary:
 *   The function masks param_2 with 0x1ff0 (bits 4-11) and stores the result to MMIO
 *   address 0x400600c6. This address is adjacent to the engine C control register
 *   (0x400600c0) used by the verified function imgp_c_start. The caller is
 *   imgp_c_program_and_start, which programs and starts the image processor engine C. The
 *   function has no callees and performs a single MMIO write.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_engine_c_status_bits(uint32_t param_1,ushort param_2)

{
  _DAT_400600c6 = param_2 & 0x1ff0;
  return;
}

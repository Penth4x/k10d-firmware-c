/* @k10d set_engine_c_mode_bits @ 0x10451c80
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the lower 14 bits of param_2 into the image processor engine C control register
 *   at 0x400600c0.
 * summary:
 *   The function performs a read-modify-write on the MMIO control register at 0x400600c0,
 *   masking out the lower 14 bits and inserting the value from param_2. It preserves the
 *   upper 2 bits (0xc000), which likely correspond to start/stop or other high-priority
 *   control flags managed by neighboring functions like imgp_c_start. This function is
 *   called by imgp_c_program_and_start to configure the engine C mode before starting the
 *   operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_engine_c_mode_bits(uint32_t param_1,ushort param_2)

{
  _DAT_400600c0 = _DAT_400600c0 & 0xc000 | param_2;
  return;
}

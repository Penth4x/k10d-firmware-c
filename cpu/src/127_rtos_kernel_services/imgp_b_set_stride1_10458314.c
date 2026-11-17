/* @k10d imgp_b_set_stride1_10458314 @ 0x10458314
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine B: set stride 0x40060112 (16-byte aligned).
 * summary:
 *   Writes the lower 12 bits of param_2 to MMIO address 0x40060112, which is the stride
 *   register for image-processor engine B. This follows the pattern of neighboring
 *   functions imgp_b_set_addr0, imgp_b_set_addr1, and imgp_b_set_stride0, which configure
 *   addresses and strides for the same engine. The caller imgp_b_program_and_start uses
 *   this to configure the engine before starting it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_b_set_stride1_10458314(uint32_t param_1,ushort param_2)

{
  _DAT_40060112 = param_2 & 0x1ff0;
  return;
}

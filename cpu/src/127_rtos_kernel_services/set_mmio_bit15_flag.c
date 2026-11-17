/* @k10d set_mmio_bit15_flag @ 0x1045253e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes 0x8000 or 0 to the MMIO location at 0x400a0030 based on a boolean parameter.
 * summary:
 *   The function takes a boolean-like integer parameter and writes either 0x8000 (bit 15
 *   set) or 0 to the global variable _DAT_400a0030, which resides in the 0x400a0000 MMIO
 *   region. It has no callees and performs a simple conditional store. The specific
 *   hardware function of this register is not identified in the provided brief or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_mmio_bit15_flag(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_400a0030 = 0;
  }
  else {
    _DAT_400a0030 = 0x8000;
  }
  return;
}

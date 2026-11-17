/* @k10d set_mmio_flag_bit15 @ 0x1045299e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes 0x8000 or 0 to the MMIO location 0x4007000c based on a boolean parameter.
 * summary:
 *   The function takes a boolean-like integer parameter and sets the global variable at
 *   0x4007000c to either 0x8000 (bit 15 set) or 0. The address 0x4007000c is not listed in
 *   the verified memory regions of the project brief, so its specific hardware role is
 *   unknown. It likely acts as a simple control or status flag setter for a peripheral in
 *   the 0x4007xxxx range.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_mmio_flag_bit15(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_4007000c = 0;
  }
  else {
    _DAT_4007000c = 0x8000;
  }
  return;
}

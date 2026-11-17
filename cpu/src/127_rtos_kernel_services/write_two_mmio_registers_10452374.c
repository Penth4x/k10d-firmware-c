/* @k10d write_two_mmio_registers_10452374 @ 0x10452374
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes two derived values from param_2 to MMIO addresses 0x4000c612 and 0x4000c61a.
 * summary:
 *   The function extracts bit 10 of param_2 and stores it in the 16-bit register at
 *   0x4000c612. It also extracts the lower 3 bits of param_2, shifts them left by 8, and
 *   stores the result in the 16-bit register at 0x4000c61a. No other side effects or kernel
 *   calls are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_mmio_registers_10452374(uint32_t param_1,ushort param_2)

{
  _DAT_4000c612 = param_2 & 0x400;
  _DAT_4000c61a = (param_2 & 5) << 8;
  return;
}

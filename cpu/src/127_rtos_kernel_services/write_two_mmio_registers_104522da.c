/* @k10d write_two_mmio_registers_104522da @ 0x104522da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes two derived 16-bit values from param_2 to MMIO addresses 0x4000c810 and
 *   0x4000c818.
 * summary:
 *   The function extracts bit 10 of param_2 and stores it at 0x4000c810. It also extracts
 *   the lower 3 bits of param_2, shifts them left by 8, and stores the result at
 *   0x4000c818. No kernel calls or other functions are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_mmio_registers_104522da(uint32_t param_1,ushort param_2)

{
  _DAT_4000c810 = param_2 & 0x400;
  _DAT_4000c818 = (param_2 & 5) << 8;
  return;
}

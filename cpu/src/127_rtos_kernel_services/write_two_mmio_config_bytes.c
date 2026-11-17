/* @k10d write_two_mmio_config_bytes @ 0x104523d2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes two derived byte values from param_2 to MMIO addresses 0x4000c712 and
 *   0x4000c71a.
 * summary:
 *   The function extracts bit 10 (0x400) from param_2 and stores it at 0x4000c712. It also
 *   extracts the lower 2 bits of param_2, shifts them left by 8, and stores the result at
 *   0x4000c71a. No kernel calls or camera-specific subsystems are evident from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_mmio_config_bytes(uint32_t param_1,ushort param_2)

{
  _DAT_4000c712 = param_2 & 0x400;
  _DAT_4000c71a = (param_2 & 5) << 8;
  return;
}

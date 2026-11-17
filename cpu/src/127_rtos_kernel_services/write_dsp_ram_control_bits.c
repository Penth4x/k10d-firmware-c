/* @k10d write_dsp_ram_control_bits @ 0x1045227c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes two masked bit fields from param_2 into DSPRAM locations 0x4000c710 and
 *   0x4000c718.
 * summary:
 *   The function extracts bit 10 (0x400) of param_2 and stores it in _DAT_4000c710. It
 *   extracts bits 0-1 (mask 5) of param_2, shifts them left by 8, and stores the result in
 *   _DAT_4000c718. The addresses 0x4000c710 and 0x4000c718 are not listed in the Tier 1
 *   memory map, but the prior analysis notes identify them as DSPRAM. No callees are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_dsp_ram_control_bits(uint32_t param_1,ushort param_2)

{
  _DAT_4000c710 = param_2 & 0x400;
  _DAT_4000c718 = (param_2 & 5) << 8;
  return;
}

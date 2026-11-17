/* @k10d rescon1_irq_status @ 0x104527a4
 * name: verified (structural evidence: d313: register read; Nikon Hacker emulator has resolution converters at the same base 0x400F0000)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Read resolution converter 1 interrupt status (0x400f1ffe bit 0x8000 | 0x400f000e bit
 *   8).
 * summary:
 *   VERIFIED: d313: register read; Nikon Hacker emulator has resolution converters at the
 *   same base 0x400F0000
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort rescon1_irq_status(uint32_t param_x0)

{
  return _DAT_400f1ffe & 0x8000 | _DAT_400f000e & 8;
}

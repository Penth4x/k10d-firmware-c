/* @k10d rescon0_irq_status @ 0x10452742
 * name: verified (structural evidence: d313: register read; Nikon Hacker emulator has resolution converters at the same base 0x40020000)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Read resolution converter 0 interrupt status (0x40021ffe bit 0x8000 | 0x4002000e bit
 *   8).
 * summary:
 *   VERIFIED: d313: register read; Nikon Hacker emulator has resolution converters at the
 *   same base 0x40020000
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort rescon0_irq_status(uint32_t param_x0)

{
  return _DAT_40021ffe & 0x8000 | _DAT_4002000e & 8;
}

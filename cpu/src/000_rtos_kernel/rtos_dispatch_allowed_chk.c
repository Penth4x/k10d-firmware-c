/* @k10d rtos_dispatch_allowed_chk @ 0x1000d3a2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_saved_sr_dispatch_ok)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns 0 if the saved SR register at DAT_6a003774+0x4d is 0x1f and bits 4-5 of +0x4f
 *   are set, else 1.
 * summary:
 *   Reads two bytes from the global DAT_6a003774 (offsets 0x4d and 0x4f). It checks if the
 *   first byte equals 0x1f and if the second byte has bits 4 and 5 set (mask 0x30). Returns
 *   0 if both conditions are met, otherwise 1. No callees are invoked. The role is likely a
 *   kernel dispatch or interrupt-enable check based on saved status registers, but the
 *   specific meaning of the bits is not fully verifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t rtos_dispatch_allowed_chk(void)

{
  if ((*(char *)(_DAT_6a003774 + 0x4d) == '\x1f') &&
     ((*(byte *)(_DAT_6a003774 + 0x4f) & 0x30) == 0x30)) {
    return 0;
  }
  return 1;
}

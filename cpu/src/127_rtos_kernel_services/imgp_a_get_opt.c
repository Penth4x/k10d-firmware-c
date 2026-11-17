/* @k10d imgp_a_get_opt @ 0x10459258
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads the current value of the image-processor engine A option/status byte at
 *   0x4006009c.
 * summary:
 *   Returns the byte at 0x4006009c, which is the same register used by the verified
 *   neighbor imgp_a_set_opt to set or clear bit 15. This function acts as the getter
 *   counterpart for that image-processor control/status register. No kernel calls or other
 *   side effects are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t imgp_a_get_opt(uint32_t param_x0)

{
  return (char)_DAT_4006009c;
}

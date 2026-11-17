/* @k10d imgp_a_set_mode_10459050 @ 0x10459050
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Sets the low 8-bit mode field of image-processor engine A control register 0x40060080.
 * summary:
 *   Writes param_2 into the low byte of the MMIO control word at 0x40060080, masking out
 *   bits 0-7 and preserving the upper 24 bits. This is the same register and field used by
 *   the verified neighbour imgp_a_set_mode, indicating this function configures the
 *   operation mode of the PRIME image-processor engine A. No other side effects or callees
 *   are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_a_set_mode_10459050(uint32_t param_1,ushort param_2)

{
  _DAT_40060080 = _DAT_40060080 & 0xc0ff | param_2;
  return;
}

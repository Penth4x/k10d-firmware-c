/* @k10d imgp_irq_enable_set @ 0x104520d2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the masked image-processor interrupt enable bits to 0x40060030.
 * summary:
 *   Takes a 16-bit value, masks it with 0x2c (bits 2, 3, 5), and stores the result to the
 *   MMIO register at 0x40060030. This register is the image-processor interrupt enable
 *   mask, as confirmed by the neighbouring verified function imgp_irq_enable which reads
 *   the same address. The function has no callees and performs a single MMIO write.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_irq_enable_set(uint32_t param_1,ushort param_2)

{
  _DAT_40060030/*KEYPAD*/ = param_2 & 0x2c;
  return;
}

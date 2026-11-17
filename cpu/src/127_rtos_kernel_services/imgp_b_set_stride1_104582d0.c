/* @k10d imgp_b_set_stride1_104582d0 @ 0x104582d0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine B: set stride 0x4006010e (16-byte aligned).
 * summary:
 *   Writes the lower 12 bits of param_2 (masked with 0x1ff0) to MMIO offset 0x4006010e,
 *   which is the stride-1 register for image-processor engine B. This is the sibling of
 *   imgp_b_set_stride0 (0x4006010c) and sits in the same control block
 *   (0x40060100..0x4006010f) used by imgp_b_set_mode, imgp_b_set_addr0/1, and imgp_b_start.
 *   No callees; single MMIO store.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_b_set_stride1_104582d0(uint32_t param_1,ushort param_2)

{
  _DAT_4006010e = param_2 & 0x1ff0;
  return;
}

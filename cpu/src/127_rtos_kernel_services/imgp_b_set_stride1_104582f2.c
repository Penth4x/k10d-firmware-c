/* @k10d imgp_b_set_stride1_104582f2 @ 0x104582f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Image-processor engine B: set stride 0x40060110 (16-byte aligned).
 * summary:
 *   Writes the lower 12 bits of param_2 into MMIO register 0x40060110, which sits in the
 *   same 0x40060100 control block as the verified imgp_b_set_stride0 (0x4006010c),
 *   imgp_b_set_addr0/1, and imgp_b_set_mode. The mask 0x1ff0 enforces 16-byte alignment,
 *   matching the stride semantics of the neighboring stride0 setter. No callees; single
 *   MMIO store.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_b_set_stride1_104582f2(uint32_t param_1,ushort param_2)

{
  _DAT_40060110 = param_2 & 0x1ff0;
  return;
}

/* @k10d clear_bit1_of_kernel_flag @ 0x1000d3d0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Clears bit 1 of a 32-bit word at DAT_6a003774+0x4c.
 * summary:
 *   Performs a read-modify-write on the global at DAT_6a003774+0x4c, masking out bit 1
 *   (0x2). No callees are invoked. The role of DAT_6a003774 is not determinable from the
 *   pseudocode alone, though the module context suggests it is a kernel-service routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_bit1_of_kernel_flag(void)

{
  *(uint *)(_DAT_6a003774 + 0x4c) = *(uint *)(_DAT_6a003774 + 0x4c) & 0xffffffef;
  return;
}

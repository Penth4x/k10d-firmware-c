/* @k10d read_bits_8_11_from_40030402 @ 0x104525e4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns bits 8-11 of the 32-bit value at 0x40030402.
 * summary:
 *   Reads the global at 0x40030402, masks with 0xbc00 (bits 8,9,10,11), and right-shifts by
 *   8 to return those four bits as a 0-15 value. No callees are invoked. The role of the
 *   0x40030402 global is not established by the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int read_bits_8_11_from_40030402(uint32_t param_x0)

{
  return (int)(_DAT_40030402 & 0xbc00) >> 8;
}

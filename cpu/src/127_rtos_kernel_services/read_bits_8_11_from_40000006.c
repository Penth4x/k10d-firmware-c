/* @k10d read_bits_8_11_from_40000006 @ 0x10452464
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns bits 8-11 of the 32-bit value at 0x40000006.
 * summary:
 *   Reads the 32-bit word at 0x40000006, masks out bits 8 through 11 (0xfc00), and right-
 *   shifts by 8 to return the 4-bit field as an integer. No callees are invoked. The role
 *   of the 0x40000006 global is not established by the pseudocode or the brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int read_bits_8_11_from_40000006(uint32_t param_x0)

{
  return (int)(_DAT_40000006 & 0xfc00) >> 8;
}

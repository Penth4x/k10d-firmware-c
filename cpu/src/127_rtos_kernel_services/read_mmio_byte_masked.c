/* @k10d read_mmio_byte_masked @ 0x104524c4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a byte from MMIO address 0x40000006 and returns it masked with 0xfc.
 * summary:
 *   The function performs a single memory read from the global DAT_40000006 (address
 *   0x40000006) and applies a bitwise AND with 0xfc to isolate bits 2-5. It returns the
 *   resulting 16-bit value. No kernel calls or other functions are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_byte_masked(uint32_t param_x0)

{
  return _DAT_40000006 & 0xfc;
}

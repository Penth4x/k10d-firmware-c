/* @k10d init_dma_buffer_pointers @ 0x104394fc
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed initialize_dma_buffer_pointers)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes four fixed 32-bit values to global variables at 0x518, 0x51c, 0x520, and 0x530.
 * summary:
 *   The function sets four global variables to specific hexadecimal constants: 0x20000000,
 *   0x1fc0000, 0x1f000000, and 0x73200000. These values appear to be memory addresses or
 *   configuration parameters, but their specific role (e.g., DMA buffers, memory regions)
 *   cannot be confirmed from the pseudocode alone as there are no callees or context
 *   linking them to a specific subsystem. The function returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_dma_buffer_pointers(void)

{
                    /* Purpose: Initialize DMA buffer pointers. Sets up large memory-mapped regions
                       (0x20000000, 0x1fc0000, 0x1f000000, 0x73200000).\nReturns: void. */
  _DAT_00000518 = 0x20000000;
  _DAT_0000051c = 0x1fc0000;
  _DAT_00000520 = 0x1f000000;
  _DAT_00000530 = 0x73200000;
  return;
}

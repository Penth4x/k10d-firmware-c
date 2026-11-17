/* @k10d get_or_init_sram_block_1044b676 @ 0x1044b676
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns a fixed SDRAM address, initializing it once via two helper calls if a flag is
 *   unset.
 * summary:
 *   Checks the global flag iRam8002efe8; if zero, sets it to 1 and calls
 *   alloc_one_byte_if_null_1044b6a8 with the target address 0x8002efe4 and
 *   prepend_to_singly_linked_list with 0x8000fdf8. Always returns the constant SDRAM
 *   address 0x8002efe4. The callees are unnamed, so the specific initialization behavior is
 *   unknown, but the pattern is a lazy one-time setup returning a static buffer pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_block_1044b676(void)

{
  if (iRam8002efe8 == 0) {
    iRam8002efe8 = 1;
    alloc_one_byte_if_null_1044b6a8(0x8002efe4/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x8000fdf8/*SDRAM*/);
  }
  return 0x8002efe4/*SDRAM*/;
}

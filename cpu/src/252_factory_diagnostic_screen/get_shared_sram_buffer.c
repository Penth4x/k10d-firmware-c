/* @k10d get_shared_sram_buffer @ 0x104e480c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a fixed SDRAM buffer, initializing it once on first call.
 * summary:
 *   Checks the global flag iRam80059f48; if zero, sets it to 1 and calls two initialization
 *   functions with SDRAM addresses 0x80059ec4 and 0x80010bd0. Always returns the pointer
 *   0x80059ec4. The pattern suggests a lazy-initialization accessor for a shared data
 *   structure or buffer located in SDRAM.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_shared_sram_buffer(void)

{
  if (iRam80059f48 == 0) {
    iRam80059f48 = 1;
    allocate_and_init_0x84_struct((void *)0x80059ec4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010bd0/*SDRAM*/);
  }
  return 0x80059ec4/*SDRAM*/;
}

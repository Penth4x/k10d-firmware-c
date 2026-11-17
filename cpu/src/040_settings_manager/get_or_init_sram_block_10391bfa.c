/* @k10d get_or_init_sram_block_10391bfa @ 0x10391bfa
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a SDRAM block, initializing it once via two unknown callees if a
 *   flag is unset.
 * summary:
 *   Checks the flag at 0x80019880; if zero, sets it to 1 and calls
 *   alloc_or_zero_small_buffer and prepend_to_singly_linked_list with SDRAM addresses.
 *   Returns the pointer 0x80019878. The specific subsystem or data structure is not
 *   identifiable from the provided pseudocode or unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_block_10391bfa(void)

{
  if (_DAT_80019880/*SDRAM*/ == 0) {
    _DAT_80019880/*SDRAM*/ = 1;
    alloc_or_zero_small_buffer((void *)0x80019878/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800044f0/*SDRAM*/);
  }
  return 0x80019878/*SDRAM*/;
}

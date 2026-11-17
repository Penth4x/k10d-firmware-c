/* @k10d get_or_init_ram_block @ 0x104b5254
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a RAM block at 0x800492a0, initializing it once via two helper
 *   calls.
 * summary:
 *   Checks the flag at 0x800492a8; if zero, sets it to 1 and calls allocate_two_word_struct
 *   with the block address and prepend_to_singly_linked_list with 0x80010728. Always
 *   returns the address 0x800492a0. The callees are unnamed, so the specific subsystem role
 *   is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_ram_block(void)

{
  if (iRam800492a8 == 0) {
    iRam800492a8 = 1;
    allocate_two_word_struct((void *)0x800492a0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010728/*SDRAM*/);
  }
  return 0x800492a0/*SDRAM*/;
}

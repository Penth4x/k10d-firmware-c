/* @k10d get_or_init_ram_buffer_104b590a @ 0x104b590a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Returns a fixed SDRAM address, initializing it once via two unknown callees on first
 *   call.
 * summary:
 *   Checks the global iRam80049570; if zero, sets it to 1 and calls
 *   allocate_and_init_0x21c_struct with the return address 0x80049354 and
 *   prepend_to_singly_linked_list with 0x80010750. Always returns 0x80049354. The callees
 *   are unnamed, so the specific subsystem role is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_ram_buffer_104b590a(void)

{
  if (iRam80049570 == 0) {
    iRam80049570 = 1;
    allocate_and_init_0x21c_struct((void*)0x80049354/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x80010750/*SDRAM*/);
  }
  return 0x80049354/*SDRAM*/;
}

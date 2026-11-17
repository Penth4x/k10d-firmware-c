/* @k10d get_or_init_sram_buffer_104b55a6 @ 0x104b55a6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Returns a fixed SDRAM pointer, initializing it once via two unknown callees on first
 *   call.
 * summary:
 *   Checks the global iRam80049350; if zero, sets it to 1 and calls
 *   allocate_and_init_struct_104b5828(0x800492ac) and
 *   prepend_to_singly_linked_list(0x8001073c). Always returns the constant SDRAM address
 *   0x800492ac. The two callees are unnamed, so the specific subsystem role of the buffer
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_buffer_104b55a6(void)

{
  if (iRam80049350 == 0) {
    iRam80049350 = 1;
    allocate_and_init_struct_104b5828((void *)0x800492ac/*SDRAM*/,__frv_reg_unset(5),__frv_reg_unset(6),(void *)__frv_reg_unset(7));
    prepend_to_singly_linked_list((void *)0x8001073c/*SDRAM*/);
  }
  return 0x800492ac/*SDRAM*/;
}

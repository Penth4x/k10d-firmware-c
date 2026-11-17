/* @k10d get_or_init_sram_buffer_104af136 @ 0x104af136
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a fixed SDRAM buffer, initializing it once on first call.
 * summary:
 *   Checks the flag at 0x800491f8; if zero, sets it to 1 and calls two unnamed initializers
 *   (alloc_and_zero_small_struct_104af32c and prepend_to_singly_linked_list) with SDRAM
 *   addresses. Always returns the constant pointer 0x800491e4. The callees' roles are
 *   unknown, so the specific subsystem (e.g., image pipeline, event queue) cannot be
 *   determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_buffer_104af136(void)

{
  if (iRam800491f8 == 0) {
    iRam800491f8 = 1;
    alloc_and_zero_small_struct_104af32c((void *)0x800491e4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8001069c/*SDRAM*/);
  }
  return 0x800491e4/*SDRAM*/;
}

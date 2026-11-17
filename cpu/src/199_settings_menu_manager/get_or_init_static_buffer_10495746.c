/* @k10d get_or_init_static_buffer_10495746 @ 0x10495746
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a static buffer, initializing it once on first call.
 * summary:
 *   Checks the flag at 0x80048fb0; if zero, sets it to 1 and calls two unnamed initializers
 *   (allocate_and_init_28_byte_object and prepend_to_singly_linked_list) with fixed SDRAM
 *   addresses. Always returns the address 0x80048f94. The pattern is a lazy one-time
 *   initialization of a shared data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_static_buffer_10495746(void)

{
  if (_DAT_80048fb0/*SDRAM*/ == 0) {
    _DAT_80048fb0/*SDRAM*/ = 1;
    allocate_and_init_28_byte_object((void *)0x80048f94/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010508/*SDRAM*/);
  }
  return 0x80048f94/*SDRAM*/;
}

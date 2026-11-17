/* @k10d get_or_init_sram_buffer_1052c5b8 @ 0x1052c5b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 288_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_buffer_1052c5b8(void)

{
  if (_DAT_8005a8f0/*SDRAM*/ == 0) {
    _DAT_8005a8f0/*SDRAM*/ = 1;
    initialize_object_with_pointers((void *)0x8005a844/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8001368c/*SDRAM*/);
  }
  return 0x8005a844/*SDRAM*/;
}

/* @k10d get_or_init_sram_buffer_1049c57c @ 0x1049c57c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_buffer_1049c57c(void)

{
  if (_DAT_8004900c/*SDRAM*/ == 0) {
    _DAT_8004900c/*SDRAM*/ = 1;
    alloc_one_byte_if_null_1049c618(0x80049008/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010574/*SDRAM*/);
  }
  return 0x80049008/*SDRAM*/;
}

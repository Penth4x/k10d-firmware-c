/* @k10d get_or_init_sram_block_104b0a5e @ 0x104b0a5e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_block_104b0a5e(void)

{
  if (iRam80049230 == 0) {
    iRam80049230 = 1;
    init_36_byte_struct((void*)0x8004920c/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x800106c4/*SDRAM*/);
  }
  return 0x8004920c/*SDRAM*/;
}

/* @k10d get_or_init_sram_block_1049c644 @ 0x1049c644
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_block_1049c644(void)

{
  if (_DAT_80049014/*SDRAM*/ == 0) {
    _DAT_80049014/*SDRAM*/ = 1;
    alloc_one_byte_if_null_1049caf0(0x80049010/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010588/*SDRAM*/);
  }
  return 0x80049010/*SDRAM*/;
}

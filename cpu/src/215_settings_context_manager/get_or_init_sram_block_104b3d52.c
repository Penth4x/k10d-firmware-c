/* @k10d get_or_init_sram_block_104b3d52 @ 0x104b3d52
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_block_104b3d52(void)

{
  if (iRam80049288 == 0) {
    iRam80049288 = 1;
    alloc_one_byte_if_null_104b3e68(0x80049284/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800106ec/*SDRAM*/);
  }
  return 0x80049284/*SDRAM*/;
}

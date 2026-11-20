/* @k10d get_or_init_sram_block_10409fec @ 0x10409fec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_block_10409fec(void)

{
  if (iRam8001ced4 == 0) {
    iRam8001ced4 = 1;
    alloc_one_byte_if_null_1040a026(0x8001ced0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fb34/*SDRAM*/);
  }
  return 0x8001ced0/*SDRAM*/;
}

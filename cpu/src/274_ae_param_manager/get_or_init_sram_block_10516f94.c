/* @k10d get_or_init_sram_block_10516f94 @ 0x10516f94
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_block_10516f94(void)

{
  if (iRam8005a130 == 0) {
    iRam8005a130 = 1;
    alloc_one_byte_if_null_10516fc6(0x8005a12c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80013358/*SDRAM*/);
  }
  return 0x8005a12c/*SDRAM*/;
}

/* @k10d get_or_init_sram_block_10446e84 @ 0x10446e84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_block_10446e84(void)

{
  if (iRam8002efd4 == 0) {
    iRam8002efd4 = 1;
    alloc_one_byte_if_null_10446eb6(0x8002efd0/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x8000fde4/*SDRAM*/);
  }
  return 0x8002efd0/*SDRAM*/;
}

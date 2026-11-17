/* @k10d get_or_init_sram_buffer_10478858 @ 0x10478858
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_buffer_10478858(void)

{
  if (iRam800487d8 == 0) {
    iRam800487d8 = 1;
    alloc_one_byte_if_null_10478a3c(0x800487d4/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x8000ff60/*SDRAM*/);
  }
  return 0x800487d4/*SDRAM*/;
}

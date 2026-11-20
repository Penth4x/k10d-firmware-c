/* @k10d get_or_init_ram_buffer_104aba0c @ 0x104aba0c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 210_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_ram_buffer_104aba0c(void)

{
  if (iRam8004919c == 0) {
    iRam8004919c = 1;
    alloc_and_zero_struct_104abf8c((void *)0x80049170/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8001063c/*SDRAM*/);
  }
  return 0x80049170/*SDRAM*/;
}

/* @k10d get_or_init_sram_object_10483206 @ 0x10483206
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_10483206(void)

{
  if (iRam80048878 == 0) {
    iRam80048878 = 1;
    cls_105ab808_new((void *)0x80048870/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010068/*SDRAM*/);
  }
  return 0x80048870/*SDRAM*/;
}

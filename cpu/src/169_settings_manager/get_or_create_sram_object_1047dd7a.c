/* @k10d get_or_create_sram_object_1047dd7a @ 0x1047dd7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 169_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_sram_object_1047dd7a(void)

{
  if (iRam80048830 == 0) {
    iRam80048830 = 1;
    cls_105aae0c_new((void *)0x80048814/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010000/*SDRAM*/);
  }
  return 0x80048814/*SDRAM*/;
}

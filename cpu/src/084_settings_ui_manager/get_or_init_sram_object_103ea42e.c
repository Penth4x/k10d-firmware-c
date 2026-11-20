/* @k10d get_or_init_sram_object_103ea42e @ 0x103ea42e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_103ea42e(void)

{
  if (iRam8001c718 == 0) {
    iRam8001c718 = 1;
    cls_10597840_new((cls_10597840 *)0x8001c6f4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fa24/*SDRAM*/);
  }
  return 0x8001c6f4/*SDRAM*/;
}

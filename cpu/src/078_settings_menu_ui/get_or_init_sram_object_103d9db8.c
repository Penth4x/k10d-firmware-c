/* @k10d get_or_init_sram_object_103d9db8 @ 0x103d9db8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_object_103d9db8(void)

{
  if (_DAT_8001c2c4/*SDRAM*/ == 0) {
    _DAT_8001c2c4/*SDRAM*/ = 1;
    cls_105965fc_new((uint32_t *)0x8001c2a0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f81c/*SDRAM*/);
  }
  return 0x8001c2a0/*SDRAM*/;
}

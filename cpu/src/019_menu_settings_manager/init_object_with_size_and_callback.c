/* @k10d init_object_with_size_and_callback @ 0x1036c2d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_object_with_size_and_callback(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 0xc) = 0x200000;
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x200000);
  init_object_with_three_fields_104c4be6(_DAT_8000439c/*SDRAM*/,param_1,param_2);
  return;
}

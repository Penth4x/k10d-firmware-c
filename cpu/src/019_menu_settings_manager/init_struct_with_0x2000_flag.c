/* @k10d init_struct_with_0x2000_flag @ 0x1036bed2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_struct_with_0x2000_flag(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 0xc) = 0x2000;
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x2000);
  init_object_with_flag_and_byte_104c4948(_DAT_8000439c/*SDRAM*/,param_1,param_2);
  return;
}

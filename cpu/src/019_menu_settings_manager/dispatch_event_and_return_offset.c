/* @k10d dispatch_event_and_return_offset @ 0x1036bbc8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_event_and_return_offset(void *param_1,void *param_2,uint32_t param_3)

{
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x80);
  init_object_with_two_ids_104c4728(_DAT_8000439c/*SDRAM*/,(int)param_1,param_2,param_3);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x80,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x80);
  return *(uint32_t *)((int)param_1 + 8);
}

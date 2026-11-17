/* @k10d process_event_and_return_field_1036bb6e @ 0x1036bb6e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_event_and_return_field_1036bb6e(void *param_1,uint32_t param_2)

{
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x40);
  init_object_with_three_params_104c46f8(_DAT_8000439c/*SDRAM*/,(int)param_1,param_2);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x40,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x40);
  return *(uint32_t *)((int)param_1 + 8);
}

/* @k10d dispatch_event_and_return_field @ 0x1036b9ac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sends an event to a queue at 0x80018088, calls a handler with param_1/param_2, and
 *   returns the 4th word of param_1.
 * summary:
 *   The function calls eventflag_clr_flg twice with the address 0x80018088 and value 2,
 *   likely to lock or signal a shared resource. It invokes
 *   init_object_with_three_fields_104c4608 with a global pointer, param_1, and param_2,
 *   then calls eventflag_wai_flg with the same address and a constant pointer. Finally, it
 *   returns the value stored at offset 8 of the object pointed to by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_event_and_return_field(void *param_1,uint32_t param_2)

{
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,2);
  init_object_with_three_fields_104c4608(_DAT_8000439c/*SDRAM*/,(int)param_1,param_2);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,2,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,2);
  return *(uint32_t *)((int)param_1 + 8);
}

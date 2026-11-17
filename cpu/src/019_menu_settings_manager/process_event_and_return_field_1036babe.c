/* @k10d process_event_and_return_field_1036babe @ 0x1036babe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a buffer, processes an event via a helper, finalizes the buffer, and
 *   returns a field from the input structure.
 * summary:
 *   The function calls eventflag_clr_flg to initialize a 0x10-byte buffer at 0x80018088. It
 *   then calls init_object_with_three_fields_104c469e with the buffer address, param_1, and
 *   param_2, likely to process or store event data. Finally, it calls eventflag_wai_flg to
 *   finalize the buffer state and returns the value at offset 8 of the structure pointed to
 *   by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_event_and_return_field_1036babe(void *param_1,uint32_t param_2)

{
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x10);
  init_object_with_three_fields_104c469e(_DAT_8000439c/*SDRAM*/,param_1,param_2);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x10,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x10);
  return *(uint32_t *)((int)param_1 + 8);
}

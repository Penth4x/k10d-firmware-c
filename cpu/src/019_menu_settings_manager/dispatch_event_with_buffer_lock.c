/* @k10d dispatch_event_with_buffer_lock @ 0x1036bce6
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Locks a buffer at 0x80018088, dispatches an event via
 *   init_object_with_two_pointers_104c47c2, and returns a field from the event object.
 * summary:
 *   The function calls eventflag_clr_flg with a fixed SDRAM address (0x80018088) and size
 *   (0x400) twice, likely to acquire and release a lock or semaphore. It calls
 *   init_object_with_two_pointers_104c47c2 with a global pointer and the three input
 *   parameters, which appears to be the core dispatch or processing step. It also calls
 *   eventflag_wai_flg with the buffer address, size, null, and a constant, possibly for
 *   initialization or cleanup. Finally, it returns the value at offset 8 of the first
 *   parameter object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_event_with_buffer_lock(void *param_1,uint32_t param_2,void *param_3)

{
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x400));
  init_object_with_two_pointers_104c47c2(_DAT_8000439c/*SDRAM*/,(int)param_1,param_2,param_3);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x400,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x400));
  return *(uint32_t *)((int)param_1 + 8);
}

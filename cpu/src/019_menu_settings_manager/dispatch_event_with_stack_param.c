/* @k10d dispatch_event_with_stack_param @ 0x1036bf4e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a handler with a stack-allocated parameter and returns a field from the input
 *   object.
 * summary:
 *   The function calls eventflag_clr_flg with a fixed SDRAM address (0x80018088) and size
 *   (0x8000), likely for memory management or locking. It stores param_4 into a local stack
 *   buffer and passes it, along with param_1, param_2, and param_3, to
 *   init_object_with_params_104c49b8. It then calls eventflag_wai_flg with the same SDRAM
 *   address and a constant pointer, followed by another call to eventflag_clr_flg. Finally,
 *   it returns the value at offset 8 of the object pointed to by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_event_with_stack_param(void *param_1,uint16_t param_2,uint8_t param_3,uint8_t param_4)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStack_20 [4];
  
  puVar1 = auStack_20;
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x8000);
  puVar1[3] = param_4;
  init_object_with_params_104c49b8(_DAT_8000439c/*SDRAM*/,(int)param_1,param_2,param_3,puVar1[3]);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x8000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x8000);
  return *(uint32_t *)((int)param_1 + 8);
}

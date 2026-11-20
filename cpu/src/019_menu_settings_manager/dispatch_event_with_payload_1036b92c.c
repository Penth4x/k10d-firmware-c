/* @k10d dispatch_event_with_payload_1036b92c @ 0x1036b92c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a 24-byte payload from parameters and dispatches it via a helper function.
 * summary:
 *   The function copies parameters 4-9 into a local 24-byte buffer. It calls
 *   eventflag_clr_flg with a fixed SDRAM address (0x80018088) and value 1, likely acquiring
 *   a lock or setting a flag. It then calls init_object_with_params_104c45a0, passing the
 *   original parameters 1-3 and the constructed buffer contents. Finally, it calls
 *   eventflag_wai_flg and eventflag_clr_flg again, and returns the value at offset 8 of
 *   param_1. The pattern suggests a standard event or message dispatch mechanism with
 *   synchronization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t
dispatch_event_with_payload_1036b92c(void *param_1,uint32_t param_2,void *param_3,uint32_t param_4,uint32_t param_5,
            uint32_t param_6,uint32_t param_7,uint32_t param_8,uint8_t param_9)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t local_34 [24];
  
  puVar1 = (uint32_t *)local_34;
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(1));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1[2] = param_6;
  puVar1[3] = param_7;
  puVar1[4] = param_8;
  *(uint8_t *)((int)puVar1 + 0x17) = param_9;
  init_object_with_params_104c45a0(_DAT_8000439c/*SDRAM*/,param_1,param_2,(int)param_3,*puVar1,puVar1[1],puVar1[2],puVar1[3],
               puVar1[4],*(uint8_t *)((int)puVar1 + 0x17));
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,1,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(1));
  return *(uint32_t *)((int)param_1 + 8);
}

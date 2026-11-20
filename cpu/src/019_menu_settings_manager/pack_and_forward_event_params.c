/* @k10d pack_and_forward_event_params @ 0x1036c174
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Packs seven parameters into a local struct and forwards them to a handler, bracketed by
 *   memory operations on a fixed SDRAM address.
 * summary:
 *   The function copies param_4 through param_10 into a local 28-byte buffer. It calls
 *   eventflag_clr_flg with a fixed SDRAM address (0x80018088) and size (0x40000) before and
 *   after calling init_object_with_param_block, which receives the original first three
 *   parameters plus the packed buffer contents. It also calls eventflag_wai_flg with the
 *   same SDRAM address and a constant pointer. Finally, it returns the value at offset 8 of
 *   the first parameter object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t
pack_and_forward_event_params(int param_1,uint32_t param_2,void *param_3,uint32_t param_4,int param_5,int param_6
            ,int param_7,int param_8,int param_9,uint8_t param_10)

{
  uintptr_t sp;
  int *piVar1;
  uint8_t local_38 [28];
  
  piVar1 = (int *)local_38;
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x40000));
  *piVar1 = param_4;
  piVar1[1] = param_5;
  piVar1[2] = param_6;
  piVar1[3] = param_7;
  piVar1[4] = param_8;
  piVar1[5] = param_9;
  *(uint8_t *)((int)piVar1 + 0x1b) = param_10;
  init_object_with_param_block(_DAT_8000439c/*SDRAM*/,param_1,param_2,param_3,*piVar1,piVar1[1],piVar1[2],piVar1[3],piVar1[4]
               ,piVar1[5],*(uint8_t *)((int)piVar1 + 0x1b));
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x40000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x40000));
  return *(uint32_t *)(param_1 + 8);
}

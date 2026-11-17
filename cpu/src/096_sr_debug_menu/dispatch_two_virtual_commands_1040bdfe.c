/* @k10d dispatch_two_virtual_commands_1040bdfe @ 0x1040bdfe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * purpose:
 *   Builds a command struct and invokes virtual method slot 1 twice with different
 *   parameters.
 * summary:
 *   The function constructs a local structure on the stack, initializing fields with
 *   constants (0x8080, 0xa00003) and derived values from param_2. It calls helper functions
 *   eventflag_clr_flg, reg_framework_send, and eventflag_wai_flg in a specific sequence to
 *   prepare the state. Finally, it calls virtual_destructor_free_10428222 (virtual slot 1
 *   of cls_1059e4d0) twice, passing the stack structure and the integer 2 as arguments,
 *   with param_4 and param_5 used in the respective calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_two_virtual_commands_1040bdfe(int param_1,int param_2,uint16_t param_3,uint32_t param_4,uint32_t param_5)

{
  uint16_t uVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  int iStack_30;
  uint32_t *puStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  void *puStack_20;
  uint32_t uStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint32_t uStack_c;
  
  puStack_20 = &DAT_1059e4d0/*ROM*/;
  uVar1 = (uint16_t)((int)(((uint)(param_2 >> 1) >> 0x1e) + param_2) >> 2);
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_24 = 0;
  uStack_e = 0x8080;
  uStack_28 = 0xa00003;
  uStack_c = 0;
  puVar2 = (uint32_t *)(param_1 + 0x14);
  iStack_30 = param_1;
  puStack_2c = &uStack_1c;
  uStack_1c = param_4;
  uStack_18 = uVar1;
  uStack_16 = param_3;
  uStack_14 = uVar1;
  eventflag_clr_flg(puVar2,8);
  reg_framework_send(*(int *)(param_1 + 0xc) + 8);
  eventflag_wai_flg(puVar2,8,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,8);
  uStack_1c = param_5;
  uStack_e = 0x8080;
  uStack_28 = 0xa00003;
  uStack_24 = 0;
  iStack_30 = param_1;
  puStack_2c = &uStack_1c;
  uStack_18 = uVar1;
  uStack_16 = param_3;
  uStack_14 = uVar1;
  eventflag_clr_flg(puVar2,8);
  reg_framework_send(*(int *)(param_1 + 0xc) + 8);
  eventflag_wai_flg(puVar2,8,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,8);
  virtual_destructor_free_10428222(&iStack_30,2);
  return;
}

/* @k10d submit_three_imgp_commands @ 0x104fd118
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Submits three sequential command structures to the image processor via a client object.
 * summary:
 *   The function constructs three local command structures from the input parameters,
 *   halving certain fields based on a mode flag in the first parameter. For each command,
 *   it locks a mutex at offset 0x2c of the client object, calls
 *   imgp_b_program_and_start_104fe680 to submit the command, calls eventflag_wai_flg to
 *   wait for a response, and finally unlocks the mutex and calls imgp_a_stop_and_reset.
 *   This pattern suggests a synchronous request-response cycle with the image processor
 *   hardware.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void submit_three_imgp_commands(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint32_t *puVar3;
  uintptr_t sp;
  int iStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint32_t uStack_c;
  
  piVar2 = (int *)*param_2;
  iStack_1c = piVar2[1];
  uStack_18 = *(uint16_t *)(piVar2 + 4);
  uStack_16 = *(uint16_t *)((int)piVar2 + 0x12);
  uStack_14 = *(uint16_t *)(piVar2 + 5);
  uStack_12 = *(uint16_t *)((int)piVar2 + 0x16);
  uStack_10 = *(uint16_t *)(piVar2 + 6);
  uStack_e = *(uint16_t *)(param_2 + 1);
  puVar3 = (uint32_t *)(param_1 + 0x2c);
  eventflag_clr_flg(puVar3,1);
  iVar1 = param_1 + 4;
  imgp_b_program_and_start_104fe680(*(uint32_t *)(param_1 + 0x24),(int *)iVar1,&iStack_1c);
  eventflag_wai_flg(puVar3,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar3,1);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  iStack_1c = piVar2[2];
  uStack_18 = (uint16_t)((int)(uint)*(ushort *)(piVar2 + 4) >> 1);
  if (*piVar2 == 1) {
    uStack_16 = *(uint16_t *)((int)piVar2 + 0x12);
  }
  else {
    uStack_16 = (uint16_t)((int)(uint)*(ushort *)((int)piVar2 + 0x12) >> 1);
  }
  uStack_14 = (uint16_t)((int)(uint)*(ushort *)(piVar2 + 5) >> 1);
  uStack_12 = (uint16_t)((int)(uint)*(ushort *)((int)piVar2 + 0x16) >> 1);
  if (*piVar2 == 1) {
    uStack_10 = *(uint16_t *)(piVar2 + 6);
  }
  else {
    uStack_10 = (uint16_t)((int)(uint)*(ushort *)(piVar2 + 6) >> 1);
  }
  uStack_e = *(uint16_t *)((int)param_2 + 6);
  eventflag_clr_flg(puVar3,1);
  imgp_b_program_and_start_104fe680(*(uint32_t *)(param_1 + 0x24),(int *)iVar1,&iStack_1c);
  eventflag_wai_flg(puVar3,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar3,1);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  iStack_1c = piVar2[3];
  uStack_e = *(uint16_t *)(param_2 + 2);
  eventflag_clr_flg(puVar3,1);
  imgp_b_program_and_start_104fe680(*(uint32_t *)(param_1 + 0x24),(int *)iVar1,&iStack_1c);
  eventflag_wai_flg(puVar3,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar3,1);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  return;
}

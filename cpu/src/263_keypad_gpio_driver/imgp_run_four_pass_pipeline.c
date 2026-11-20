/* @k10d imgp_run_four_pass_pipeline @ 0x104fdea6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Executes a four-stage image-processor pipeline by programming and starting the engine
 *   with varying source/destination offsets.
 * summary:
 *   The function builds a configuration struct on the stack using parameters from param_2
 *   and iterates four times. In each iteration, it calls eventflag_clr_flg,
 *   imgp_c_program_and_start, eventflag_wai_flg, and imgp_c_start_and_ack, adjusting the
 *   source and destination pointers (_cfg_4c.iStack_3c, _cfg_4c.iStack_34) to process different segments of
 *   the image data. The final iteration uses different stride/size values (0x40 vs 0x80)
 *   suggesting a final composite or scaling step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_run_four_pass_pipeline(int param_1,int param_2)

{
  struct {
    uint32_t uStack_4c;
    uint16_t uStack_48;
    uint16_t uStack_46;
    uint16_t uStack_44;
    uint16_t uStack_42;
    uint16_t uStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    uint32_t uStack_30;
    uint16_t uStack_2c;
    uint16_t uStack_2a;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint16_t uStack_24;
    uint16_t uStack_22;
    uint16_t uStack_20;
    uint16_t uStack_1e;
    uint16_t uStack_1c;
    uint16_t uStack_1a;
    uint16_t uStack_18;
    uint16_t uStack_16;
    uint8_t uStack_14;
    uint8_t uStack_13;
    uint16_t * puStack_10;
    uint32_t uStack_c;
  } _cfg_4c;
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t *puVar5;
  uintptr_t sp;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint16_t uStack_4e;
  uVar1 = *(uint32_t *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x14);
  uVar3 = *(uint32_t *)(param_2 + 0x18);
  _cfg_4c.iStack_38 = 0;
  _cfg_4c.uStack_2c = 0x80;
  _cfg_4c.uStack_2a = 0x80;
  _cfg_4c.uStack_28 = 0x80;
  _cfg_4c.uStack_26 = 0x80;
  _cfg_4c.uStack_24 = 0x80;
  _cfg_4c.uStack_22 = 0x80;
  _cfg_4c.uStack_20 = 0x80;
  _cfg_4c.uStack_1e = 0x80;
  _cfg_4c.uStack_1c = 0x80;
  _cfg_4c.uStack_1a = 0x80;
  _cfg_4c.uStack_14 = 0;
  _cfg_4c.uStack_13 = 1;
  _cfg_4c.uStack_4c = 8;
  _cfg_4c.uStack_48 = *(uint16_t *)(param_2 + 4);
  _cfg_4c.uStack_46 = *(uint16_t *)(param_2 + 6);
  _cfg_4c.uStack_44 = *(uint16_t *)(param_2 + 8);
  _cfg_4c.uStack_42 = *(uint16_t *)(param_2 + 10);
  _cfg_4c.uStack_40 = *(uint16_t *)(param_2 + 0xc);
  _cfg_4c.uStack_30 = *(uint32_t *)(param_2 + 0x1c);
  _cfg_4c.uStack_18 = 0xfff;
  _cfg_4c.uStack_16 = 0xfff;
  uStack_54 = 8;
  uStack_52 = 7;
  uStack_50 = 7;
  uStack_4e = 7;
  _cfg_4c.puStack_10 = &uStack_54;
  puVar5 = (uint32_t *)(param_1 + 0x2c);
  _cfg_4c.iStack_3c = uVar1;
  _cfg_4c.iStack_34 = iVar2 + 0x40;
  eventflag_clr_flg(puVar5,1);
  iVar4 = param_1 + 4;
  imgp_c_program_and_start_104fe976((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(iVar4),(int *)(&_cfg_4c.uStack_4c));
  eventflag_wai_flg(puVar5,1,&_cfg_4c.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar5,1);
  imgp_c_start_and_ack(*(uint32_t *)(param_1 + 0x24));
  _cfg_4c.iStack_38 = 0;
  _cfg_4c.iStack_3c = iVar2 + 0x40;
  _cfg_4c.iStack_34 = iVar2 + 0x20;
  eventflag_clr_flg(puVar5,1);
  imgp_c_program_and_start_104fe976((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(iVar4),(int *)(&_cfg_4c.uStack_4c));
  eventflag_wai_flg(puVar5,1,&_cfg_4c.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar5,1);
  imgp_c_start_and_ack(*(uint32_t *)(param_1 + 0x24));
  _cfg_4c.iStack_38 = 0;
  _cfg_4c.iStack_3c = iVar2 + 0x20;
  _cfg_4c.iStack_34 = iVar2;
  eventflag_clr_flg(puVar5,1);
  imgp_c_program_and_start_104fe976((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(iVar4),(int *)(&_cfg_4c.uStack_4c));
  eventflag_wai_flg(puVar5,1,&_cfg_4c.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar5,1);
  imgp_c_start_and_ack(*(uint32_t *)(param_1 + 0x24));
  _cfg_4c.uStack_4c = 1;
  _cfg_4c.uStack_48 = *(uint16_t *)(param_2 + 4);
  _cfg_4c.uStack_46 = *(uint16_t *)(param_2 + 6);
  _cfg_4c.uStack_44 = *(uint16_t *)(param_2 + 8);
  _cfg_4c.uStack_42 = *(uint16_t *)(param_2 + 10);
  _cfg_4c.uStack_40 = *(uint16_t *)(param_2 + 0xc);
  _cfg_4c.uStack_30 = *(uint32_t *)(param_2 + 0x1c);
  _cfg_4c.uStack_2c = 0x40;
  _cfg_4c.uStack_2a = 0x40;
  _cfg_4c.uStack_28 = 0x40;
  _cfg_4c.uStack_26 = 0x40;
  _cfg_4c.uStack_24 = 0x40;
  _cfg_4c.uStack_22 = 0x40;
  _cfg_4c.uStack_20 = 0x40;
  _cfg_4c.uStack_1e = 0x40;
  _cfg_4c.uStack_1c = 0x40;
  _cfg_4c.uStack_1a = 0x40;
  _cfg_4c.uStack_18 = 0xfff;
  _cfg_4c.iStack_3c = uVar1;
  _cfg_4c.iStack_38 = iVar2;
  _cfg_4c.iStack_34 = uVar3;
  _cfg_4c.uStack_16 = _cfg_4c.uStack_18;
  eventflag_clr_flg(puVar5,1);
  imgp_c_program_and_start_104fe976((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(iVar4),(int *)(&_cfg_4c.uStack_4c));
  eventflag_wai_flg(puVar5,1,&_cfg_4c.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar5,1);
  imgp_c_start_and_ack(*(uint32_t *)(param_1 + 0x24));
  return;
}

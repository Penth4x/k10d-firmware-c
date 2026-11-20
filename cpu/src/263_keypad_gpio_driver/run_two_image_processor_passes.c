/* @k10d run_two_image_processor_passes @ 0x104fdcf4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_two_image_processor_passes(int param_1,int param_2)

{
  struct {
    uint32_t uStack_4c;
    uint16_t uStack_48;
    uint16_t uStack_46;
    uint16_t uStack_44;
    uint16_t uStack_42;
    uint16_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
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
  uint32_t *puVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint16_t uStack_4e;
  uVar2 = *(uint32_t *)(param_2 + 0x10);
  uVar3 = *(uint32_t *)(param_2 + 0x14);
  uVar4 = *(uint32_t *)(param_2 + 0x18);
  _cfg_4c.uStack_14 = 0;
  _cfg_4c.uStack_38 = 0;
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
  _cfg_4c.uStack_13 = 1;
  _cfg_4c.uStack_4c = 8;
  _cfg_4c.uStack_48 = *(uint16_t *)(param_2 + 4);
  _cfg_4c.uStack_46 = *(uint16_t *)(param_2 + 6);
  _cfg_4c.uStack_44 = *(uint16_t *)(param_2 + 8);
  _cfg_4c.uStack_42 = *(uint16_t *)(param_2 + 10);
  _cfg_4c.uStack_40 = *(uint16_t *)(param_2 + 0xc);
  _cfg_4c.uStack_30 = *(uint32_t *)(param_2 + 0x1c);
  _cfg_4c.uStack_18 = 0x10;
  _cfg_4c.uStack_16 = 0x10;
  uStack_54 = 0x20;
  uStack_52 = 8;
  uStack_50 = 8;
  uStack_4e = 0;
  _cfg_4c.puStack_10 = &uStack_54;
  puVar1 = (uint32_t *)(param_1 + 0x2c);
  _cfg_4c.uStack_3c = uVar2;
  _cfg_4c.uStack_34 = uVar3;
  eventflag_clr_flg(puVar1,1);
  imgp_c_program_and_start_104fe976((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(int *)(&_cfg_4c.uStack_4c));
  eventflag_wai_flg(puVar1,1,&_cfg_4c.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  imgp_c_start_and_ack(*(uint32_t *)(param_1 + 0x24));
  _cfg_4c.uStack_4c = 1;
  _cfg_4c.uStack_48 = *(uint16_t *)(param_2 + 4);
  _cfg_4c.uStack_46 = *(uint16_t *)(param_2 + 6);
  _cfg_4c.uStack_44 = *(uint16_t *)(param_2 + 8);
  _cfg_4c.uStack_42 = *(uint16_t *)(param_2 + 10);
  _cfg_4c.uStack_40 = *(uint16_t *)(param_2 + 0xc);
  _cfg_4c.uStack_30 = *(uint32_t *)(param_2 + 0x1c);
  _cfg_4c.uStack_2c = 0x80;
  _cfg_4c.uStack_2a = 0x80;
  _cfg_4c.uStack_28 = 0;
  _cfg_4c.uStack_26 = 0x80;
  _cfg_4c.uStack_24 = 0x80;
  _cfg_4c.uStack_22 = 0;
  _cfg_4c.uStack_20 = 0x80;
  _cfg_4c.uStack_1e = 0;
  _cfg_4c.uStack_1c = 0;
  _cfg_4c.uStack_1a = 0x80;
  _cfg_4c.uStack_18 = 0xfff;
  _cfg_4c.uStack_16 = 0xfff;
  _cfg_4c.uStack_3c = uVar2;
  _cfg_4c.uStack_38 = uVar3;
  _cfg_4c.uStack_34 = uVar4;
  eventflag_clr_flg(puVar1,1);
  imgp_c_program_and_start_104fe976((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(int *)(&_cfg_4c.uStack_4c));
  eventflag_wai_flg(puVar1,1,&_cfg_4c.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  imgp_c_start_and_ack(*(uint32_t *)(param_1 + 0x24));
  return;
}

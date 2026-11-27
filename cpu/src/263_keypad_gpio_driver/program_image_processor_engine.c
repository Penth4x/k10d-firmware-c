/* @k10d program_image_processor_engine @ 0x104fd5b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Configures and starts the image processor engine with parameters derived from a source
 *   struct.
 * summary:
 *   The function builds a configuration block on the stack by copying fields from param_2,
 *   adjusting a size field based on a threshold check (0x1001). It then calls
 *   eventflag_clr_flg to prepare the engine context, imgp_c_program_and_start to initiate
 *   the processing, and eventflag_wai_flg to finalize or wait. In the larger size case, it
 *   performs a second pass with adjusted offset calculations, suggesting a multi-stage or
 *   split processing operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void program_image_processor_engine(int param_1,uint32_t *param_2)

{
  struct {
    uint32_t uStack_50;
    uint16_t uStack_4c;
    uint16_t uStack_4a;
    uint16_t uStack_48;
    uint16_t uStack_46;
    uint16_t uStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    uint32_t uStack_34;
    uint16_t uStack_30;
    uint16_t uStack_2e;
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
    uint8_t uStack_18;
    uint8_t uStack_17;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_50;
  uint32_t *puVar1;
  uintptr_t sp;
  _cfg_50.uStack_50 = 1;
  switch(*param_2) {
  case 0:
    _cfg_50.uStack_50 = 0;
    break;
  case 1:
    _cfg_50.uStack_50 = 1;
    break;
  case 2:
    _cfg_50.uStack_50 = 2;
    break;
  case 3:
    _cfg_50.uStack_50 = 3;
    break;
  case 4:
    _cfg_50.uStack_50 = 4;
    break;
  case 5:
    _cfg_50.uStack_50 = 5;
    break;
  case 6:
    _cfg_50.uStack_50 = 6;
    break;
  case 7:
    _cfg_50.uStack_50 = 7;
    break;
  case 8:
    _cfg_50.uStack_50 = 8;
    break;
  case 9:
    _cfg_50.uStack_50 = 9;
  }
  _cfg_50.uStack_4c = *(uint16_t *)(param_2 + 1);
  if (*(ushort *)((int)param_2 + 6) < 0x1001) {
    _cfg_50.uStack_4a = *(uint16_t *)((int)param_2 + 6);
    _cfg_50.uStack_48 = *(uint16_t *)(param_2 + 2);
    _cfg_50.uStack_46 = *(uint16_t *)((int)param_2 + 10);
    _cfg_50.uStack_44 = *(uint16_t *)(param_2 + 3);
    _cfg_50.iStack_40 = param_2[4];
    _cfg_50.iStack_3c = param_2[5];
    _cfg_50.iStack_38 = param_2[6];
    _cfg_50.uStack_34 = param_2[7];
    _cfg_50.uStack_30 = *(uint16_t *)(param_2 + 8);
    _cfg_50.uStack_2e = *(uint16_t *)((int)param_2 + 0x22);
    _cfg_50.uStack_2c = *(uint16_t *)(param_2 + 9);
    _cfg_50.uStack_2a = *(uint16_t *)((int)param_2 + 0x26);
    _cfg_50.uStack_28 = *(uint16_t *)(param_2 + 10);
    _cfg_50.uStack_26 = *(uint16_t *)((int)param_2 + 0x2a);
    _cfg_50.uStack_24 = *(uint16_t *)(param_2 + 0xb);
    _cfg_50.uStack_22 = *(uint16_t *)((int)param_2 + 0x2e);
    _cfg_50.uStack_20 = *(uint16_t *)(param_2 + 0xc);
    _cfg_50.uStack_1e = *(uint16_t *)((int)param_2 + 0x32);
    _cfg_50.uStack_1c = *(uint16_t *)(param_2 + 0xd);
    _cfg_50.uStack_1a = *(uint16_t *)((int)param_2 + 0x36);
    _cfg_50.uStack_18 = *(uint8_t *)(param_2 + 0xe);
    _cfg_50.uStack_17 = *(uint8_t *)((int)param_2 + 0x39);
    _cfg_50.uStack_14 = param_2[0xf];
    eventflag_clr_flg((uint32_t *)(param_1 + 0x2c), (uint32_t)param_2);
    imgp_c_program_and_start_104fe976((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(int *)(&_cfg_50.uStack_50));
    eventflag_wai_flg((uint32_t *)(param_1 + 0x2c),1,&_cfg_50.uStack_10,_DAT_105a2af0/*ROM*/);
  }
  else {
    _cfg_50.uStack_4a = (uint16_t)((int)(uint)*(ushort *)((int)param_2 + 6) >> 1);
    _cfg_50.uStack_48 = *(uint16_t *)(param_2 + 2);
    _cfg_50.uStack_46 = *(uint16_t *)((int)param_2 + 10);
    _cfg_50.uStack_44 = *(uint16_t *)(param_2 + 3);
    _cfg_50.iStack_40 = param_2[4];
    _cfg_50.iStack_3c = param_2[5];
    _cfg_50.iStack_38 = param_2[6];
    _cfg_50.uStack_34 = param_2[7];
    _cfg_50.uStack_30 = *(uint16_t *)(param_2 + 8);
    _cfg_50.uStack_2e = *(uint16_t *)((int)param_2 + 0x22);
    _cfg_50.uStack_2c = *(uint16_t *)(param_2 + 9);
    _cfg_50.uStack_2a = *(uint16_t *)((int)param_2 + 0x26);
    _cfg_50.uStack_28 = *(uint16_t *)(param_2 + 10);
    _cfg_50.uStack_26 = *(uint16_t *)((int)param_2 + 0x2a);
    _cfg_50.uStack_24 = *(uint16_t *)(param_2 + 0xb);
    _cfg_50.uStack_22 = *(uint16_t *)((int)param_2 + 0x2e);
    _cfg_50.uStack_20 = *(uint16_t *)(param_2 + 0xc);
    _cfg_50.uStack_1e = *(uint16_t *)((int)param_2 + 0x32);
    _cfg_50.uStack_1c = *(uint16_t *)(param_2 + 0xd);
    _cfg_50.uStack_1a = *(uint16_t *)((int)param_2 + 0x36);
    _cfg_50.uStack_18 = *(uint8_t *)(param_2 + 0xe);
    _cfg_50.uStack_17 = *(uint8_t *)((int)param_2 + 0x39);
    _cfg_50.uStack_14 = param_2[0xf];
    puVar1 = (uint32_t *)(param_1 + 0x2c);
    eventflag_clr_flg(puVar1,1);
    imgp_c_program_and_start_104fe976((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(int *)(&_cfg_50.uStack_50));
    eventflag_wai_flg(puVar1,1,&_cfg_50.uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar1,1);
    imgp_c_start_and_ack(*(uint32_t *)(param_1 + 0x24));
    _cfg_50.uStack_4c = *(uint16_t *)(param_2 + 1);
    _cfg_50.uStack_4a = (uint16_t)((int)(uint)*(ushort *)((int)param_2 + 6) >> 1);
    _cfg_50.uStack_48 = *(uint16_t *)(param_2 + 2);
    _cfg_50.uStack_46 = *(uint16_t *)((int)param_2 + 10);
    _cfg_50.uStack_44 = *(uint16_t *)(param_2 + 3);
    _cfg_50.iStack_40 = param_2[4] +
                (((int)((uint)*(ushort *)(param_2 + 2) * (uint)*(ushort *)((int)param_2 + 6)) / 2) *
                3) / 2;
    _cfg_50.iStack_3c = param_2[5] +
                (((int)((uint)*(ushort *)((int)param_2 + 10) * (uint)*(ushort *)((int)param_2 + 6))
                 / 2) * 3) / 2;
    _cfg_50.iStack_38 = param_2[6] +
                (((int)((uint)*(ushort *)(param_2 + 3) * (uint)*(ushort *)((int)param_2 + 6)) / 2) *
                3) / 2;
    _cfg_50.uStack_34 = param_2[7];
    _cfg_50.uStack_30 = *(uint16_t *)(param_2 + 8);
    _cfg_50.uStack_2e = *(uint16_t *)((int)param_2 + 0x22);
    _cfg_50.uStack_2c = *(uint16_t *)(param_2 + 9);
    _cfg_50.uStack_2a = *(uint16_t *)((int)param_2 + 0x26);
    _cfg_50.uStack_28 = *(uint16_t *)(param_2 + 10);
    _cfg_50.uStack_26 = *(uint16_t *)((int)param_2 + 0x2a);
    _cfg_50.uStack_24 = *(uint16_t *)(param_2 + 0xb);
    _cfg_50.uStack_22 = *(uint16_t *)((int)param_2 + 0x2e);
    _cfg_50.uStack_20 = *(uint16_t *)(param_2 + 0xc);
    _cfg_50.uStack_1e = *(uint16_t *)((int)param_2 + 0x32);
    _cfg_50.uStack_1c = *(uint16_t *)(param_2 + 0xd);
    _cfg_50.uStack_1a = *(uint16_t *)((int)param_2 + 0x36);
    _cfg_50.uStack_18 = *(uint8_t *)(param_2 + 0xe);
    _cfg_50.uStack_17 = *(uint8_t *)((int)param_2 + 0x39);
    _cfg_50.uStack_14 = param_2[0xf];
    eventflag_clr_flg(puVar1,1);
    imgp_c_program_and_start_104fe976((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(int *)(&_cfg_50.uStack_50));
    eventflag_wai_flg(puVar1,1,&_cfg_50.uStack_c,_DAT_105a2af0/*ROM*/);
  }
  eventflag_clr_flg((uint32_t *)(param_1 + 0x2c),(uint)(1));
  imgp_c_start_and_ack(*(uint32_t *)(param_1 + 0x24));
  return;
}

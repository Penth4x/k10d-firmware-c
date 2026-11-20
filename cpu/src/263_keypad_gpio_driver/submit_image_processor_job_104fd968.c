/* @k10d submit_image_processor_job_104fd968 @ 0x104fd968
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Copies a 0x60-byte job descriptor into a stack buffer and submits it to the image
 *   processor via a queue of helper calls.
 * summary:
 *   The function validates the first word of param_2 against a switch covering values
 *   0-0x11, storing the result in _cfg_74.uStack_74. It then copies the remaining fields of the
 *   param_2 structure into the stack buffer, interleaving 16-bit and 32-bit fields.
 *   Finally, it calls eventflag_clr_flg, build_and_send_structured_packet,
 *   eventflag_wai_flg, and configure_timer_channel_state, passing the stack buffer and
 *   object fields at param_1+0x28 and param_1+0x2c, which likely enqueues the job for the
 *   image processor block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void submit_image_processor_job_104fd968(int param_1,uint32_t *param_2)

{
  struct {
    uint32_t uStack_74;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_68;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint16_t uStack_50;
    uint16_t uStack_4e;
    uint16_t uStack_4c;
    uint16_t uStack_4a;
    uint16_t uStack_48;
    uint16_t uStack_46;
    uint16_t uStack_44;
    uint16_t uStack_42;
    uint16_t uStack_40;
    uint16_t uStack_3e;
    uint16_t uStack_3c;
    uint16_t uStack_3a;
    uint16_t uStack_38;
    uint16_t uStack_36;
    uint16_t uStack_34;
    uint16_t uStack_32;
    uint16_t uStack_30;
    uint16_t uStack_2e;
    uint32_t uStack_2c;
    uint8_t uStack_28;
    uint8_t uStack_27;
    uint8_t uStack_26;
    uint8_t uStack_25;
    uint16_t uStack_24;
    uint16_t uStack_22;
    uint16_t uStack_20;
    uint16_t uStack_1e;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_74;
  uint32_t *puVar1;
  uintptr_t sp;
  _cfg_74.uStack_74 = 0;
  switch(*param_2) {
  case 0:
    _cfg_74.uStack_74 = 0;
    break;
  case 1:
    _cfg_74.uStack_74 = 1;
    break;
  case 2:
    _cfg_74.uStack_74 = 2;
    break;
  case 3:
    _cfg_74.uStack_74 = 3;
    break;
  case 4:
    _cfg_74.uStack_74 = 4;
    break;
  case 5:
    _cfg_74.uStack_74 = 5;
    break;
  case 6:
    _cfg_74.uStack_74 = 6;
    break;
  case 7:
    _cfg_74.uStack_74 = 7;
    break;
  case 8:
    _cfg_74.uStack_74 = 8;
    break;
  case 9:
    _cfg_74.uStack_74 = 9;
    break;
  case 10:
    _cfg_74.uStack_74 = 10;
    break;
  case 0xb:
    _cfg_74.uStack_74 = 0xb;
    break;
  case 0xc:
    _cfg_74.uStack_74 = 0xc;
    break;
  case 0xd:
    _cfg_74.uStack_74 = 0xd;
    break;
  case 0xe:
    _cfg_74.uStack_74 = 0xe;
    break;
  case 0xf:
    _cfg_74.uStack_74 = 0xf;
    break;
  case 0x10:
    _cfg_74.uStack_74 = 0x10;
    break;
  case 0x11:
    _cfg_74.uStack_74 = 0x11;
  }
  _cfg_74.uStack_70 = param_2[1];
  _cfg_74.uStack_6c = param_2[2];
  _cfg_74.uStack_68 = param_2[3];
  _cfg_74.uStack_64 = param_2[4];
  _cfg_74.uStack_60 = param_2[5];
  _cfg_74.uStack_5c = param_2[6];
  _cfg_74.uStack_58 = param_2[7];
  _cfg_74.uStack_54 = param_2[8];
  _cfg_74.uStack_50 = *(uint16_t *)(param_2 + 9);
  _cfg_74.uStack_4e = *(uint16_t *)((int)param_2 + 0x26);
  _cfg_74.uStack_4c = *(uint16_t *)(param_2 + 10);
  _cfg_74.uStack_4a = *(uint16_t *)((int)param_2 + 0x2a);
  _cfg_74.uStack_48 = *(uint16_t *)(param_2 + 0xb);
  _cfg_74.uStack_46 = *(uint16_t *)((int)param_2 + 0x2e);
  _cfg_74.uStack_44 = *(uint16_t *)(param_2 + 0xc);
  _cfg_74.uStack_42 = *(uint16_t *)((int)param_2 + 0x32);
  _cfg_74.uStack_40 = *(uint16_t *)(param_2 + 0xd);
  _cfg_74.uStack_3e = *(uint16_t *)((int)param_2 + 0x36);
  _cfg_74.uStack_34 = *(uint16_t *)(param_2 + 0x10);
  _cfg_74.uStack_32 = *(uint16_t *)((int)param_2 + 0x42);
  _cfg_74.uStack_30 = *(uint16_t *)(param_2 + 0x11);
  _cfg_74.uStack_2e = *(uint16_t *)((int)param_2 + 0x46);
  _cfg_74.uStack_2c = param_2[0x12];
  _cfg_74.uStack_3c = *(uint16_t *)(param_2 + 0xe);
  _cfg_74.uStack_3a = *(uint16_t *)((int)param_2 + 0x3a);
  _cfg_74.uStack_38 = *(uint16_t *)(param_2 + 0xf);
  _cfg_74.uStack_36 = *(uint16_t *)((int)param_2 + 0x3e);
  _cfg_74.uStack_28 = *(uint8_t *)(param_2 + 0x13);
  _cfg_74.uStack_27 = *(uint8_t *)((int)param_2 + 0x4d);
  _cfg_74.uStack_26 = *(uint8_t *)((int)param_2 + 0x4e);
  _cfg_74.uStack_25 = *(uint8_t *)((int)param_2 + 0x4f);
  _cfg_74.uStack_24 = *(uint16_t *)(param_2 + 0x14);
  _cfg_74.uStack_22 = *(uint16_t *)((int)param_2 + 0x52);
  _cfg_74.uStack_20 = *(uint16_t *)(param_2 + 0x15);
  _cfg_74.uStack_1e = *(uint16_t *)((int)param_2 + 0x56);
  _cfg_74.uStack_1c = param_2[0x16];
  _cfg_74.uStack_18 = param_2[0x17];
  _cfg_74.uStack_14 = param_2[0x18];
  _cfg_74.uStack_10 = param_2[0x19];
  puVar1 = (uint32_t *)(param_1 + 0x2c);
  eventflag_clr_flg(puVar1,1);
  build_and_send_structured_packet((int)(*(uint32_t *)(param_1 + 0x28)),(int)(1),(void *)(param_1 + 4),(uint32_t *)(&_cfg_74.uStack_74));
  eventflag_wai_flg(puVar1,1,&_cfg_74.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
  return;
}

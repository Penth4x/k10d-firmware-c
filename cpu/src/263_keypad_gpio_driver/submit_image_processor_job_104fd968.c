/* @k10d submit_image_processor_job_104fd968 @ 0x104fd968
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Copies a 0x60-byte job descriptor into a stack buffer and submits it to the image
 *   processor via a queue of helper calls.
 * summary:
 *   The function validates the first word of param_2 against a switch covering values
 *   0-0x11, storing the result in uStack_74. It then copies the remaining fields of the
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
  uint32_t *puVar1;
  uintptr_t sp;
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
  
  uStack_74 = 0;
  switch(*param_2) {
  case 0:
    uStack_74 = 0;
    break;
  case 1:
    uStack_74 = 1;
    break;
  case 2:
    uStack_74 = 2;
    break;
  case 3:
    uStack_74 = 3;
    break;
  case 4:
    uStack_74 = 4;
    break;
  case 5:
    uStack_74 = 5;
    break;
  case 6:
    uStack_74 = 6;
    break;
  case 7:
    uStack_74 = 7;
    break;
  case 8:
    uStack_74 = 8;
    break;
  case 9:
    uStack_74 = 9;
    break;
  case 10:
    uStack_74 = 10;
    break;
  case 0xb:
    uStack_74 = 0xb;
    break;
  case 0xc:
    uStack_74 = 0xc;
    break;
  case 0xd:
    uStack_74 = 0xd;
    break;
  case 0xe:
    uStack_74 = 0xe;
    break;
  case 0xf:
    uStack_74 = 0xf;
    break;
  case 0x10:
    uStack_74 = 0x10;
    break;
  case 0x11:
    uStack_74 = 0x11;
  }
  uStack_70 = param_2[1];
  uStack_6c = param_2[2];
  uStack_68 = param_2[3];
  uStack_64 = param_2[4];
  uStack_60 = param_2[5];
  uStack_5c = param_2[6];
  uStack_58 = param_2[7];
  uStack_54 = param_2[8];
  uStack_50 = *(uint16_t *)(param_2 + 9);
  uStack_4e = *(uint16_t *)((int)param_2 + 0x26);
  uStack_4c = *(uint16_t *)(param_2 + 10);
  uStack_4a = *(uint16_t *)((int)param_2 + 0x2a);
  uStack_48 = *(uint16_t *)(param_2 + 0xb);
  uStack_46 = *(uint16_t *)((int)param_2 + 0x2e);
  uStack_44 = *(uint16_t *)(param_2 + 0xc);
  uStack_42 = *(uint16_t *)((int)param_2 + 0x32);
  uStack_40 = *(uint16_t *)(param_2 + 0xd);
  uStack_3e = *(uint16_t *)((int)param_2 + 0x36);
  uStack_34 = *(uint16_t *)(param_2 + 0x10);
  uStack_32 = *(uint16_t *)((int)param_2 + 0x42);
  uStack_30 = *(uint16_t *)(param_2 + 0x11);
  uStack_2e = *(uint16_t *)((int)param_2 + 0x46);
  uStack_2c = param_2[0x12];
  uStack_3c = *(uint16_t *)(param_2 + 0xe);
  uStack_3a = *(uint16_t *)((int)param_2 + 0x3a);
  uStack_38 = *(uint16_t *)(param_2 + 0xf);
  uStack_36 = *(uint16_t *)((int)param_2 + 0x3e);
  uStack_28 = *(uint8_t *)(param_2 + 0x13);
  uStack_27 = *(uint8_t *)((int)param_2 + 0x4d);
  uStack_26 = *(uint8_t *)((int)param_2 + 0x4e);
  uStack_25 = *(uint8_t *)((int)param_2 + 0x4f);
  uStack_24 = *(uint16_t *)(param_2 + 0x14);
  uStack_22 = *(uint16_t *)((int)param_2 + 0x52);
  uStack_20 = *(uint16_t *)(param_2 + 0x15);
  uStack_1e = *(uint16_t *)((int)param_2 + 0x56);
  uStack_1c = param_2[0x16];
  uStack_18 = param_2[0x17];
  uStack_14 = param_2[0x18];
  uStack_10 = param_2[0x19];
  puVar1 = (uint32_t *)(param_1 + 0x2c);
  eventflag_clr_flg(puVar1,1);
  build_and_send_structured_packet((int)(*(uint32_t *)(param_1 + 0x28)),(int)(1),(void *)(param_1 + 4),(uint32_t *)(&uStack_74));
  eventflag_wai_flg(puVar1,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
  return;
}

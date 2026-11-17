/* @k10d build_and_send_event_packet_104f87d0 @ 0x104f87d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Constructs a stack-based event structure from input parameters and dispatches it via a
 *   queue or message interface.
 * summary:
 *   The function initializes a large stack buffer, populating it with fields copied from
 *   param_2 (including 32-bit and 16-bit values) and the pointer param_3. It then calls
 *   eventflag_clr_flg, build_and_send_structured_packet, eventflag_wai_flg, and
 *   configure_timer_channel_state, passing the constructed buffer and a pointer derived
 *   from param_1 (offset 0x38 and 0x28). The pattern suggests preparing a message or event
 *   packet and submitting it to a system handler or queue.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_and_send_event_packet_104f87d0(int param_1,int param_2,void *param_3)

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
  void *pvStack_2c;
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
  
  uStack_64 = 0;
  uStack_54 = 0;
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  uStack_25 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_74 = 0;
  uStack_70 = *(uint32_t *)(param_2 + 4);
  uStack_6c = *(uint32_t *)(param_2 + 8);
  uStack_68 = *(uint32_t *)(param_2 + 0xc);
  uStack_60 = *(uint32_t *)(param_2 + 4);
  uStack_5c = *(uint32_t *)(param_2 + 8);
  uStack_58 = *(uint32_t *)(param_2 + 0xc);
  uStack_50 = *(uint16_t *)(param_2 + 0x14);
  uStack_4e = (uint16_t)((int)(uint)*(ushort *)(param_2 + 0x14) >> 1);
  uStack_4c = *(uint16_t *)(param_2 + 0x14);
  puVar1 = (uint32_t *)(param_1 + 0x38);
  uStack_4a = (uint16_t)((int)(uint)*(ushort *)(param_2 + 0x14) >> 1);
  uStack_48 = *(uint16_t *)(param_2 + 0x10);
  uStack_46 = *(uint16_t *)(param_2 + 0x12);
  uStack_44 = *(uint16_t *)(param_2 + 0x16);
  uStack_42 = *(uint16_t *)(param_2 + 0x18);
  uStack_40 = 0;
  uStack_3e = 0;
  uStack_34 = 0;
  uStack_32 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_3c = 0;
  uStack_3a = 0;
  uStack_38 = 0;
  uStack_36 = 0;
  uStack_c = 0;
  pvStack_2c = param_3;
  eventflag_clr_flg(puVar1,1);
  build_and_send_structured_packet(*(uint32_t *)(param_1 + 0x28),1,(void *)(param_1 + 4),&uStack_74);
  eventflag_wai_flg(puVar1,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
  return;
}

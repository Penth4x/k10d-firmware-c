/* @k10d init_event_struct_and_dispatch_104f8314 @ 0x104f8314
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Initializes a struct at param_1+0x38 with provided parameters and triggers a sequence
 *   of handler calls.
 * summary:
 *   The function writes a local stack buffer containing the input parameters (param_2
 *   through param_12) into the struct pointed to by param_1+0x38. It then calls
 *   eventflag_clr_flg, build_and_send_param_struct_10505a10, eventflag_wai_flg, and
 *   configure_timer_channel_state in sequence, passing the struct pointer and the value at
 *   param_1+0x28. The specific roles of these callees are unknown, but the pattern suggests
 *   event creation or state initialization followed by notification or processing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_event_struct_and_dispatch_104f8314(int param_1,uint32_t param_2,void *param_3,uint16_t param_4,uint16_t param_5
                 ,uint32_t param_6,uint16_t param_7,uint16_t param_8,uint16_t param_9,
                 uint16_t param_10,char param_11,uint16_t param_12)

{
  uint32_t *puVar1;
  uintptr_t sp;
  uint uStack_44;
  uint32_t uStack_40;
  uint16_t uStack_3c;
  void *pvStack_38;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint32_t uStack_24;
  uint16_t uStack_20;
  uint16_t uStack_1e;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint8_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_44 = (uint)(param_11 != '\0');
  uStack_30 = param_5;
  uStack_1e = param_7;
  uStack_1c = param_8;
  puVar1 = (uint32_t *)(param_1 + 0x38);
  uStack_1a = param_9;
  uStack_18 = param_10;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  uStack_28 = 0;
  uStack_24 = param_6;
  uStack_16 = param_12;
  uStack_20 = 0;
  uStack_c = 0;
  uStack_40 = param_2;
  uStack_3c = param_4;
  pvStack_38 = param_3;
  uStack_34 = param_4;
  uStack_32 = param_4;
  eventflag_clr_flg(puVar1,1);
  build_and_send_param_struct_10505a10(*(uint32_t *)(param_1 + 0x28),0,(void *)(param_1 + 4),&uStack_44);
  eventflag_wai_flg(puVar1,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),0);
  return;
}

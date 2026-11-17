/* @k10d init_event_struct_and_dispatch_104f827a @ 0x104f827a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_event_struct_and_dispatch_104f827a(int param_1,void *param_2,void *param_3,uint16_t param_4,uint16_t param_5,
                 uint32_t param_6)

{
  uint32_t *puVar1;
  uintptr_t sp;
  uint32_t uStack_38;
  void *pvStack_34;
  uint16_t uStack_30;
  void *pvStack_2c;
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  uint16_t uStack_1e;
  uint16_t uStack_1c;
  uint32_t uStack_18;
  uint16_t uStack_14;
  uint8_t uStack_12;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_12 = 0;
  uStack_38 = 0;
  uStack_24 = param_5;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  puVar1 = (uint32_t *)(param_1 + 0x38);
  uStack_18 = param_6;
  uStack_c = 0;
  pvStack_34 = param_2;
  uStack_30 = param_4;
  pvStack_2c = param_3;
  uStack_28 = param_4;
  uStack_26 = param_4;
  eventflag_clr_flg(puVar1,1);
  build_and_send_param_struct_1050584a(*(uint32_t *)(param_1 + 0x28),1,(void *)(param_1 + 4),&uStack_38);
  eventflag_wai_flg(puVar1,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
  return;
}

/* @k10d copy_struct_and_dispatch_event @ 0x104f8f64
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Copies a 0x34-byte structure from param_2 to the stack and passes it to a series of
 *   handler functions.
 * summary:
 *   The function copies 26 fields from the structure pointed to by param_2 into local stack
 *   variables. It then calls four helper functions (eventflag_clr_flg,
 *   build_and_send_param_struct_10505a10, eventflag_wai_flg, configure_timer_channel_state)
 *   using pointers derived from param_1 and the copied data. The specific roles of the
 *   helpers and the data structure are not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_struct_and_dispatch_event(int param_1,int *param_2)

{
  struct {
    uint uStack_44;
    int iStack_40;
    uint16_t uStack_3c;
    int iStack_38;
    uint16_t uStack_34;
    uint16_t uStack_32;
    uint16_t uStack_30;
    uint16_t uStack_2e;
    uint16_t uStack_2c;
    uint16_t uStack_2a;
    uint16_t uStack_28;
    int iStack_24;
    uint16_t uStack_20;
    uint16_t uStack_1e;
    uint16_t uStack_1c;
    uint16_t uStack_1a;
    uint16_t uStack_18;
    uint16_t uStack_16;
    uint8_t uStack_14;
    int iStack_10;
    uint32_t uStack_c;
  } _cfg_44;
  uint32_t *puVar1;
  uintptr_t sp;
  _cfg_44.uStack_44 = (uint)(*param_2 != 0);
  _cfg_44.iStack_40 = param_2[1];
  _cfg_44.uStack_3c = *(uint16_t *)(param_2 + 2);
  _cfg_44.iStack_38 = param_2[3];
  _cfg_44.uStack_34 = *(uint16_t *)(param_2 + 4);
  _cfg_44.uStack_32 = *(uint16_t *)((int)param_2 + 0x12);
  _cfg_44.uStack_30 = *(uint16_t *)(param_2 + 5);
  _cfg_44.uStack_2e = *(uint16_t *)((int)param_2 + 0x16);
  _cfg_44.uStack_2c = *(uint16_t *)(param_2 + 6);
  _cfg_44.uStack_2a = *(uint16_t *)((int)param_2 + 0x1a);
  _cfg_44.uStack_28 = *(uint16_t *)(param_2 + 7);
  _cfg_44.iStack_24 = param_2[8];
  _cfg_44.uStack_1e = *(uint16_t *)((int)param_2 + 0x26);
  _cfg_44.uStack_1c = *(uint16_t *)(param_2 + 10);
  _cfg_44.uStack_1a = *(uint16_t *)((int)param_2 + 0x2a);
  _cfg_44.uStack_18 = *(uint16_t *)(param_2 + 0xb);
  _cfg_44.uStack_16 = *(uint16_t *)((int)param_2 + 0x2e);
  _cfg_44.uStack_20 = *(uint16_t *)(param_2 + 9);
  _cfg_44.uStack_14 = *(uint8_t *)(param_2 + 0xc);
  _cfg_44.iStack_10 = param_2[0xd];
  puVar1 = (uint32_t *)(param_1 + 0x2c);
  eventflag_clr_flg(puVar1,1);
  build_and_send_param_struct_10505a10((int)(*(uint32_t *)(param_1 + 0x24)),(int)(1),(void *)(param_1 + 4),(int *)(&_cfg_44.uStack_44));
  eventflag_wai_flg(puVar1,1,&_cfg_44.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x24),1);
  return;
}

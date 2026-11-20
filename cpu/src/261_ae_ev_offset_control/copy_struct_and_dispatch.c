/* @k10d copy_struct_and_dispatch @ 0x104f8e72
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Copies a 28-byte structure from param_2 to the stack and passes it to a series of
 *   helper functions.
 * summary:
 *   The function copies 14 fields (28 bytes) from the pointer param_2 into local stack
 *   variables. It then calls eventflag_clr_flg, build_and_send_param_struct_1050584a
 *   (passing the stack data), eventflag_wai_flg, and configure_timer_channel_state. The
 *   specific roles of these callees are unknown, but the pattern suggests a data transfer
 *   or event dispatch operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_struct_and_dispatch(int param_1,int *param_2)

{
  struct {
    uint uStack_38;
    int iStack_34;
    uint16_t uStack_30;
    int iStack_2c;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint16_t uStack_24;
    uint16_t uStack_22;
    uint16_t uStack_20;
    uint16_t uStack_1e;
    uint16_t uStack_1c;
    int iStack_18;
    uint16_t uStack_14;
    uint8_t uStack_12;
    int iStack_10;
    uint32_t uStack_c;
  } _cfg_38;
  uint32_t *puVar1;
  uintptr_t sp;
  _cfg_38.uStack_38 = (uint)(*param_2 != 0);
  _cfg_38.iStack_34 = param_2[1];
  _cfg_38.uStack_30 = *(uint16_t *)(param_2 + 2);
  _cfg_38.iStack_2c = param_2[3];
  _cfg_38.uStack_28 = *(uint16_t *)(param_2 + 4);
  _cfg_38.uStack_26 = *(uint16_t *)((int)param_2 + 0x12);
  _cfg_38.uStack_24 = *(uint16_t *)(param_2 + 5);
  _cfg_38.uStack_22 = *(uint16_t *)((int)param_2 + 0x16);
  _cfg_38.uStack_20 = *(uint16_t *)(param_2 + 6);
  _cfg_38.uStack_1e = *(uint16_t *)((int)param_2 + 0x1a);
  _cfg_38.uStack_1c = *(uint16_t *)(param_2 + 7);
  _cfg_38.iStack_18 = param_2[8];
  _cfg_38.uStack_14 = *(uint16_t *)(param_2 + 9);
  _cfg_38.uStack_12 = *(uint8_t *)((int)param_2 + 0x26);
  _cfg_38.iStack_10 = param_2[10];
  puVar1 = (uint32_t *)(param_1 + 0x2c);
  eventflag_clr_flg(puVar1,1);
  build_and_send_param_struct_1050584a((int)(*(uint32_t *)(param_1 + 0x24)),(int)(1),(void *)(param_1 + 4),(int *)(&_cfg_38.uStack_38));
  eventflag_wai_flg(puVar1,1,&_cfg_38.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x24),1);
  return;
}

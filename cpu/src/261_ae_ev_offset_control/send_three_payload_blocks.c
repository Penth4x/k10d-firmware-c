/* @k10d send_three_payload_blocks @ 0x104f7f80
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Transmits three sequential data blocks via a helper routine using a shared context
 *   object.
 * summary:
 *   The function iterates through three sets of parameters (param_2/5, param_3/6,
 *   param_4/7), constructing a stack-based payload structure for each. It calls
 *   eventflag_clr_flg, imgp_c_program_and_start_104fe5ce, eventflag_wai_flg, and
 *   imgp_a_stop_and_reset in a fixed sequence for each block, passing pointers derived from
 *   param_1 (specifically offsets 0x24 and 0x38) as context. The pattern suggests a
 *   communication or command dispatch mechanism where each block is prepared and sent
 *   through the same pipeline.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void send_three_payload_blocks(int param_1,void *param_2,void *param_3,void *param_4,uint32_t param_5,
                 uint32_t param_6,uint32_t param_7,ushort param_8,uint16_t param_9)

{
  struct {
    void * pvStack_24;
    uint32_t uStack_20;
    ushort uStack_1c;
    uint16_t uStack_1a;
    ushort uStack_18;
    ushort uStack_16;
    uint16_t uStack_14;
    uint16_t uStack_12;
    uint16_t uStack_10;
    uint16_t uStack_e;
    uint32_t uStack_c;
  } _cfg_24;
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  _cfg_24.uStack_20 = param_5;
  puVar2 = (uint32_t *)(param_1 + 0x38);
  _cfg_24.uStack_14 = 0;
  _cfg_24.uStack_12 = 0;
  _cfg_24.uStack_10 = 0;
  _cfg_24.uStack_e = 0;
  _cfg_24.uStack_1c = param_8;
  _cfg_24.uStack_1a = param_9;
  _cfg_24.uStack_18 = param_8;
  _cfg_24.uStack_16 = param_8;
  _cfg_24.uStack_c = 0;
  _cfg_24.pvStack_24 = param_2;
  eventflag_clr_flg(puVar2,1);
  iVar1 = param_1 + 4;
  imgp_c_program_and_start_104fe5ce((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(iVar1),(uint32_t *)(&_cfg_24.pvStack_24));
  eventflag_wai_flg(puVar2,1,&_cfg_24.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,1);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  _cfg_24.uStack_1c = (ushort)((int)(uint)param_8 >> 1);
  _cfg_24.uStack_20 = param_6;
  _cfg_24.uStack_1a = param_9;
  _cfg_24.uStack_14 = 0;
  _cfg_24.uStack_12 = 0;
  _cfg_24.uStack_10 = 0;
  _cfg_24.uStack_e = 0;
  _cfg_24.pvStack_24 = param_3;
  _cfg_24.uStack_18 = _cfg_24.uStack_1c;
  _cfg_24.uStack_16 = _cfg_24.uStack_1c;
  eventflag_clr_flg(puVar2,1);
  imgp_c_program_and_start_104fe5ce((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(iVar1),(uint32_t *)(&_cfg_24.pvStack_24));
  eventflag_wai_flg(puVar2,1,&_cfg_24.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,1);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  _cfg_24.uStack_20 = param_7;
  _cfg_24.pvStack_24 = param_4;
  eventflag_clr_flg(puVar2,1);
  imgp_c_program_and_start_104fe5ce((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(iVar1),(uint32_t *)(&_cfg_24.pvStack_24));
  eventflag_wai_flg(puVar2,1,&_cfg_24.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,1);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  return;
}

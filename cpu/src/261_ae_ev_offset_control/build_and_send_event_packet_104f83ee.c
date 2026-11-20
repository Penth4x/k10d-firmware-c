/* @k10d build_and_send_event_packet_104f83ee @ 0x104f83ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Constructs a 0x38-byte event structure on the stack and dispatches it via a queue or
 *   message interface.
 * summary:
 *   The function initializes a local stack buffer with parameters, setting a type field (3,
 *   4, or 5) based on param_5 and param_6. It then calls eventflag_clr_flg,
 *   apply_param_struct_to_object, eventflag_wai_flg, and reset_object_three_fields, passing
 *   the stack buffer and a pointer derived from param_1. The pattern suggests preparing a
 *   message or event for an RTOS queue or IPC mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_and_send_event_packet_104f83ee(int param_1,uint32_t param_2,uint16_t param_3,uint16_t param_4,int param_5,
                 int param_6,uint32_t param_7)

{
  struct {
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint8_t uStack_2c;
    uint16_t uStack_2a;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint32_t uStack_24;
    uint16_t uStack_20;
    uint32_t uStack_1c;
    int iStack_18;
    uint32_t uStack_14;
    int iStack_10;
    uint32_t uStack_c;
  } _cfg_34;
  uint32_t *puVar1;
  uintptr_t sp;
  if (param_5 == 0) {
    _cfg_34.uStack_34 = 4;
  }
  else if (param_6 == 0) {
    _cfg_34.uStack_34 = 5;
  }
  else {
    _cfg_34.uStack_34 = 3;
  }
  _cfg_34.iStack_18 = param_6;
  puVar1 = (uint32_t *)(param_1 + 0x38);
  _cfg_34.uStack_30 = 0;
  _cfg_34.uStack_2c = 0;
  _cfg_34.uStack_14 = param_7;
  _cfg_34.iStack_10 = param_5;
  _cfg_34.uStack_c = 0;
  _cfg_34.uStack_2a = param_3;
  _cfg_34.uStack_28 = param_3;
  _cfg_34.uStack_26 = param_4;
  _cfg_34.uStack_24 = param_2;
  _cfg_34.uStack_20 = param_3;
  _cfg_34.uStack_1c = param_2;
  eventflag_clr_flg(puVar1,1);
  apply_param_struct_to_object((int)(*(uint32_t *)(param_1 + 0x2c)),(void *)(param_1 + 4),(int *)(&_cfg_34.uStack_34));
  eventflag_wai_flg(puVar1,1,&_cfg_34.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  reset_object_three_fields(*(uint32_t *)(param_1 + 0x2c));
  return;
}

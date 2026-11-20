/* @k10d register_event_handler_104f80dc @ 0x104f80dc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Registers a callback handler for an event by building a local descriptor and calling a
 *   registration routine.
 * summary:
 *   The function constructs a local structure on the stack containing the provided
 *   parameters (param_2, param_3, param_4, param_5) and zero-initialized fields. It then
 *   calls imgp_c_program_and_start_104fe5ce, passing a pointer to this local structure,
 *   likely to register it with an event system or queue associated with the object at
 *   param_1. It also interacts with an object at offset 0x38 of param_1 via
 *   eventflag_clr_flg and eventflag_wai_flg, and calls imgp_a_stop_and_reset on the object
 *   at offset 0x24, possibly to finalize or notify the registration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void register_event_handler_104f80dc(int param_1,void *param_2,uint32_t param_3,uint16_t param_4,uint16_t param_5
                 )

{
  struct {
    void * pvStack_24;
    uint32_t uStack_20;
    uint16_t uStack_1c;
    uint16_t uStack_1a;
    uint16_t uStack_18;
    uint16_t uStack_16;
    uint16_t uStack_14;
    uint16_t uStack_12;
    uint16_t uStack_10;
    uint16_t uStack_e;
    uint32_t uStack_c;
  } _cfg_24;
  uint32_t *puVar1;
  uintptr_t sp;
  puVar1 = (uint32_t *)(param_1 + 0x38);
  _cfg_24.uStack_14 = 0;
  _cfg_24.uStack_12 = 0;
  _cfg_24.uStack_10 = 0;
  _cfg_24.uStack_e = 0;
  _cfg_24.uStack_1a = param_5;
  _cfg_24.uStack_c = 0;
  _cfg_24.pvStack_24 = param_2;
  _cfg_24.uStack_20 = param_3;
  _cfg_24.uStack_1c = param_4;
  _cfg_24.uStack_18 = param_4;
  _cfg_24.uStack_16 = param_4;
  eventflag_clr_flg(puVar1,1);
  imgp_c_program_and_start_104fe5ce((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(uint32_t *)(&_cfg_24.pvStack_24));
  eventflag_wai_flg(puVar1,1,&_cfg_24.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  return;
}

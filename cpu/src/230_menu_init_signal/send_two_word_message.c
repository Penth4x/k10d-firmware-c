/* @k10d send_two_word_message @ 0x104c3644
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Builds a 2-word message on the stack and dispatches it via a virtual method.
 * summary:
 *   The function constructs a small message structure on the stack containing the arguments
 *   and a constant 0xc00002. It calls several helper functions (eventflag_clr_flg,
 *   reg_framework_send, eventflag_wai_flg) which likely perform synchronization or state
 *   updates on the object at param_1. Finally, it invokes virtual method slot 1 of the
 *   class at 0x1059e4d0 (virtual_destructor_free_10428222) with the stack-allocated
 *   message, suggesting an inter-task or inter-module communication pattern typical of
 *   ÂµITRON/REALOS message passing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t send_two_word_message(int param_1,void *param_2,uint32_t param_3)

{
  struct {
    int iStack_1c;
    void * pvStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    void * puStack_c;
  } _cfg_1c;
  uint32_t *puVar1;
  uintptr_t sp;
  _cfg_1c.puStack_c = &DAT_1059e4d0/*ROM*/;
  puVar1 = (uint32_t *)(param_1 + 0x78);
  _cfg_1c.uStack_14 = 0xc00002;
  _cfg_1c.iStack_1c = param_1;
  _cfg_1c.pvStack_18 = param_2;
  _cfg_1c.uStack_10 = param_3;
  eventflag_clr_flg(puVar1,2);
  reg_framework_send(*(int *)(param_1 + 4) + 8, &_cfg_1c.iStack_1c, 0x2);
  eventflag_wai_flg(puVar1,2,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,2);
  virtual_destructor_free_10428222(&_cfg_1c.iStack_1c,2);
  return 1;
}

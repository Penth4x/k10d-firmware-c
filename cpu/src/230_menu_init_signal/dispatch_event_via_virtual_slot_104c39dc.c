/* @k10d dispatch_event_via_virtual_slot_104c39dc @ 0x104c39dc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Builds a 3-field event descriptor on the stack and invokes virtual slot 1 of a handler
 *   object.
 * summary:
 *   The function constructs a small stack-allocated structure containing param_1, param_2,
 *   and param_3, along with a constant 0xa00002. It performs several operations on a sub-
 *   object at offset 0x78 of param_1 (likely locking or state management via
 *   eventflag_clr_flg and eventflag_wai_flg) and calls reg_framework_send on a field at
 *   offset 0x10. Finally, it calls virtual_destructor_free_10428222, which is verified to
 *   be virtual method slot 1 of class cls_1059e4d0, passing the stack structure and the
 *   value 2. The function returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_event_via_virtual_slot_104c39dc(int param_1,void *param_2,uint32_t param_3)

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
  _cfg_1c.uStack_14 = 0xa00002;
  _cfg_1c.iStack_1c = param_1;
  _cfg_1c.pvStack_18 = param_2;
  _cfg_1c.uStack_10 = param_3;
  eventflag_clr_flg(puVar1,0x20);
  reg_framework_send(*(int *)(param_1 + 0x10) + 8);
  eventflag_wai_flg(puVar1,0x20,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x20);
  virtual_destructor_free_10428222(&_cfg_1c.iStack_1c,2);
  return 1;
}

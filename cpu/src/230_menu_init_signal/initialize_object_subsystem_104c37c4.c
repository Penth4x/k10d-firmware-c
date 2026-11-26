/* @k10d initialize_object_subsystem_104c37c4 @ 0x104c37c4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Initializes an object at param_1 by setting up a sub-structure at offset 0x78 and
 *   invoking a virtual method.
 * summary:
 *   The function prepares a stack structure with param_1, param_2, and param_3, then calls
 *   eventflag_clr_flg and eventflag_wai_flg on the pointer at param_1 + 0x78 with size
 *   0x800. It also calls reg_framework_send on a value derived from param_1 + 0x10.
 *   Finally, it invokes virtual method slot 1 of the class at DAT_1059e4d0 via
 *   virtual_destructor_free_10428222. The specific subsystem (e.g., AE, AF) is not
 *   determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_object_subsystem_104c37c4(int param_1,void *param_2,uint32_t param_3)

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
  _cfg_1c.uStack_14 = 0xa00004;
  _cfg_1c.iStack_1c = param_1;
  _cfg_1c.pvStack_18 = param_2;
  _cfg_1c.uStack_10 = param_3;
  eventflag_clr_flg(puVar1,0x800);
  reg_framework_send(*(int *)(param_1 + 0x10) + 8, &_cfg_1c.iStack_1c, 0x2);
  eventflag_wai_flg(puVar1,0x800,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x800);
  virtual_destructor_free_10428222(&_cfg_1c.iStack_1c,2);
  return 1;
}

/* @k10d init_object_with_two_ids_104c3b62 @ 0x104c3b62
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Initializes an object at param_1 by calling helper functions on its sub-structures and
 *   dispatching a virtual method.
 * summary:
 *   The function sets up a local stack structure containing param_1, param_2, param_3, and
 *   a constant 0x1130001. It calls eventflag_clr_flg and eventflag_wai_flg on the pointer
 *   at param_1 + 0x78 with size 0x8000, and calls reg_framework_send on a value derived
 *   from param_1 + 0x18. Finally, it invokes virtual method slot 1 of the class at
 *   0x1059e4d0 via virtual_destructor_free_10428222 using the stack structure as the
 *   argument. Returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_object_with_two_ids_104c3b62(int param_1,void *param_2,uint32_t param_3)

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
  _cfg_1c.uStack_14 = 0x1130001;
  _cfg_1c.iStack_1c = param_1;
  _cfg_1c.pvStack_18 = param_2;
  _cfg_1c.uStack_10 = param_3;
  eventflag_clr_flg(puVar1,0x8000);
  reg_framework_send(*(int *)(param_1 + 0x18) + 8, &_cfg_1c.iStack_1c, 0x2);
  eventflag_wai_flg(puVar1,0x8000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x8000);
  virtual_destructor_free_10428222(&_cfg_1c.iStack_1c,2);
  return 1;
}

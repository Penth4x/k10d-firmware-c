/* @k10d configure_buffer_and_dispatch_event @ 0x104c38d0
 * name: model (proposed by the local model from the decompile, confidence 0.50)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Configures a buffer at offset 0x78 of a state object and dispatches a virtual event
 *   with a stack-constructed payload.
 * summary:
 *   The function accesses param_1 + 0x78 and calls eventflag_clr_flg twice with size
 *   0x2000, likely initializing or locking a buffer. It calls eventflag_wai_flg with a null
 *   pointer and a data pointer, and reg_framework_send with a value derived from param_1 +
 *   0x14. Finally, it constructs a stack structure containing the parameters and the
 *   constant 0x1100001, and invokes virtual method slot 1 of cls_1059e4d0
 *   (virtual_destructor_free_10428222) with this structure. The specific subsystem
 *   (display, sensor, etc.) is not determinable from the pseudocode or verified callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t configure_buffer_and_dispatch_event(int param_1,void *param_2,uint32_t param_3)

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
  _cfg_1c.uStack_14 = 0x1100001;
  _cfg_1c.iStack_1c = param_1;
  _cfg_1c.pvStack_18 = param_2;
  _cfg_1c.uStack_10 = param_3;
  eventflag_clr_flg(puVar1,0x2000);
  reg_framework_send(*(int *)(param_1 + 0x14) + 8);
  eventflag_wai_flg(puVar1,0x2000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x2000);
  virtual_destructor_free_10428222(&_cfg_1c.iStack_1c,2);
  return 1;
}

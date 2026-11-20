/* @k10d initialize_event_queue @ 0x104c3adc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Initializes a queue structure at offset 0x78 of the object and dispatches a virtual
 *   event.
 * summary:
 *   The function sets up a local structure with a type ID (0xa00007) and pointers to the
 *   input parameters. It calls eventflag_clr_flg and eventflag_wai_flg on the sub-object at
 *   offset 0x78 with a size of 0x4000, likely initializing a buffer or queue. Finally, it
 *   invokes virtual method slot 1 of the class via virtual_destructor_free_10428222 to
 *   signal the initialization or send a message.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_event_queue(int param_1,void *param_2,uint32_t param_3)

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
  _cfg_1c.uStack_14 = 0xa00007;
  _cfg_1c.iStack_1c = param_1;
  _cfg_1c.pvStack_18 = param_2;
  _cfg_1c.uStack_10 = param_3;
  eventflag_clr_flg(puVar1,0x4000);
  reg_framework_send(*(int *)(param_1 + 0x10) + 8);
  eventflag_wai_flg(puVar1,0x4000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x4000);
  virtual_destructor_free_10428222(&_cfg_1c.iStack_1c,2);
  return 1;
}

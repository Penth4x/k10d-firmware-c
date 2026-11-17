/* @k10d initialize_event_queue_entry_104c35c4 @ 0x104c35c4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Initializes an event queue entry structure and dispatches it via a virtual method.
 * summary:
 *   The function sets up a local structure on the stack containing the input parameters and
 *   a constant value 0xc00001. It calls several initialization routines (eventflag_clr_flg,
 *   reg_framework_send, eventflag_wai_flg) on fields of the object pointed to by param_1.
 *   Finally, it invokes virtual method slot 1 of the class associated with DAT_1059e4d0,
 *   passing the initialized structure, likely to enqueue or process the event.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_event_queue_entry_104c35c4(int param_1,void *param_2,uint32_t param_3)

{
  uint32_t *puVar1;
  uintptr_t sp;
  int iStack_1c;
  void *pvStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  void *puStack_c;
  
  puStack_c = &DAT_1059e4d0/*ROM*/;
  puVar1 = (uint32_t *)(param_1 + 0x78);
  uStack_14 = 0xc00001;
  iStack_1c = param_1;
  pvStack_18 = param_2;
  uStack_10 = param_3;
  eventflag_clr_flg(puVar1,1);
  reg_framework_send(*(int *)(param_1 + 4) + 8);
  eventflag_wai_flg(puVar1,1,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  virtual_destructor_free_10428222(&iStack_1c,2);
  return 1;
}

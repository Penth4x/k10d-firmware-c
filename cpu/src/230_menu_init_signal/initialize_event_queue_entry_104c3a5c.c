/* @k10d initialize_event_queue_entry_104c3a5c @ 0x104c3a5c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Initializes a queue entry structure at offset 0x78 and dispatches a virtual method with
 *   a stack-allocated descriptor.
 * summary:
 *   The function sets up a local descriptor on the stack containing the object pointer, a
 *   second pointer, and a third parameter. It calls eventflag_clr_flg and eventflag_wai_flg
 *   on the sub-structure at param_1 + 0x78, likely initializing or locking a queue element.
 *   Finally, it invokes virtual method slot 1 of class cls_1059e4d0
 *   (virtual_destructor_free_10428222) with the descriptor, suggesting an event or message
 *   enqueue operation. The specific camera subsystem (e.g., AF, AE) is not identifiable
 *   from the generic queue operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_event_queue_entry_104c3a5c(int param_1,void *param_2,uint32_t param_3)

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
  uStack_14 = 0xa00001;
  iStack_1c = param_1;
  pvStack_18 = param_2;
  uStack_10 = param_3;
  eventflag_clr_flg(puVar1,0x10);
  reg_framework_send(*(int *)(param_1 + 0x10) + 8);
  eventflag_wai_flg(puVar1,0x10,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x10);
  virtual_destructor_free_10428222(&iStack_1c,2);
  return 1;
}

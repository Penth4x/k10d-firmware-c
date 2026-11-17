/* @k10d initialize_event_queue_entry_104c36c4 @ 0x104c36c4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Initializes a queue entry structure at offset 0x78 and dispatches a virtual method with
 *   a constructed parameter block.
 * summary:
 *   The function sets up a local parameter block containing the object pointer, a second
 *   pointer, a third value, and the constant 0x900001. It calls eventflag_clr_flg and
 *   eventflag_wai_flg on the sub-structure at param_1 + 0x78, likely initializing or
 *   resetting a queue or buffer state. Finally, it invokes virtual method slot 1 of the
 *   class defined at 0x1059e4d0 via virtual_destructor_free_10428222, passing the
 *   constructed parameter block. The specific camera subsystem role is not determinable
 *   from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_event_queue_entry_104c36c4(int param_1,void *param_2,uint32_t param_3)

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
  uStack_14 = 0x900001;
  iStack_1c = param_1;
  pvStack_18 = param_2;
  uStack_10 = param_3;
  eventflag_clr_flg(puVar1,4);
  reg_framework_send(*(int *)(param_1 + 8) + 8);
  eventflag_wai_flg(puVar1,4,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,4);
  virtual_destructor_free_10428222(&iStack_1c,2);
  return 1;
}

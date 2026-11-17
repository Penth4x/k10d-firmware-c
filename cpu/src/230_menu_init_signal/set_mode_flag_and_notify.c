/* @k10d set_mode_flag_and_notify @ 0x104c2e90
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Normalizes a mode parameter to 0, 1, or 2 and passes it to a callee with a count of 1.
 * summary:
 *   The function takes four parameters, normalizes param_4 into a local variable uStack_14
 *   (mapping 0->0, 1->1, 2->2, and any other value to 1), and stores param_2 and param_3 on
 *   the stack. It then calls initialize_event_queue_entry_104c3744 with param_1, a pointer
 *   to the normalized value, and the integer 1. The function always returns 1. The specific
 *   role of initialize_event_queue_entry_104c3744 is unknown, so the broader subsystem
 *   context is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_mode_flag_and_notify(int param_1,void *param_2,void *param_3,int param_4)

{
  uintptr_t sp;
  uint32_t uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  
  if (param_4 == 1) {
    uStack_14 = 1;
  }
  else if (param_4 == 0) {
    uStack_14 = 0;
  }
  else if (param_4 == 2) {
    uStack_14 = 2;
  }
  else {
    uStack_14 = 1;
  }
  pvStack_10 = param_2;
  pvStack_c = param_3;
  initialize_event_queue_entry_104c3744(param_1,&uStack_14,1);
  return 1;
}

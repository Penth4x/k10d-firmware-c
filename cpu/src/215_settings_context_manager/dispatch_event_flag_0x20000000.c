/* @k10d dispatch_event_flag_0x20000000 @ 0x104b3b6a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Checks bit 29 of param_2 and, if set, invokes a virtual method on an object stored at
 *   param_1+0x48.
 * summary:
 *   The function loops while param_2 is non-zero, but only acts when bit 29 (0x20000000) is
 *   set. It clears that bit and calls check_entry_condition_in_table with a pointer from
 *   param_1+0x34. If that call returns non-zero, it performs a virtual call (slot 4) on the
 *   object at param_1+0x48, passing arguments from param_1+0x38 and param_1+0x40. The role
 *   of the specific event or object is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_flag_0x20000000(int param_1,uint param_2)

{
  int iVar1;
  
  while (param_2 != 0) {
    if ((param_2 & 0x20000000) != 0) {
      param_2 = param_2 & 0xdfffffff;
      iVar1 = check_entry_condition_in_table(*(byte **)(param_1 + 0x34));
      if (iVar1 != 0) {
        iVar1 = **(int **)(param_1 + 0x48);
        (**(code **)(iVar1 + 0x24))
                  ((int)*(int **)(param_1 + 0x48) + (int)*(short *)(iVar1 + 0x20),
                   *(uint32_t *)(param_1 + 0x38),*(uint32_t *)(param_1 + 0x40));
      }
    }
  }
  return;
}

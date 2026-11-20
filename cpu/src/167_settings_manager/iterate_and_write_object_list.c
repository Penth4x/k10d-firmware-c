/* @k10d iterate_and_write_object_list @ 0x1047689c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates through a linked list of objects and writes each one to a destination object.
 * summary:
 *   The function retrieves a pointer from param_1+0xc and calls an unknown function at
 *   0x10476d2e to get a starting value. It then performs a virtual call on param_2 (slot 3)
 *   and enters a loop. In each iteration, it calls 0x1047e50c with param_2, the current
 *   value, and 1, then updates the current value by calling lookup_value_by_key with the
 *   pointer from param_1+0xc and the previous value. The loop continues until the value
 *   matches the initial value, suggesting a circular list traversal. Finally, it returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_and_write_object_list(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)0x10476d2e/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  (((vtbl_entry*)(*(int *)(param_2 + 0xc)))[4].fn)
            (((vtbl_entry*)(*(int *)(param_2 + 0xc)))[4].adj + param_2);
  iVar2 = iVar1;
  do {
    (*(code *)0x1047e50c/*ROM*/)(param_2,iVar2,1);
    iVar2 = lookup_value_by_key(*(uint32_t *)(param_1 + 0xc),iVar2);
  } while (iVar2 != iVar1);
  return 1;
}

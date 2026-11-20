/* @k10d notify_range_end_to_observers @ 0x10494596
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag in the object and invokes virtual slot 1 on each element in an internal
 *   range.
 * summary:
 *   The function writes param_2 to offset 8 and 1 to offset 9 of the object pointed to by
 *   param_1. It then iterates through a range defined by pointers at offsets 0x18 and 0x1c.
 *   For each element in this range, it retrieves a vtable pointer from offset 0xc and calls
 *   virtual slot 1 (offset 0xc) with the element as the first argument and 0 as the second.
 *   This pattern is typical for notifying observers or listeners of a state change or event
 *   completion.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void notify_range_end_to_observers(int param_1,uint8_t param_2)

{
  int *piVar1;
  int iVar2;
  
  *(uint8_t *)(param_1 + 8) = param_2;
  *(uint8_t *)(param_1 + 9) = 1;
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != *(int **)(param_1 + 0x1c)) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (((vtbl_entry*)(iVar2))[1].fn)(*piVar1 + (int)*(short *)(iVar2 + 8),0);
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x1c));
  }
  return;
}

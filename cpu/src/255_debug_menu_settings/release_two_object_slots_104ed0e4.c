/* @k10d release_two_object_slots_104ed0e4 @ 0x104ed0e4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Invokes virtual cleanup methods on two object pointers stored in a struct and nulls
 *   them out.
 * summary:
 *   The function checks offsets 4 and 8 of the input struct for non-null pointers. For
 *   each, it dereferences the pointer to get an object, then calls virtual slot 3 (vtable
 *   offset 0x24) and virtual slot 1 (vtable offset 0xc) with a this-adjustment and an
 *   argument of 3. Finally, it sets both struct fields to 0. This pattern is consistent
 *   with releasing or detaching two child objects or resources held by the parent struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_object_slots_104ed0e4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = **(int **)(param_1 + 4);
    (**(code **)(iVar1 + 0x24))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = **(int **)(param_1 + 4);
    (**(code **)(iVar1 + 0xc))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = **(int **)(param_1 + 8);
    (**(code **)(iVar1 + 0x24))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = **(int **)(param_1 + 8);
    (**(code **)(iVar1 + 0xc))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 8) = 0;
  return;
}

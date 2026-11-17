/* @k10d release_object_member_and_flag @ 0x104b2680
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Releases a virtual object stored at offset 0x14 and calls a helper with a flag.
 * summary:
 *   Reads a pointer from param_1+0x14. If non-null, it invokes virtual slot 2 (offset 0x14)
 *   on that object using the Cfront this-adjustment idiom, then nulls the pointer. It then
 *   calls clear_two_fields_and_reset with the value at param_1+8 and the constant 1.
 *   Returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_object_member_and_flag(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1);
    *(uint32_t *)(param_1 + 0x14) = 0;
  }
  clear_two_fields_and_reset(*(uint32_t *)(param_1 + 8),1);
  return 1;
}

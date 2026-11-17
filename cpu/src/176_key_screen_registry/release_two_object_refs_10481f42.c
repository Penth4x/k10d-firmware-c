/* @k10d release_two_object_refs_10481f42 @ 0x10481f42
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Releases a reference held at offset 0xc and conditionally invokes a virtual method on
 *   the object at offset 0x10.
 * summary:
 *   The function calls heap_free_2 with the pointer stored at param_1 + 0xc. It then checks
 *   if the pointer at param_1 + 0x10 is non-null. If non-null, it performs a virtual call
 *   on the object located at *(param_1 + 0x10) + 4, specifically invoking virtual slot 1
 *   (offset 0xc in the vtable) with an argument of 3. This pattern is consistent with
 *   releasing resources or notifying a dependent object during a cleanup or state
 *   transition phase of a class instance.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_object_refs_10481f42(int param_1)

{
  int iVar1;
  
  heap_free_2(*(int *)(param_1 + 0xc));
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0xc))(*(short *)(*(int *)(iVar1 + 4) + 8) + iVar1,3);
  }
  return;
}

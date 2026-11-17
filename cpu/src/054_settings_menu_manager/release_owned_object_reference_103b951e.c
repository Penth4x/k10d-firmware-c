/* @k10d release_owned_object_reference_103b951e @ 0x103b951e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Releases an owned object reference by invoking its virtual slot 3 and slot 1, then
 *   nulling the pointer.
 * summary:
 *   The function reads an object pointer from offset 4 of the input structure. It calls
 *   virtual slot 3 (offset 0x24) on that object, then calls virtual slot 1 (offset 0xc)
 *   with argument 3 if the pointer is non-null. Finally, it sets the pointer at offset 4 to
 *   zero. This pattern is consistent with releasing or detaching a held resource or object
 *   reference.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_reference_103b951e(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 4);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  *(uint32_t *)(param_1 + 4) = 0;
  return;
}

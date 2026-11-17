/* @k10d invoke_virtual_method_on_nested_object_104946c6 @ 0x104946c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 4 of an object pointer stored at offset 0x10 of the input structure.
 * summary:
 *   The function dereferences the pointer at param_1 + 0x10 to obtain an object pointer. If
 *   non-null, it performs a Cfront-style virtual call to slot 4 (offset 0x24) of that
 *   object, passing the this-adjusted object pointer and the value at param_1 + 4 as
 *   arguments. No specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_nested_object_104946c6(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))
              ((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,*(uint32_t *)(param_1 + 4));
  }
  return;
}

/* @k10d invoke_virtual_method_on_nested_object_104b1ea6 @ 0x104b1ea6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object stored at offset 0x48 of the input object.
 * summary:
 *   The function dereferences the pointer at offset 0x48 of param_1 to get an object
 *   pointer. It then performs a virtual call to the method at offset 0xa4 of that nested
 *   object, passing the nested object as the 'this' pointer. No other side effects or
 *   specific camera subsystem behavior are evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_nested_object_104b1ea6(int param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x48);
  (((vtbl_entry*)(iVar1))[20].fn)((int)*(int **)(param_1 + 0x48) + (int)((vtbl_entry*)(iVar1))[20].adj);
  return;
}

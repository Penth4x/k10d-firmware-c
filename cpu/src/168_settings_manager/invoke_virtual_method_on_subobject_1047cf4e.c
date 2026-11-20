/* @k10d invoke_virtual_method_on_subobject_1047cf4e @ 0x1047cf4e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object referenced at offset 0x28 and stores the boolean
 *   result at offset 0x2c.
 * summary:
 *   The function dereferences a pointer at param_1 + 0x28 to obtain a sub-object. It then
 *   performs a virtual call using the vtable entry at offset 0x34 of that sub-object,
 *   passing a this-adjusted pointer and a value derived from param_1 + 0x40. The integer
 *   return value is converted to a boolean (1 if zero, 0 otherwise) and written to param_1
 *   + 0x2c. No specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_subobject_1047cf4e(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x28);
  iVar1 = (((vtbl_entry*)(iVar1))[6].fn)
                    ((int)*(int **)(param_1 + 0x28) + (int)((vtbl_entry*)(iVar1))[6].adj,
                     *(uint32_t *)**(uint32_t **)(*(int *)(param_1 + 0x40) + 0xc));
  if (iVar1 == 0) {
    *(uint32_t *)(param_1 + 0x2c) = 1;
  }
  else {
    *(uint32_t *)(param_1 + 0x2c) = 0;
  }
  return;
}

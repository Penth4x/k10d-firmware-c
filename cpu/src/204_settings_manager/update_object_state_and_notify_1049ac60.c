/* @k10d update_object_state_and_notify_1049ac60 @ 0x1049ac60
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a state field to 3, increments a counter, and invokes a virtual method on a linked
 *   object.
 * summary:
 *   The function writes the constant 3 to offset 0x40 of the object in param_1 and adds
 *   param_2 to the value at offset 0x48. It then dereferences a pointer at offset 0x54 to
 *   find a linked object and calls virtual slot 2 (offset 0x14) on it, passing 0x41000 and
 *   a pointer to the state field. Finally, it returns the boolean value stored at offset
 *   0x50.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool update_object_state_and_notify_1049ac60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *(uint32_t *)(param_1 + 0x40) = 3;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + param_2;
  piVar1 = *(int **)(*(int *)(param_1 + 0x54) + 8);
  iVar2 = *piVar1;
  (((vtbl_entry*)(iVar2))[2].fn)
            ((int)piVar1 + (int)((vtbl_entry*)(iVar2))[2].adj,0x41000,(uint32_t *)(param_1 + 0x40));
  return *(char *)(param_1 + 0x50) != '\0';
}

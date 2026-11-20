/* @k10d invoke_virtual_slot_6_and_7 @ 0x104b2d88
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 6 on an object, and if it returns 4, calls virtual slot 7 on a
 *   second object.
 * summary:
 *   The function checks if the field at offset 0x18 is zero. If so, it sets it to 5,
 *   retrieves an object pointer from offset 8, and calls its virtual slot 6 (offset 0x34).
 *   If the return value is 4, it resets the field to 0 and calls virtual slot 7 (offset
 *   0x3c) on an object pointer from offset 4. Returns 1 if the operation was performed, 0
 *   otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_6_and_7(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    *(uint32_t *)(param_1 + 0x18) = 5;
    iVar2 = **(int **)(param_1 + 8);
    iVar2 = (((vtbl_entry*)(iVar2))[6].fn)
                      ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar2))[6].adj,0,0);
    if (iVar2 == 4) {
      *(uint32_t *)(param_1 + 0x18) = 0;
      iVar2 = **(int **)(param_1 + 4);
      (((vtbl_entry*)(iVar2))[7].fn)((int)*(int **)(param_1 + 4) + (int)((vtbl_entry*)(iVar2))[7].adj);
    }
    uVar1 = 1;
  }
  return uVar1;
}

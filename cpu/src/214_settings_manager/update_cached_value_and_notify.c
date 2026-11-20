/* @k10d update_cached_value_and_notify @ 0x104b020e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Searches a table for a matching key, updates cached fields if found, and invokes a
 *   virtual method with the current key.
 * summary:
 *   The function checks if the value at offset 0x20 differs from param_2 and if a count at
 *   0x38 is non-zero. It iterates through a table pointed to by 0x3c, comparing entries to
 *   param_2. On a match, it copies values from tables at 0x40 and 0x44 into offsets 0x48
 *   and 0x4c, updates the key at 0x20, and breaks. Finally, it calls virtual slot 7 (offset
 *   0x3c) on the object at 0x2c, passing the updated key. The specific camera subsystem is
 *   not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_cached_value_and_notify(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x20) != param_2) && (uVar1 = 0, *(char *)(param_1 + 0x38) != '\0')) {
    do {
      iVar2 = uVar1 * 4;
      if (*(int *)(*(int *)(param_1 + 0x3c) + iVar2) == param_2) {
        *(uint32_t *)(param_1 + 0x48) = *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar2);
        *(uint32_t *)(param_1 + 0x4c) = *(uint32_t *)(*(int *)(param_1 + 0x44) + iVar2);
        *(int *)(param_1 + 0x20) = param_2;
        break;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < *(byte *)(param_1 + 0x38));
  }
  iVar2 = **(int **)(param_1 + 0x2c);
  (((vtbl_entry*)(iVar2))[7].fn)
            ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar2))[7].adj,
             *(uint32_t *)(param_1 + 0x20));
  return;
}

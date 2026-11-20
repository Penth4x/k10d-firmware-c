/* @k10d invoke_virtual_method_slot_9 @ 0x1036b6ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual method slot 9 on an object, conditionally invoking slots 11, 12, and 13
 *   first if a flag is set.
 * summary:
 *   The function dereferences the vtable pointer in param_1 and calls the method at offset
 *   0x4c (slot 9). If the byte at offset 4 is non-zero, it first calls methods at offsets
 *   0x5c, 0x64, and 0x6c (slots 11, 12, 13) and clears the flag. The return value of the
 *   slot 9 call is returned. No specific camera subsystem behavior is evident from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_slot_9(int *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (*(char *)(param_1 + 4) != '\0') {
    (((vtbl_entry*)(iVar2))[11].fn)((int)((vtbl_entry*)(iVar2))[11].adj + (int)param_1);
    (((vtbl_entry*)(*param_1))[12].fn)((int)((vtbl_entry*)(*param_1))[12].adj + (int)param_1);
    (((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1);
    *(uint8_t *)(param_1 + 4) = 0;
    iVar2 = *param_1;
  }
  uVar1 = (((vtbl_entry*)(iVar2))[9].fn)((int)((vtbl_entry*)(iVar2))[9].adj + (int)param_1);
  return uVar1;
}

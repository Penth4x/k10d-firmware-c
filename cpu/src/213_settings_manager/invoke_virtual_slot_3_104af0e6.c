/* @k10d invoke_virtual_slot_3_104af0e6 @ 0x104af0e6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clears a field and invokes virtual slot 3 of the object pointed to by param_1.
 * summary:
 *   The function writes 0 to param_1[3]. It then performs a Cfront-style virtual call: it
 *   loads the vtable pointer from *param_1, reads the function pointer at offset 0x1c (slot
 *   3), and calls it with the this-pointer adjusted by the short at vtable offset 0x18. No
 *   other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_104af0e6(int *param_1)

{
  int iVar1;
  
  param_1[3] = 0;
  iVar1 = *(int *)*param_1;
  (((vtbl_entry*)(iVar1))[3].fn)(*param_1 + (int)((vtbl_entry*)(iVar1))[3].adj);
  return;
}

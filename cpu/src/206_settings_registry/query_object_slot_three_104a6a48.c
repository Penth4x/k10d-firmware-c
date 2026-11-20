/* @k10d query_object_slot_three_104a6a48 @ 0x104a6a48
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 3 of an object referenced at offset 0x10 and returns whether the
 *   result is non-zero.
 * summary:
 *   The function performs a Cfront-style virtual call on the object pointer stored at
 *   param_1 + 0x10. It uses the vtable entry at offset 0x1c and applies the this-adjustment
 *   from offset 0x18, passing the constant 3 as an argument. The boolean result indicates
 *   whether the virtual method returned a non-zero value. No specific camera subsystem or
 *   MMIO interaction is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool query_object_slot_three_104a6a48(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x10);
  iVar1 = (((vtbl_entry*)(iVar1))[3].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar1))[3].adj,3);
  return iVar1 != 0;
}

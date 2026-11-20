/* @k10d invoke_virtual_method_slot_5 @ 0x1047473e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 5 of an object and returns whether the result is non-zero.
 * summary:
 *   The function dereferences a vtable pointer at offset 4 of param_1, then invokes virtual
 *   slot 5 (offset 0x34) with a this-adjustment from offset 0x30 and the value pointed to
 *   by param_2. It returns true if the virtual call's return value is non-zero. No specific
 *   camera subsystem or hardware role can be determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_method_slot_5(int param_1,uint32_t *param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  iVar1 = (((vtbl_entry*)(iVar1))[6].fn)
                    ((int)*(int **)(param_1 + 4) + (int)((vtbl_entry*)(iVar1))[6].adj,*param_2);
  return iVar1 != 0;
}

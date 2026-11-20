/* @k10d invoke_virtual_slot_11_1047ceb6 @ 0x1047ceb6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual method slot 11 of an object referenced at offset 0x28 of param_1 and
 *   returns the result.
 * summary:
 *   The function dereferences param_1+0x28 to obtain an object pointer, then performs a
 *   Cfront-style virtual call to slot 11 (offset 0x5c) using the this-adjustment stored at
 *   offset 0x58. It returns the value produced by that virtual call. No specific camera
 *   subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_11_1047ceb6(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x28);
  uVar1 = (((vtbl_entry*)(iVar2))[11].fn)
                    ((int)*(int **)(param_1 + 0x28) + (int)((vtbl_entry*)(iVar2))[11].adj);
  return uVar1;
}

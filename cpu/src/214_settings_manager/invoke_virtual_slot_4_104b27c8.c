/* @k10d invoke_virtual_slot_4_104b27c8 @ 0x104b27c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 4 of an object referenced at offset 0x14 of param_1 and returns
 *   the result.
 * summary:
 *   The function performs a Cfront-style virtual call. It loads a pointer from param_1 +
 *   0x14, then uses the vtable entry at offset 0x24 (slot 4) of that object. The this-
 *   pointer is adjusted by the short value at offset 0x20. The return value of the called
 *   function is returned directly. No specific camera subsystem behavior is evident from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_4_104b27c8(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x14);
  uVar1 = (((vtbl_entry*)(iVar2))[4].fn)
                    ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar2))[4].adj);
  return uVar1;
}

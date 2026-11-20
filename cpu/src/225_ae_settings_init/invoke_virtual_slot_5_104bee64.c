/* @k10d invoke_virtual_slot_5_104bee64 @ 0x104bee64
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 225_ae_settings_init (unit names are model-proposed)
 * purpose:
 *   Performs a virtual method call on an object referenced at offset 0x488 of the input
 *   structure.
 * summary:
 *   The function retrieves a pointer from param_1 + 0x488, then uses the Cfront virtual
 *   call idiom to invoke virtual slot 5 (offset 0x34) of that object. It applies the this-
 *   adjustment found at offset 0x30 of the vtable to the object pointer before the call.
 *   The return value of the virtual method is passed back to the caller. No specific camera
 *   subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_5_104bee64(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x488);
  uVar1 = (((vtbl_entry*)(iVar2))[6].fn)
                    ((int)*(int **)(param_1 + 0x488) + (int)((vtbl_entry*)(iVar2))[6].adj);
  return uVar1;
}

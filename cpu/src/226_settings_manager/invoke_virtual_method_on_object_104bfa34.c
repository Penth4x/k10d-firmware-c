/* @k10d invoke_virtual_method_on_object_104bfa34 @ 0x104bfa34
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x1c and invokes a virtual method on an object pointer stored at
 *   offset 0x488.
 * summary:
 *   The function writes the value 1 to the byte at param_1 + 0x1c. It then dereferences the
 *   pointer at param_1 + 0x488 to get an object pointer, and performs a virtual call using
 *   the vtable entry at offset 0x3c of that object. The this pointer for the call is
 *   adjusted by the short value at offset 0x38 of the object. No specific camera subsystem
 *   behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_object_104bfa34(int param_1, uint32_t param_x1, uint32_t param_x2)

{
  int iVar1;
  
  *(uint8_t *)(param_1 + 0x1c) = 1;
  iVar1 = **(int **)(param_1 + 0x488);
  (((vtbl_entry*)(iVar1))[7].fn)((int)*(int **)(param_1 + 0x488) + (int)((vtbl_entry*)(iVar1))[7].adj);
  return 1;
}

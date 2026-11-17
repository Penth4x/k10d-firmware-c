/* @k10d invoke_virtual_method_on_object_104bfb44 @ 0x104bfb44
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x1c and invokes a virtual method on an object pointer stored at
 *   offset 0x480.
 * summary:
 *   The function writes the value 1 to the byte at offset 0x1c of the object pointed to by
 *   param_1. It then retrieves a pointer from offset 0x480 and performs a virtual function
 *   call using the vtable entry at offset 0x74. The call passes the adjusted object
 *   pointer, param_2, the value at offset 0x34, and param_3 as arguments. It returns 1 upon
 *   completion.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_object_104bfb44(int param_1,uint32_t param_2,void *param_3)

{
  int iVar1;
  
  *(uint8_t *)(param_1 + 0x1c) = 1;
  iVar1 = **(int **)(param_1 + 0x480);
  (**(code **)(iVar1 + 0x74))
            ((int)*(int **)(param_1 + 0x480) + (int)*(short *)(iVar1 + 0x70),param_2,
             *(uint32_t *)(param_1 + 0x34),param_3);
  return 1;
}

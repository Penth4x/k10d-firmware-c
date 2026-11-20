/* @k10d invoke_virtual_method_on_object_104bfbea @ 0x104bfbea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x1c and invokes a virtual method on an object pointer stored at
 *   offset 0x480.
 * summary:
 *   The function writes the value 1 to the byte at offset 0x1c of the object pointed to by
 *   param_1. It then retrieves a vtable pointer from offset 0x480 and calls the virtual
 *   method at slot 10 (offset 0x6c) with the object (adjusted by the this-pointer at offset
 *   0x68), param_2, the value at offset 0x34, and param_3. It returns 1. The specific role
 *   of the object or the virtual method is not determinable from the provided pseudocode
 *   and lack of named callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_object_104bfbea(int param_1,uint32_t param_2,void *param_3)

{
  int iVar1;
  
  *(uint8_t *)(param_1 + 0x1c) = 1;
  iVar1 = **(int **)(param_1 + 0x480);
  (((vtbl_entry*)(iVar1))[13].fn)
            ((int)*(int **)(param_1 + 0x480) + (int)((vtbl_entry*)(iVar1))[13].adj,param_2,
             *(uint32_t *)(param_1 + 0x34),param_3);
  return 1;
}

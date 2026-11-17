/* @k10d invoke_virtual_callback_and_update_state @ 0x1047ced2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object pointer and updates associated state fields based
 *   on the result.
 * summary:
 *   The function dereferences a pointer at param_1 + 0x28 to access a vtable, then calls
 *   virtual slot 4 (offset 0x2c) with a this-adjustment. It stores the return value in a
 *   local stack variable and writes it to a memory location derived from param_1 + 0x40. It
 *   sets a flag at param_1 + 0x2c to 1 if the call returned 0, else 0. It calls
 *   copy_null_terminated_string with a pointer offset by 0x19 and 0, then updates an index
 *   field at param_1 + 0x28 + 4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_callback_and_update_state(int param_1)

{
  uint32_t *puVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_c;
  
  puVar1 = (uint32_t *)**(int **)(*(int *)(param_1 + 0x40) + 0xc);
  *(uint32_t *)(param_1 + 0x60) = puVar1[1];
  uStack_c = 0;
  iVar2 = **(int **)(param_1 + 0x28);
  iVar2 = (**(code **)(iVar2 + 0x2c))
                    ((int)*(int **)(param_1 + 0x28) + (int)*(short *)(iVar2 + 0x28),0,0,&uStack_c);
  if (iVar2 == 0) {
    *(uint32_t *)(param_1 + 0x2c) = 1;
  }
  else {
    *(uint32_t *)(param_1 + 0x2c) = 0;
  }
  copy_null_terminated_string((void *)((int)puVar1 + 0x19),(void *)0x0);
  *puVar1 = uStack_c;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28) + 4;
  }
  puVar1[4] = iVar2;
  return;
}

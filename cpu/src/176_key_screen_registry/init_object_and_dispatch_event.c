/* @k10d init_object_and_dispatch_event @ 0x10481c40
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Stores a pointer in the object, initializes a sub-structure, and conditionally invokes
 *   a virtual method with a fixed parameter.
 * summary:
 *   The function writes param_2 to offset 0x18 of the object pointed to by param_1. It
 *   calls initialize_struct_header on the sub-structure at offset 0x1c and
 *   dispatch_virtual_method_chain_10481c96 with param_3, using the result to set a flag at
 *   offset 0x1c to 1 or 0. If the pointer at offset 0x18 is non-null, it performs a virtual
 *   call to slot 2 (offset 0x14) with the value 0x50000 and the sub-structure pointer as
 *   arguments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_dispatch_event(int param_1,uint32_t param_2,uint32_t param_3)

{
  int *piVar1;
  int iVar2;
  uint32_t *puVar3;
  
  *(uint32_t *)(param_1 + 0x18) = param_2;
  puVar3 = (uint32_t *)(param_1 + 0x1c);
  initialize_struct_header(puVar3);
  iVar2 = dispatch_virtual_method_chain_10481c96(param_1,param_3);
  if (iVar2 == 0) {
    *puVar3 = 1;
  }
  else {
    *puVar3 = 0;
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0x50000,puVar3);
  }
  return;
}

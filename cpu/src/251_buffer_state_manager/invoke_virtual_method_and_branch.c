/* @k10d invoke_virtual_method_and_branch @ 0x104e0baa
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object and returns 3 if the result is 1 or 9, otherwise 2.
 * summary:
 *   The function dereferences a pointer at offset 0x20 of param_1 to get an object, then
 *   calls virtual slot 3 (offset 0x1c) on that object. If the return value is 1 or 9, it
 *   calls build_and_send_packet with the value at offset 0x18 of param_1 and returns 3.
 *   Otherwise, it returns 2. The specific camera subsystem role is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_and_branch(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x20) + 0x40);
  iVar2 = (((vtbl_entry*)(iVar2))[3].fn)(*(int *)((int)param_1 + 0x20) + (int)((vtbl_entry*)(iVar2))[3].adj)
  ;
  if ((iVar2 == 1) || (iVar2 == 9)) {
    build_and_send_packet((void*)(*(uint32_t *)((int)param_1 + 0x18)));
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

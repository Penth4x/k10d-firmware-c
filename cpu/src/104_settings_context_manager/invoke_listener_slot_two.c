/* @k10d invoke_listener_slot_two @ 0x104272a4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 of the object stored in the listener struct and signals a
 *   semaphore.
 * summary:
 *   The function dereferences the first pointer in the struct pointed to by param_1. If
 *   non-null, it calls virtual slot 2 (offset 0x14) of that object, passing the object
 *   pointer adjusted by the this-adjustment value at offset 0x10. The return value is
 *   stored at offset 16 of the struct, and the first and third fields are zeroed. Finally,
 *   it calls sig_sem_obj on the semaphore object at offset 4 of the struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_listener_slot_two(int *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1);
    param_1[4] = iVar3;
    *param_1 = 0;
    param_1[3] = 0;
    uVar2 = sig_sem_obj(param_1 + 1);
  }
  return uVar2;
}

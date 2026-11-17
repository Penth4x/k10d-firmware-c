/* @k10d allocate_and_init_subobject_10490d2e @ 0x10490d2e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x38-byte object, constructs it, stores the pointer in param_1, and calls
 *   its virtual slot 3 with param_2.
 * summary:
 *   The function allocates 0x38 bytes via heap_alloc. If successful, it calls
 *   cls_105b3fbc_new to construct the object. It then stores the pointer at offset 4 of
 *   param_1 and invokes virtual slot 3 (offset 0x1c) of the new object, passing param_2 as
 *   the argument. The specific role of the constructed object is not determinable from the
 *   provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_subobject_10490d2e(void *param_1,uint32_t param_2)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x38);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105b3fbc_new(piVar1);
  }
  *(int **)((int)param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,param_2);
  return;
}

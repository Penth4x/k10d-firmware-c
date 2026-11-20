/* @k10d init_object_with_heap_child_10470db6 @ 0x10470db6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 163_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x58-byte object, initializes it, stores it in param_1+4, and calls its
 *   virtual slot 2 with argument 0.
 * summary:
 *   The function allocates 0x58 bytes via heap_alloc. If successful, it calls
 *   cls_105a9068_new to initialize the new object. It stores the pointer at offset 4 of
 *   param_1. Finally, it performs a virtual call to slot 2 (offset 0x14) of the new object
 *   with an argument of 0. The caller's object (cls_105a97bc) is 8 bytes, so this likely
 *   initializes a member pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_child_10470db6(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x58);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a9068_new(piVar1);
  }
  *(int **)((int)param_1 + 4) = piVar1;
  (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0);
  return;
}

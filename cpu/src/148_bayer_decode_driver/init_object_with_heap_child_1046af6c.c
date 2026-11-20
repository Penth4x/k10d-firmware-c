/* @k10d init_object_with_heap_child_1046af6c @ 0x1046af6c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x294-byte object, constructs it, stores it in param_1+4, and calls its
 *   virtual slot 2 with argument 0.
 * summary:
 *   The function allocates 0x294 bytes from the heap. If successful, it calls
 *   cls_105a8040_new to construct the object and stores the pointer at offset 4 of param_1.
 *   It then invokes virtual slot 2 of the newly constructed object (via vtable offset 0x14)
 *   with an argument of 0. The caller's object (param_1) is not directly modified at offset
 *   0, only at offset 4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_child_1046af6c(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x294);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a8040_new(piVar1);
  }
  *(int **)((int)param_1 + 4) = piVar1;
  (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0);
  return;
}

/* @k10d init_object_with_heap_child_1046c534 @ 0x1046c534
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 200-byte object, constructs it, stores it in param_1, and calls its virtual
 *   slot 2 with argument 0.
 * summary:
 *   The function allocates 200 bytes from the heap. If successful, it calls
 *   cls_105a8d00_new to construct the object. It stores the pointer at offset 4 of param_1
 *   and then invokes virtual method slot 2 of the new object with an argument of 0. This
 *   appears to be an initialization routine for a class member.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_child_1046c534(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)200);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a8d00_new(piVar1);
  }
  *(int **)((int)param_1 + 4) = piVar1;
  (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0);
  return;
}

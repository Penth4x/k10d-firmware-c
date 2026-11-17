/* @k10d init_object_with_heap_alloc_104b511e @ 0x104b511e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x78-byte object, initializes it, stores the pointer in param_1+4, and
 *   calls virtual slot 2 with argument 0.
 * summary:
 *   The function allocates 0x78 bytes from the heap. If successful, it calls
 *   cls_105b8354_new to initialize the object. It then stores the pointer at offset 4 of
 *   param_1 and invokes virtual method slot 2 of the new object with an argument of 0. This
 *   appears to be a constructor or initialization routine for a class member.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_alloc_104b511e(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x78);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105b8354_new(piVar1);
  }
  *(int **)(param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  return;
}

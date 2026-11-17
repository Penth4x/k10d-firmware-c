/* @k10d initialize_subobject_slot_10390f1c @ 0x10390f1c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x84-byte object, constructs it, stores it in param_1+4, and calls its
 *   virtual slot 2 with argument 0.
 * summary:
 *   The function allocates 0x84 bytes via heap_alloc. If successful, it calls
 *   cls_1055a304_new to construct the object. It stores the pointer at offset 4 of param_1
 *   and then invokes virtual slot 2 of the new object (via vtable offset 0x14) with an
 *   argument of 0. This appears to be a lazy initialization or setup routine for a sub-
 *   object within a larger structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_subobject_slot_10390f1c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x84);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_1055a304_new(piVar1);
  }
  *(int **)(param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  return;
}

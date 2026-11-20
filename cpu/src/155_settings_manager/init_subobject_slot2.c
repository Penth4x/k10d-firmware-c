/* @k10d init_subobject_slot2 @ 0x1046d23e
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * unit: 155_settings_manager (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 12-byte sub-object, constructs it, stores it at offset 4 of the
 *   parent, and invokes its virtual slot 2 with argument 0.
 * summary:
 *   Allocates 0xc bytes via heap_alloc and calls cls_105a8fd0_new on the block. Stores the
 *   pointer at *(param_1+4). Then performs a virtual call to slot 2 of the new object
 *   (vtable offset 0x14) with this-adjustment from *(piVar1+0x10) and argument 0. This is
 *   virtual method slot 2 of cls_105a9000, likely an initialization routine for a lazily-
 *   created sub-component.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_subobject_slot2(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a8fd0_new(piVar1);
  }
  *(int **)((int)param_1 + 4) = piVar1;
  (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0);
  return;
}

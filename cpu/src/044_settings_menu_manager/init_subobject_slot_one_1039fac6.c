/* @k10d init_subobject_slot_one_1039fac6 @ 0x1039fac6
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 0xdc-byte sub-object, constructs it, stores it at offset 4 of the
 *   parent, and invokes its virtual slot 2 with argument 0.
 * summary:
 *   Allocates 0xdc bytes via heap_alloc and, on success, runs cls_10564150_new on the
 *   block. The pointer is stored at *(param_1+4). It then performs a virtual call to slot 2
 *   of the new object (vtable offset 0x14, this-adjust from offset 0x10) passing 0, likely
 *   an initialization/reset. The parent class cls_105642d8 is 0x8 bytes, so this populates
 *   its single data pointer. No camera-specific subsystem is evident from the code or
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_subobject_slot_one_1039fac6(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0xdc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_10564150_new(piVar1);
  }
  *(int **)((int)param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  return;
}

/* @k10d alloc_and_init_object_with_two_ids @ 0x103c71ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 32-byte object, constructs it, calls a virtual method with arg 0, and
 *   stores two values from helper functions into the caller's struct.
 * summary:
 *   Allocates 0x20 bytes via heap_alloc. On success, calls cls_105b4254_new to construct
 *   the object and invokes virtual slot 7 (offset 0x3c) with argument 0. Stores the return
 *   values of get_or_init_static_buffer_10495746 and a field from
 *   get_or_create_singleton_object_10485138 into param_1[1] and param_1[2]. On allocation
 *   failure, sets *param_1 to 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_init_object_with_two_ids(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)heap_alloc((void *)0x20);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
    *param_1 = 0;
  }
  else {
    cls_105b4254_new(piVar1);
    *param_1 = (int)piVar1;
  }
  (**(code **)(*piVar1 + 0x3c))((int)*(short *)(*piVar1 + 0x38) + (int)piVar1,0);
  iVar2 = get_or_init_static_buffer_10495746();
  param_1[1] = iVar2;
  iVar2 = get_or_create_singleton_object_10485138();
  param_1[2] = *(int *)(iVar2 + 0xc);
  return;
}

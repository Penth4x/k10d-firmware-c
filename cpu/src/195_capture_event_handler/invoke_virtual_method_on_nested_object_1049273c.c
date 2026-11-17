/* @k10d invoke_virtual_method_on_nested_object_1049273c @ 0x1049273c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Checks a nested object pointer and invokes two virtual methods on it if a condition is
 *   met.
 * summary:
 *   Reads a pointer from offset 0x10 of the input parameter. If non-null, it performs a
 *   virtual call on the object at offset 0xc of that nested pointer. If the result is non-
 *   zero, it performs a second virtual call on the nested pointer and calls
 *   dispatch_two_param_operations with the value at offset 0x14 of the input parameter and
 *   0. Returns 1 unconditionally.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_nested_object_1049273c(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x10);
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*(int *)(iVar1 + 0xc) + 0x4c))
                        (*(short *)(*(int *)(iVar1 + 0xc) + 0x48) + iVar1), iVar1 != 0)) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x10) + 0xc);
    (**(code **)(iVar1 + 0x54))(*(int *)((int)param_1 + 0x10) + (int)*(short *)(iVar1 + 0x50));
    dispatch_two_param_operations((void *)*(uint32_t *)((int)param_1 + 0x14),0);
  }
  return 1;
}

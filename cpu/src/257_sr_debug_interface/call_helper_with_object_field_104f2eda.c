/* @k10d call_helper_with_object_field_104f2eda @ 0x104f2eda
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Constructs a temporary object, passes a field from param_1 to a helper, and returns the
 *   helper's result.
 * summary:
 *   The function allocates a stack-based object via cls_105a6d44_new. It then calls
 *   copy_fourteen_bytes_to_buffer, passing the value at offset 8 of param_1 and the new
 *   object as arguments. The return value of copy_fourteen_bytes_to_buffer is captured, the
 *   object is destroyed via cls_105a6d44_delete, and the captured value is returned. The
 *   specific role of the helper and the object is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_object_field_104f2eda(int param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint8_t auStack_1c [20];
  
  cls_105a6d44_new((void *)auStack_1c);
  copy_fourteen_bytes_to_buffer(*(int *)(param_1 + 8),auStack_1c);
  uVar1 = (*(code *)0x1045fe44/*ROM*/)(auStack_1c);
  cls_105a6d44_delete((void *)auStack_1c,2);
  return uVar1;
}

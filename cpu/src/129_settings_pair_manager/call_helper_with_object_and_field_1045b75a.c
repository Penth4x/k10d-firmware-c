/* @k10d call_helper_with_object_and_field_1045b75a @ 0x1045b75a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 4-byte field from an object and passes it to a helper function.
 * summary:
 *   The function dereferences param_1 to get a base pointer, reads the 4-byte value at
 *   offset 4, and stores it in a local variable. It then calls unlink_and_copy_pointer with
 *   a stack address, the original object pointer, and the read value. The specific role of
 *   the field or the helper is not determinable from the provided pseudocode and unknown
 *   callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_object_and_field_1045b75a(int *param_1)

{
  uintptr_t sp;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_14 = *(uint32_t *)(*param_1 + 4);
  uStack_c = uStack_14;
  unlink_and_copy_pointer(&uStack_10,param_1,&uStack_14);
  return;
}

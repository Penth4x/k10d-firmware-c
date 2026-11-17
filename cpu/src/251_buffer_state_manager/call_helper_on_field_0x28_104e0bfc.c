/* @k10d call_helper_on_field_0x28_104e0bfc @ 0x104e0bfc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0x28 of the object in param_1 and passes it to
 *   init_struct_with_flag_and_callback, returning the result.
 * summary:
 *   This is a one-line wrapper that dereferences param_1 + 0x28 and forwards that value as
 *   the sole argument to init_struct_with_flag_and_callback. It is invoked as virtual
 *   method slot 3 of class cls_105bce58. No camera subsystem is identifiable from the
 *   pseudocode or the single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_on_field_0x28_104e0bfc(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = init_struct_with_flag_and_callback((void *)(*(uint32_t *)(param_1 + 0x28)));
  return uVar1;
}

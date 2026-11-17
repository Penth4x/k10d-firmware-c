/* @k10d init_object_with_two_calls @ 0x1036b248
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 018_settings_block_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed initializer then a second function with the object, an offset pointer,
 *   and a constant.
 * summary:
 *   The function takes a single pointer argument. It first calls
 *   call_helper_on_struct_field_1036c46c with no arguments, then calls
 *   call_helper_on_struct_field_1036c41a passing the original pointer, a pointer to offset
 *   0x14 within the same object, and the integer constant 1. Both callees are unnamed, so
 *   the specific subsystem or data structure being initialized is not determinable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_calls(void *param_1)

{
  call_helper_on_struct_field_1036c46c();
  call_helper_on_struct_field_1036c41a(param_1,(void *)((int)param_1 + 0x14),1);
  return;
}

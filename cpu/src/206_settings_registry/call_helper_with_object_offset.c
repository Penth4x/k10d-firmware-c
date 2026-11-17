/* @k10d call_helper_with_object_offset @ 0x104a78f0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper, then calls another helper with the value at param_1+4 and the
 *   remaining arguments.
 * summary:
 *   This is virtual slot 7 of cls_105b6938. It first invokes
 *   ensure_pointer_field_initialized with no arguments, then invokes
 *   allocate_and_init_event_struct_1049a9fa passing the 4-byte value stored at offset 4 of
 *   the object (param_1+4) along with param_2 and param_3. No camera-specific behavior is
 *   evident from the pseudocode or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_object_offset(int param_1,uint32_t param_2,uint32_t param_3)

{
  ensure_pointer_field_initialized(__frv_reg_unset(4));
  allocate_and_init_event_struct_1049a9fa(*(uint32_t *)(param_1 + 4),param_2,param_3);
  return;
}

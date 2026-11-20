/* @k10d call_helper_with_object_field_104a7912 @ 0x104a7912
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper, then forwards an object field and two parameters to another
 *   helper.
 * summary:
 *   The function first calls init_object_with_lazy_alloc_104a7984 with no arguments. It
 *   then reads the 4-byte value at offset 0xc of the object pointed to by param_1 and
 *   passes it, along with param_2 and param_3, to allocate_and_init_event_struct_104ce86a.
 *   No camera-specific behavior is evident from the pseudocode or callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_object_field_104a7912(cls_105b6938 *param_1,uint32_t param_2,uint32_t param_3)

{
  init_object_with_lazy_alloc_104a7984(__frv_reg_unset(4));
  allocate_and_init_event_struct_104ce86a(param_1->field_0xc,param_2,param_3);
  return;
}

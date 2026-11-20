/* @k10d init_object_with_params_104c0a34 @ 0x104c0a34
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure by setting fields and dispatching based on a pointer
 *   parameter.
 * summary:
 *   Calls two initialization helpers on the object, then writes specific values (2, 2,
 *   param_3, param_4) to offsets 0x48c-0x49c. If param_2 is NULL, it calls a check function
 *   and potentially another helper; otherwise, it calls two other functions passing the
 *   object and param_2. The specific subsystem is not identifiable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_params_104c0a34(int param_1,void *param_2,uint16_t param_3,uint32_t param_4)

{
  bool bVar1;
  uint32_t *puVar2;
  
  process_three_string_slots_per_entry(param_1);
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  puVar2 = (uint32_t *)(param_1 + 0x48c);
  *puVar2 = 2;
  *(uint32_t *)(param_1 + 0x490) = 2;
  *(uint16_t *)(param_1 + 0x494) = param_3;
  *(uint32_t *)(param_1 + 0x49c) = param_4;
  if (param_2 == 0) {
    bVar1 = invoke_virtual_method_on_object_104bfb72(param_1,puVar2);
    if (bVar1) {
      process_entry_array_with_virtual_init(param_1);
    }
  }
  else {
    set_pointer_and_clear_flag((int *)(param_1 + 4),param_2);
    invoke_virtual_method_on_object_104bfbea(param_1,param_1,puVar2);
  }
  return;
}

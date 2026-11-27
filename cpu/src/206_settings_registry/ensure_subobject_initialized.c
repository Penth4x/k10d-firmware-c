/* @k10d ensure_subobject_initialized @ 0x104a7934
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void ensure_subobject_initialized(int param_1)

{
  uint32_t uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    get_or_create_singleton_object_104a2fde();
    uVar1 = invoke_virtual_slots_on_object_104a335a((int *)(uint32_t)param_1);
    *(uint32_t *)(param_1 + 8) = uVar1;
  }
  return;
}

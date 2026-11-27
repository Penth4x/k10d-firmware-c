/* @k10d ensure_pointer_field_initialized @ 0x104a795c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void ensure_pointer_field_initialized(int param_1)

{
  uint32_t uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    get_or_create_singleton_object_1049aca6();
    uVar1 = invoke_virtual_slots_on_object_1049afb4((int *)(uint32_t)param_1);
    *(uint32_t *)(param_1 + 4) = uVar1;
  }
  return;
}

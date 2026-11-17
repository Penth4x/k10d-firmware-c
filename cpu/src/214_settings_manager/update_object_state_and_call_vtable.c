/* @k10d update_object_state_and_call_vtable @ 0x104b1e76
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_state_and_call_vtable(int param_1,uint32_t param_2)

{
  (*(code *)0x104b2ba8/*ROM*/)(*(uint32_t *)(param_1 + 0x40));
  (*(code *)0x104b2fa6/*ROM*/)(*(uint32_t *)(param_1 + 0x44),param_2);
  *(uint32_t *)(*(int *)(param_1 + 0x30) + 4) = param_2;
  return;
}

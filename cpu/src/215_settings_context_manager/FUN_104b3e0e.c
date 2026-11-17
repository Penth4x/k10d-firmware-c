/* @k10d FUN_104b3e0e @ 0x104b3e0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_104b3e0e(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_ram_buffer_104b172a();
  update_object_state_and_call_vtable(uVar1,param_2);
  return;
}

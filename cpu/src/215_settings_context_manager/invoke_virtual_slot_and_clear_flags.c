/* @k10d invoke_virtual_slot_and_clear_flags @ 0x104b3b3e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_clear_flags(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 4);
  (((vtbl_entry*)(iVar1))[6].fn)(*(int *)(param_1 + 0x24) + (int)((vtbl_entry*)(iVar1))[6].adj);
  *(uint32_t *)(param_1 + 0x3c) = 0;
  *(uint32_t *)(param_1 + 0x40) = 0;
  return;
}

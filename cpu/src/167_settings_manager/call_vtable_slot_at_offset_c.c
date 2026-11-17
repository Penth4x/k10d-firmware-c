/* @k10d call_vtable_slot_at_offset_c @ 0x10476654
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_vtable_slot_at_offset_c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x10476d2e/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  return uVar1;
}

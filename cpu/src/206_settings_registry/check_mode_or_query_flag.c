/* @k10d check_mode_or_query_flag @ 0x104a292e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_mode_or_query_flag(int param_1)

{
  int iVar1;
  uint8_t uVar2;
  
  iVar1 = call_virtual_slot_two_104a290e((uint32_t)param_1);
  if (((iVar1 == 0xd) || (iVar1 == 0xe)) || (iVar1 == 0xf)) {
    uVar2 = 1;
  }
  else {
    uVar2 = settings_getter(*(int *)(param_1 + 0x24),0xb3);
  }
  return uVar2;
}

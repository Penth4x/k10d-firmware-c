/* @k10d check_and_execute_object_action @ 0x1047bde0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates object state via helper calls and conditionally executes an action routine.
 * summary:
 *   The function performs a series of checks on the object pointed to by param_1. It first
 *   calls an unknown function at 0x10477f54 with a field at offset 0x50. If that returns 0,
 *   it calls another function at 0x1047e63e with a field at offset 0x48. If that is non-
 *   zero, it calls check_and_cleanup_object_field. If that returns true, it calls
 *   init_object_and_dispatch_event with fields at offsets 0x5c, 0x20, and 0x64. Finally, if
 *   the field at offset 0x34 is 0, it calls process_status_flags_and_dispatch and returns
 *   its result; otherwise, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int check_and_execute_object_action(void *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = (*(code *)0x10477f54/*ROM*/)(*(uint32_t *)((int)param_1 + 0x50));
  iVar3 = 0;
  if ((((iVar1 == 0) && (iVar1 = (*(code *)0x1047e63e/*ROM*/)((int)param_1 + 0x48), iVar1 != 0)) &&
      (bVar2 = check_and_cleanup_object_field(param_1), bVar2)) &&
     (init_object_and_dispatch_event(*(uint32_t *)((int)param_1 + 0x5c),(int)param_1 + 0x20,
                   *(uint32_t *)((int)param_1 + 100)), *(int *)((int)param_1 + 0x34) == 0)) {
    iVar3 = process_status_flags_and_dispatch(param_1);
  }
  return iVar3;
}

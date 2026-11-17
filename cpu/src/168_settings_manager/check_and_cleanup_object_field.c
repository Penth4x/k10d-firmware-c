/* @k10d check_and_cleanup_object_field @ 0x1047bd92
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_cleanup_object_field(void *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)0x10477f54/*ROM*/)(*(uint32_t *)((int)param_1 + 0x50));
  if (iVar1 == 0) {
    call_two_helpers_on_field_c(*(uint32_t *)((int)param_1 + 0x50));
    call_helper_with_lock_10481298(*(int *)((int)param_1 + 0x58),*(void **)((int)param_1 + 100));
    *(uint8_t *)((int)param_1 + 0x48) = 0;
    (*(code *)0x1047e67a/*ROM*/)();
  }
  return iVar1 == 0;
}

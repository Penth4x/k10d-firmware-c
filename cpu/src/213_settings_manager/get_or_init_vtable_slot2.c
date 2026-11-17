/* @k10d get_or_init_vtable_slot2 @ 0x104af4fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_or_init_vtable_slot2(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x14);
  if (iVar1 == 0) {
    check_byte_at_offset_0x16((int)param_1);
  }
  return iVar1;
}

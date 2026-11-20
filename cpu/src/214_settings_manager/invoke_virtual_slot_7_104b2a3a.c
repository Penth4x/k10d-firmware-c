/* @k10d invoke_virtual_slot_7_104b2a3a @ 0x104b2a3a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_slot_7_104b2a3a(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[7].fn)((int)((vtbl_entry*)(*piVar1))[7].adj + (int)piVar1);
  }
  return piVar1 != (int *)0x0;
}

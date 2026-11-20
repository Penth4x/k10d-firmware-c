/* @k10d invoke_virtual_slot_two_104272e4 @ 0x104272e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_slot_two_104272e4(int *param_1, uint32_t param_x1, uint32_t param_x2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1);
    param_1[4] = iVar2;
  }
  return piVar1 != (int *)0x0;
}

/* @k10d invoke_virtual_method_on_object_10427008 @ 0x10427008
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_object_10427008(int param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1),
     iVar2 != 0)) {
    iVar2 = **(int **)(param_1 + 0x3c);
    uVar3 = (**(code **)(iVar2 + 0x1c))
                      ((int)*(int **)(param_1 + 0x3c) + (int)*(short *)(iVar2 + 0x18),param_2);
  }
  return uVar3;
}

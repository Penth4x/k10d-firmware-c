/* @k10d invoke_virtual_method_on_object_10419afe @ 0x10419afe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_object_10419afe(int param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x4c);
  (**(code **)(iVar1 + 0x5c))
            ((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar1 + 0x58),param_2,(int)param_2 + 4
             ,(int)param_2 + 8);
  return;
}

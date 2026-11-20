/* @k10d invoke_virtual_method_on_object_10419b48 @ 0x10419b48
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_object_10419b48(int param_1,uint16_t param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x4c);
  (((vtbl_entry*)(iVar1))[12].fn)((int)*(int **)(param_1 + 0x4c) + (int)((vtbl_entry*)(iVar1))[12].adj,param_2)
  ;
  return;
}

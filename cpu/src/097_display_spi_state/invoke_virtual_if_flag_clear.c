/* @k10d invoke_virtual_if_flag_clear @ 0x10419e74
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_if_flag_clear(int param_1)

{
  int iVar1;
  
  iVar1 = query_object_state_flag_104f357a();
  if (iVar1 == 0) {
    iVar1 = **(int **)(param_1 + 0x4c);
    (**(code **)(iVar1 + 0x84))((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar1 + 0x80));
  }
  return;
}

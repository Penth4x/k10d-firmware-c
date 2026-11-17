/* @k10d invoke_virtual_slot_4_on_nested_object_1040fba2 @ 0x1040fba2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_4_on_nested_object_1040fba2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + 8);
  (**(code **)(iVar1 + 0x24))
            (*(int *)(param_1 + 0x6c) + 8 + (int)*(short *)(iVar1 + 0x20),param_1 + 8);
  return;
}

/* @k10d invoke_virtual_slot_two_on_three_objects @ 0x104e7cac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_on_three_objects(void *param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar2 + 0x18),0);
  iVar2 = **(int **)((int)param_1 + 8);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)((int)param_1 + 8) + (int)*(short *)(iVar2 + 0x18),0);
  piVar1 = (int *)get_or_create_sram_object_1039fa94();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),param_2);
  return 1;
}

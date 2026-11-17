/* @k10d invoke_virtual_method_with_id @ 0x10432d9e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 117_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_with_id(uint32_t param_x0)

{
  int iVar1;
  int iVar2;
  
  iVar1 = get_or_init_singleton_object_10516bf2();
  iVar2 = **(int **)(iVar1 + 4);
  (**(code **)(iVar2 + 0x44))((int)*(int **)(iVar1 + 4) + (int)*(short *)(iVar2 + 0x40),0x150001,0);
  return;
}

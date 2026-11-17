/* @k10d invoke_virtual_slot_two_103a98b0 @ 0x103a98b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_103a98b0(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  (**(code **)(iVar1 + 0x14))
            ((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x10),0x1120069,0);
  call_helper_on_fetched_pointer();
  clear_struct_field_at_offset_8(param_1);
  return 0;
}

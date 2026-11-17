/* @k10d invoke_virtual_slot_and_set_flag_104a5b1a @ 0x104a5b1a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_set_flag_104a5b1a(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14);
  iVar1 = (**(code **)(iVar1 + 0x1c))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar1 + 0x18),0xc);
  write_word_to_dynamic_array(param_2,0,(ushort)(iVar1 != 0));
  return;
}

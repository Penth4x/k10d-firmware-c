/* @k10d invoke_virtual_and_clear_slots @ 0x104a5abc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_and_clear_slots(int param_1,int param_2)

{
  uint8_t uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x20);
  uVar1 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0x20) + (int)((vtbl_entry*)(iVar2))[2].adj,0);
  write_byte_to_struct_offset_104a8be2(param_2,0,uVar1);
  write_byte_to_struct_offset_104a8be2(param_2,1,0);
  write_byte_to_struct_offset_104a8be2(param_2,2,0);
  write_byte_to_struct_offset_104a8be2(param_2,3,0);
  return;
}

/* @k10d query_and_report_four_states @ 0x104a56c6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_and_report_four_states(int param_1,int param_2)

{
  uint8_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = **(int **)(param_1 + 0x10);
  iVar2 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar2))[2].adj,0xc);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else if (iVar2 == 1) {
    uVar1 = 1;
  }
  write_byte_to_struct_offset_104a8be2(param_2,0,uVar1);
  uVar1 = 0;
  iVar2 = **(int **)(param_1 + 0x10);
  iVar2 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar2))[2].adj,0xd);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else if (iVar2 == 1) {
    uVar1 = 1;
  }
  else if (iVar2 == 2) {
    uVar1 = 2;
  }
  write_byte_to_struct_offset_104a8be2(param_2,1,uVar1);
  uVar1 = 0;
  iVar2 = **(int **)(param_1 + 0x10);
  iVar2 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar2))[2].adj,0xe);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else if (iVar2 == 1) {
    uVar1 = 1;
  }
  else if (iVar2 == 2) {
    uVar1 = 2;
  }
  else if (iVar2 == 3) {
    uVar1 = 3;
  }
  write_byte_to_struct_offset_104a8be2(param_2,2,uVar1);
  uVar1 = 0;
  iVar2 = **(int **)(param_1 + 0x10);
  iVar2 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar2))[2].adj,0x10);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else if (iVar2 == 1) {
    uVar1 = 1;
  }
  write_byte_to_struct_offset_104a8be2(param_2,3,uVar1);
  return;
}

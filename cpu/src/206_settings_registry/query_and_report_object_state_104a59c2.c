/* @k10d query_and_report_object_state_104a59c2 @ 0x104a59c2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object to retrieve state values and passes them to a
 *   reporting function.
 * summary:
 *   The function retrieves a pointer from param_1+0x18 and calls virtual slot 2 (offset
 *   0x14) with arguments 1 and 8. It clamps the first result to 0-8 and passes it to
 *   write_byte_to_struct_offset_104a8be2 with index 0. It then calls the same virtual
 *   method with argument 8, passing the result to write_byte_to_struct_offset_104a8be2 with
 *   index 1, and finally passes the return value of a third call (or extraout_var) with
 *   index 2 and a constant 0 with index 3. The specific camera subsystem is not
 *   identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_and_report_object_state_104a59c2(int param_1,int param_2)

{
  uint8_t extraout_var;
  uint32_t uVar1;
  uint8_t uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = **(int **)(param_1 + 0x18);
  uVar1 = (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)*(int **)(param_1 + 0x18) + (int)((vtbl_entry*)(iVar3))[2].adj,1);
  switch(uVar1) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = 2;
    break;
  case 3:
    uVar2 = 3;
    break;
  case 4:
    uVar2 = 4;
    break;
  case 5:
    uVar2 = 5;
    break;
  case 6:
    uVar2 = 6;
    break;
  case 7:
    uVar2 = 7;
    break;
  case 8:
    uVar2 = 8;
  }
  write_byte_to_struct_offset_104a8be2(param_2,0,uVar2);
  iVar3 = **(int **)(param_1 + 0x18);
  uVar2 = (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)*(int **)(param_1 + 0x18) + (int)((vtbl_entry*)(iVar3))[2].adj,8);
  write_byte_to_struct_offset_104a8be2(param_2,1,uVar2);
  iVar3 = **(int **)(param_1 + 0x18);
  (((vtbl_entry*)(iVar3))[2].fn)((int)*(int **)(param_1 + 0x18) + (int)((vtbl_entry*)(iVar3))[2].adj,8);
  write_byte_to_struct_offset_104a8be2(param_2,2,extraout_var);
  write_byte_to_struct_offset_104a8be2(param_2,3,0);
  return;
}

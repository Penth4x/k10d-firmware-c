/* @k10d report_two_virtual_states @ 0x104a555c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Queries two virtual objects for their current state and forwards the results to a
 *   reporting function.
 * summary:
 *   The function retrieves a virtual object from param_1+0x10 and calls its virtual slot 2
 *   (offset 0x14) to get a state value. It normalizes this value (with a special check for
 *   state 2 via slot 3) and passes it to write_byte_to_struct_offset_104a8be2 with index 0.
 *   It repeats this process for the object at param_1+0x14, passing the result with index
 *   1. Finally, it calls query_object_slot_three_104a6a48 to get a third value (clamped to
 *   0 or 1) and passes it with index 2, and passes 0 with index 3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void report_two_virtual_states(int param_1,int param_2)

{
  uint32_t uVar1;
  uint8_t uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = **(int **)(param_1 + 0x10);
  uVar1 = (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  switch(uVar1) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  case 2:
    iVar3 = **(int **)(param_1 + 0x10);
    iVar3 = (((vtbl_entry*)(iVar3))[3].fn)
                      ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar3))[3].adj,4);
    uVar2 = 0;
    if (iVar3 == 0) {
      uVar2 = 2;
    }
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
    break;
  case 9:
    uVar2 = 9;
    break;
  case 10:
    uVar2 = 10;
    break;
  case 0xb:
    uVar2 = 0xb;
    break;
  case 0xc:
    uVar2 = 0xc;
    break;
  case 0xd:
    uVar2 = 0xd;
    break;
  case 0xe:
    uVar2 = 0xe;
    break;
  case 0xf:
    uVar2 = 0xf;
    break;
  case 0x10:
    uVar2 = 0x10;
    break;
  case 0x11:
    uVar2 = 0x11;
  }
  write_byte_to_struct_offset_104a8be2(param_2,0,uVar2);
  uVar2 = 0;
  iVar3 = **(int **)(param_1 + 0x14);
  uVar1 = (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar3))[2].adj,8);
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
    break;
  case 9:
    uVar2 = 9;
    break;
  case 10:
    uVar2 = 10;
    break;
  case 0xb:
    uVar2 = 0xb;
    break;
  case 0xc:
    uVar2 = 0xc;
    break;
  case 0xd:
    uVar2 = 0xd;
    break;
  case 0xe:
    uVar2 = 0xe;
    break;
  case 0xf:
    uVar2 = 0xf;
    break;
  case 0x10:
    uVar2 = 0x10;
    break;
  case 0x11:
    uVar2 = 0x11;
    break;
  case 0x12:
    uVar2 = 0x12;
  }
  write_byte_to_struct_offset_104a8be2(param_2,1,uVar2);
  iVar3 = query_object_slot_three_104a6a48(param_1);
  uVar2 = 0;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else if (iVar3 == 1) {
    uVar2 = 1;
  }
  write_byte_to_struct_offset_104a8be2(param_2,2,uVar2);
  write_byte_to_struct_offset_104a8be2(param_2,3,0);
  return;
}

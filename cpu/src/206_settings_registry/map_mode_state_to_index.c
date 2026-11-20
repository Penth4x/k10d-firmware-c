/* @k10d map_mode_state_to_index @ 0x104a1f5e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_state_to_index(int param_1,int param_2)

{
  uint32_t uVar1;
  uint16_t uVar2;
  int iVar3;
  
  uVar2 = 0;
  uVar1 = call_virtual_slot_two_104a290e(__frv_reg_unset(4));
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
    iVar3 = **(int **)(param_1 + 0x14);
    uVar1 = (((vtbl_entry*)(iVar3))[2].fn)
                      ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar3))[2].adj,8);
    switch(uVar1) {
    case 0:
    case 4:
    case 9:
    case 10:
    case 0x11:
    case 0x12:
      goto switchD_104a1faa_caseD_0;
    case 1:
    case 8:
    case 0xf:
    case 0x10:
      uVar2 = 6;
      break;
    case 2:
    case 7:
    case 0xd:
      uVar2 = 5;
      break;
    case 3:
      goto switchD_104a1faa_caseD_3;
    case 5:
      uVar2 = 7;
      break;
    case 6:
    case 0xb:
    case 0xc:
    case 0xe:
      uVar2 = 8;
    }
    break;
  case 3:
switchD_104a1faa_caseD_0:
    uVar2 = 2;
    break;
  case 4:
    uVar2 = 4;
    break;
  case 5:
  case 7:
  case 10:
    uVar2 = 3;
    break;
  case 6:
    uVar2 = 4;
    break;
  case 8:
  case 9:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
    uVar2 = 1;
    break;
  case 0xd:
  case 0xe:
  case 0xf:
switchD_104a1faa_caseD_3:
    uVar2 = 0;
  }
  write_word_to_dynamic_array(param_2,0,uVar2);
  return;
}

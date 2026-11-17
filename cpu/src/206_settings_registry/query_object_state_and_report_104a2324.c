/* @k10d query_object_state_and_report_104a2324 @ 0x104a2324
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_object_state_and_report_104a2324(int param_1,int param_2)

{
  uint32_t uVar1;
  uint16_t uVar2;
  int iVar3;
  uintptr_t sp;
  int aiStack_10 [2];
  
  iVar3 = **(int **)(param_1 + 0xc);
  iVar3 = (**(code **)(iVar3 + 0x1c))
                    ((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar3 + 0x18),0xf);
  if (iVar3 == 0) {
    compute_two_byte_sum_value(param_1,aiStack_10);
    if ((aiStack_10[0] == 0) &&
       (iVar3 = **(int **)(param_1 + 0xc),
       iVar3 = (**(code **)(iVar3 + 0x1c))
                         ((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar3 + 0x18),0x10),
       iVar3 == 0)) {
      uVar1 = call_virtual_slot_two_104a290e(param_1);
      switch(uVar1) {
      case 8:
      case 9:
      case 0xb:
      case 0xc:
      case 0x10:
      case 0x11:
        uVar2 = 1;
        break;
      default:
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
  }
  write_word_to_dynamic_array(param_2,0,uVar2);
  return;
}

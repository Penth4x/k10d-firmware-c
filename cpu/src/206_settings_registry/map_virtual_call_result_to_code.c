/* @k10d map_virtual_call_result_to_code @ 0x104a4a88
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_virtual_call_result_to_code(int param_1,int param_2)

{
  uint16_t uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x10);
  iVar2 = (**(code **)(iVar2 + 0x14))
                    ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar2 + 0x10),9);
  if (iVar2 == 1) {
    iVar2 = **(int **)(param_1 + 0x10);
    iVar2 = (**(code **)(iVar2 + 0x14))
                      ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar2 + 0x10),10);
    if (iVar2 == 0x20) {
      uVar1 = 6;
    }
    else {
      if (iVar2 < 0x21) {
        if (iVar2 == 4) {
          uVar1 = 3;
          goto LAB_104a4b58;
        }
        if (iVar2 < 5) {
          if (iVar2 == 1) {
            uVar1 = 1;
            goto LAB_104a4b58;
          }
          if (iVar2 == 2) {
            uVar1 = 2;
            goto LAB_104a4b58;
          }
        }
        else {
          if (iVar2 == 8) {
            uVar1 = 4;
            goto LAB_104a4b58;
          }
          if (iVar2 == 0x10) {
            uVar1 = 5;
            goto LAB_104a4b58;
          }
        }
      }
      else {
        if (iVar2 == 0x100) {
          uVar1 = 9;
          goto LAB_104a4b58;
        }
        if (iVar2 < 0x101) {
          if (iVar2 == 0x40) {
            uVar1 = 7;
            goto LAB_104a4b58;
          }
          if (iVar2 == 0x80) {
            uVar1 = 8;
            goto LAB_104a4b58;
          }
        }
        else {
          if (iVar2 == 0x200) {
            uVar1 = 10;
            goto LAB_104a4b58;
          }
          if (iVar2 == 0x400) {
            uVar1 = 0xb;
            goto LAB_104a4b58;
          }
        }
      }
      uVar1 = 0;
    }
  }
  else if (iVar2 == 2) {
    uVar1 = 0xfffe;
  }
  else {
    uVar1 = 0xffff;
  }
LAB_104a4b58:
  write_word_to_dynamic_array(param_2,0,uVar1);
  return;
}

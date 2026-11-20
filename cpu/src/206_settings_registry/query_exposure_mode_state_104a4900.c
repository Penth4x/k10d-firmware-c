/* @k10d query_exposure_mode_state_104a4900 @ 0x104a4900
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads exposure mode and related camera state via virtual calls and writes a status word
 *   to a destination buffer.
 * summary:
 *   The function retrieves an object pointer from param_1+0x1c and invokes virtual slot 2
 *   (offset 0x14) with various integer arguments (4, 10, 6, 7, 9) to query camera state. It
 *   maps the result of the query with argument 6 into a specific status code (uVar3) using
 *   a switch statement, and checks a virtual call with argument 3 to set bit 8 (0x100).
 *   Finally, it calls write_word_to_dynamic_array to write the status code to param_2, and
 *   if a specific condition is met, writes a combined value from queries 10 and 9.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_exposure_mode_state_104a4900(int param_1,int param_2)

{
  uint32_t uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = **(int **)(param_1 + 0x1c);
  iVar4 = (((vtbl_entry*)(iVar4))[2].fn)
                    ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar4))[2].adj,4);
  if ((iVar4 == 0) &&
     (iVar4 = **(int **)(param_1 + 0x1c),
     iVar4 = (((vtbl_entry*)(iVar4))[2].fn)
                       ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar4))[2].adj,10),
     iVar4 == 0)) {
    uVar3 = 1;
  }
  else {
    iVar4 = **(int **)(param_1 + 0x1c);
    uVar1 = (((vtbl_entry*)(iVar4))[2].fn)
                      ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar4))[2].adj,6);
    switch(uVar1) {
    case 0:
      uVar3 = 2;
      break;
    case 1:
      uVar3 = 4;
      break;
    case 2:
      uVar3 = 0;
      break;
    case 3:
      uVar3 = 3;
      break;
    case 4:
      uVar3 = 1;
      break;
    case 5:
      uVar3 = 5;
      break;
    case 6:
      uVar3 = 6;
      break;
    case 7:
      iVar4 = **(int **)(param_1 + 0x1c);
      iVar4 = (((vtbl_entry*)(iVar4))[2].fn)
                        ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar4))[2].adj,7);
      if (iVar4 == 8) {
        uVar3 = 6;
      }
      else {
        uVar3 = 7;
      }
      break;
    case 8:
      uVar3 = 9;
      break;
    case 9:
      uVar3 = 10;
      break;
    case 10:
      uVar3 = 0xb;
    }
    iVar4 = **(int **)(param_1 + 0x1c);
    iVar4 = (((vtbl_entry*)(iVar4))[3].fn)
                      ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar4))[3].adj,3);
    if (iVar4 != 0) {
      uVar3 = uVar3 | 0x100;
    }
  }
  write_word_to_dynamic_array(param_2,0,uVar3);
  if (*(int *)(param_2 + 4) == 2) {
    iVar4 = **(int **)(param_1 + 0x1c);
    sVar2 = (((vtbl_entry*)(iVar4))[2].fn)
                      ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar4))[2].adj,10);
    iVar4 = **(int **)(param_1 + 0x1c);
    uVar3 = (((vtbl_entry*)(iVar4))[2].fn)
                      ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar4))[2].adj,9);
    write_word_to_dynamic_array(param_2,1,sVar2 << 8 | uVar3);
  }
  return;
}

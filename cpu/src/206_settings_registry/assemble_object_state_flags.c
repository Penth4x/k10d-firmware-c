/* @k10d assemble_object_state_flags @ 0x104a2136
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Queries an object's state via virtual calls and assembles a 16-bit flag word.
 * summary:
 *   The function reads a vtable pointer from param_1+0x18 and invokes virtual slots 2 and 3
 *   with specific integer arguments (4, 10, 6, 3). Based on the return values, it sets bits
 *   in a ushort (uVar1) representing different states (e.g., 0x10, 8, 0x18, 0x40, 1).
 *   Finally, it passes this computed flag word to write_word_to_dynamic_array along with
 *   param_2 and 0. The specific meaning of the flags and the target of
 *   write_word_to_dynamic_array are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void assemble_object_state_flags(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = **(int **)(param_1 + 0x18);
  iVar2 = (**(code **)(iVar2 + 0x1c))
                    ((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar2 + 0x18),4);
  if ((iVar2 == 0) &&
     (iVar2 = **(int **)(param_1 + 0x18),
     iVar2 = (**(code **)(iVar2 + 0x14))
                       ((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar2 + 0x10),10),
     iVar2 == 0)) {
    uVar1 = 0x10;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x18);
    iVar2 = (**(code **)(iVar2 + 0x14))
                      ((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar2 + 0x10),6);
    switch(iVar2) {
    case 0:
    case 1:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      uVar1 = 8;
      break;
    case 2:
    case 3:
      uVar1 = 0x18;
      break;
    case 4:
      uVar1 = 0x10;
    }
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 9)) {
      uVar1 = uVar1 | 0x40;
    }
    iVar2 = **(int **)(param_1 + 0x18);
    iVar2 = (**(code **)(iVar2 + 0x1c))
                      ((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar2 + 0x18),3);
    if (iVar2 != 0) {
      uVar1 = uVar1 | 1;
    }
  }
  write_word_to_dynamic_array(param_2,0,uVar1);
  return;
}

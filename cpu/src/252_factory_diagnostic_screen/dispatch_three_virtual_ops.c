/* @k10d dispatch_three_virtual_ops @ 0x104e3d5a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Performs three sequential virtual method calls on an object, passing a zeroed buffer
 *   and intermediate results.
 * summary:
 *   The function initializes a 256-byte stack buffer to zero using fill_byte_array. It then
 *   calls a virtual method at offset 0x5c on an object pointed to by param_1+0x18.
 *   Following this, it executes a loop that performs three distinct virtual calls on the
 *   object at param_1+8 (slots at 0x2c, 0x4c, and 0x3c), passing the buffer and parameters
 *   param_2, param_3, and param_4. The loop terminates early if any call returns a value
 *   other than 1. Finally, it calls a virtual method at offset 0x34 and returns the result
 *   of the last loop iteration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_three_virtual_ops(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_10c [256];
  uint32_t uStack_c;
  
  fill_byte_array(auStack_10c,0,0x100);
  (**(code **)(*(int *)(param_1 + 0x18) + 0x5c))
            (*(short *)(*(int *)(param_1 + 0x18) + 0x58) + param_1,auStack_10c);
  uStack_c = 0;
  iVar1 = 0;
  iVar2 = 1;
  do {
    if (iVar1 == 0) {
      iVar2 = **(int **)(param_1 + 8);
      iVar2 = (**(code **)(iVar2 + 0x2c))
                        ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x28),auStack_10c,1,
                         &uStack_c);
    }
    else if (iVar1 == 1) {
      iVar2 = **(int **)(param_1 + 8);
      iVar2 = (**(code **)(iVar2 + 0x4c))
                        ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x48),uStack_c,
                         param_2,0);
    }
    else if (iVar1 == 2) {
      iVar2 = **(int **)(param_1 + 8);
      iVar2 = (**(code **)(iVar2 + 0x3c))
                        ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x38),uStack_c,
                         param_3,param_4);
    }
    iVar1 = iVar1 + 1;
  } while ((iVar1 < 3) && (iVar2 == 1));
  iVar1 = **(int **)(param_1 + 8);
  (**(code **)(iVar1 + 0x34))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar1 + 0x30),uStack_c);
  return iVar2;
}

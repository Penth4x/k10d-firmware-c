/* @k10d invoke_virtual_slot_8_on_two_objects @ 0x104b2dde
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 8 on two objects stored in a struct if a flag at offset 0x18 is
 *   zero.
 * summary:
 *   Checks if the 4-byte value at param_1+0x18 is zero. If so, sets it to 6, then calls
 *   virtual slot 8 (offset 0x44) on the object at param_1+8 with arguments 0,0. If that
 *   call returns 4, it resets the flag to 0 and calls virtual slot 8 on the object at
 *   param_1+4. Returns 1 if the flag was initially zero, else 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_8_on_two_objects(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    *(uint32_t *)(param_1 + 0x18) = 6;
    iVar2 = **(int **)(param_1 + 8);
    iVar2 = (**(code **)(iVar2 + 0x44))
                      ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x40),0,0);
    if (iVar2 == 4) {
      *(uint32_t *)(param_1 + 0x18) = 0;
      iVar2 = **(int **)(param_1 + 4);
      (**(code **)(iVar2 + 0x44))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x40));
    }
    uVar1 = 1;
  }
  return uVar1;
}

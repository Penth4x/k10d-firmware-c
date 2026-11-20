/* @k10d set_object_state_and_notify @ 0x104cb3fe
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Updates state fields at offsets 0x210 and 0x214 of an object and conditionally invokes
 *   a virtual method.
 * summary:
 *   The function checks a flag at offset 0x218. If clear and param_2 is non-zero, it stores
 *   param_4 and param_3 into the object, calls virtual slot 2 on the vtable at offset 0x1c,
 *   and returns 1. If the flag is clear and param_2 is zero, it sets the state to 0 or 3
 *   based on offset 0x219 and returns 0. If the flag at 0x218 is set, it sets the state to
 *   2 and returns 0. No specific camera subsystem is identifiable from the generic object
 *   manipulation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_object_state_and_notify(int param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x218) == '\0') {
    if (param_2 == 0) {
      uVar1 = 3;
      if (*(char *)(param_1 + 0x219) == '\0') {
        uVar1 = 0;
      }
      *(uint32_t *)(param_1 + 0x214) = uVar1;
      *(uint32_t *)(param_1 + 0x210) = param_3;
      uVar1 = 0;
    }
    else {
      *(uint32_t *)(param_1 + 0x214) = param_4;
      *(uint32_t *)(param_1 + 0x210) = param_3;
      iVar2 = **(int **)(param_1 + 0x1c);
      (((vtbl_entry*)(iVar2))[2].fn)
                ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar2))[2].adj,param_3,param_4);
      uVar1 = 1;
    }
  }
  else {
    *(uint32_t *)(param_1 + 0x214) = 2;
    *(uint32_t *)(param_1 + 0x210) = param_3;
    uVar1 = 0;
  }
  return uVar1;
}

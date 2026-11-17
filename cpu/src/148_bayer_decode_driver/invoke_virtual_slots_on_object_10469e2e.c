/* @k10d invoke_virtual_slots_on_object_10469e2e @ 0x10469e2e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls four virtual methods on an object stored at param_1+0x23c, passing param_2 to the
 *   second call.
 * summary:
 *   The function retrieves a vtable pointer from an object at offset 0x23c of param_1 and
 *   invokes virtual slots at offsets 0x2c, 0x44, and 0x54. The call at slot 0x54 is
 *   repeated in a loop until it returns a non-zero value. The call at slot 0x2c is made
 *   both before and after the loop. No specific camera subsystem behavior is evident from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slots_on_object_10469e2e(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x23c) + 4);
  (**(code **)(iVar1 + 0x2c))(*(int *)(param_1 + 0x23c) + (int)*(short *)(iVar1 + 0x28));
  iVar1 = *(int *)(*(int *)(param_1 + 0x23c) + 4);
  (**(code **)(iVar1 + 0x44))(*(int *)(param_1 + 0x23c) + (int)*(short *)(iVar1 + 0x40),param_2,0,0)
  ;
  iVar1 = *(int *)(*(int *)(param_1 + 0x23c) + 4);
  for (iVar1 = (**(code **)(iVar1 + 0x54))
                         (*(int *)(param_1 + 0x23c) + (int)*(short *)(iVar1 + 0x50)); iVar1 == 0;
      iVar1 = (**(code **)(iVar1 + 0x54))(*(int *)(param_1 + 0x23c) + (int)*(short *)(iVar1 + 0x50))
      ) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x23c) + 4);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x23c) + 4);
  (**(code **)(iVar1 + 0x2c))(*(int *)(param_1 + 0x23c) + (int)*(short *)(iVar1 + 0x28));
  return;
}

/* @k10d poll_until_flag_set @ 0x104c1016
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Polls a status field in a struct until a specific bit in a result value matches a mask,
 *   with a timeout.
 * summary:
 *   The function enters a loop that repeatedly calls invoke_object_callback_and_release and
 *   copy_object_state_to_buffer on the object at param_1. It checks if the value returned
 *   by scan_short_array_for_nonzero has any bits set that match the mask in param_4. The
 *   loop continues until this condition is met, the object's status byte at offset 0x1d
 *   becomes non-zero, or a timeout (param_2) is reached. If param_4 is 0xffffffff, it
 *   performs a single non-blocking check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_until_flag_set(int param_1,int param_2,void *param_3,uint param_4)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  int iStack_18;
  
  if (param_4 == 0xffffffff) {
    *(int *)(param_1 + 0x38) = param_2;
    iVar3 = invoke_object_callback_and_release(param_1);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = copy_object_state_to_buffer(param_1,param_3);
    }
  }
  else {
    bVar2 = true;
    sVar1 = 0;
    sVar6 = 0;
    iStack_18 = param_2;
    while (*(char *)(param_1 + 0x1d) == '\0') {
      *(int *)(param_1 + 0x38) = iStack_18;
      iVar4 = invoke_object_callback_and_release(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      if (bVar2) {
        sVar1 = *(short *)(param_1 + 0x44);
        sVar6 = *(short *)(param_1 + 0x46);
        bVar2 = false;
      }
      else if ((*(short *)(param_1 + 0x44) == sVar1) && (*(short *)(param_1 + 0x46) == sVar6)) {
        return 0;
      }
      iVar4 = copy_object_state_to_buffer(param_1,param_3);
      if ((iVar4 != 0) && (uVar5 = scan_short_array_for_nonzero(param_1,param_3), (uVar5 & param_4) != 0)) {
        return iVar4;
      }
      if (iStack_18 == 0) {
        iStack_18 = 2;
      }
    }
    iVar4 = 0;
  }
  return iVar4;
}

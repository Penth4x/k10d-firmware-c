/* @k10d dispatch_buffer_write_request @ 0x104ade98
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates and routes a write request to a buffer object, handling offset clamping and
 *   error states.
 * summary:
 *   The function checks if the requested write range (param_2 + param_3 * element_size)
 *   exceeds the current buffer size (param_1+0x24). If it does, it clamps the offset and
 *   length to fit within the buffer. It then calls dispatch_virtual_method_with_lock to
 *   perform the operation, likely a write or copy, using the buffer pointers stored at
 *   param_1+0x20 and param_1+0x28. Based on the return code from
 *   dispatch_virtual_method_with_lock, it invokes different error handlers
 *   (invoke_virtual_slot_two_104ae334, invoke_virtual_slot_two_104ae30c,
 *   invoke_virtual_slot_two_104ae3ac) or a success handler
 *   (invoke_virtual_slot_two_104af0c8). Finally, it calls invoke_virtual_slot_4_104af106 to
 *   finalize the state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_buffer_write_request(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  
  pvVar4 = *(void **)(param_1 + 0x20);
  piVar5 = *(int **)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x34);
  if (*(uint *)(param_1 + 0x24) < uVar3 * param_3) {
    uVar6 = *(uint *)(param_1 + 0x24) / uVar3;
    *(uint *)(param_1 + 0x2c) = param_2 + uVar6;
    *(uint *)(param_1 + 0x30) = param_3 - uVar6;
    param_3 = uVar6;
  }
  else {
    zero_struct_fields_20_to_30_104adfa2(param_1);
  }
  if (((pvVar4 != (void *)0x0) && (piVar5 != (int *)0x0)) && (uVar3 != 0)) {
    iVar1 = dispatch_virtual_method_with_lock(piVar5,pvVar4,param_2,param_3);
    if (iVar1 == 0) {
      uVar2 = invoke_virtual_slot_two_104af0c8((int *)param_1,pvVar4,param_3 * uVar3);
      return uVar2;
    }
    if (iVar1 == 3) {
      zero_struct_fields_20_to_30_104adfa2(param_1);
      invoke_virtual_slot_two_104ae334((void *)param_1);
      goto LAB_104adf90;
    }
    if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 9)) {
      zero_struct_fields_20_to_30_104adfa2(param_1);
      invoke_virtual_slot_two_104ae30c((void *)param_1);
      goto LAB_104adf90;
    }
  }
  zero_struct_fields_20_to_30_104adfa2(param_1);
  invoke_virtual_slot_two_104ae3ac(param_1);
LAB_104adf90:
  uVar2 = invoke_virtual_slot_4_104af106((int *)param_1);
  return uVar2;
}

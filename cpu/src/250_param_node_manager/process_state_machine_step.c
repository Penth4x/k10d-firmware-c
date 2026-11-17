/* @k10d process_state_machine_step @ 0x104dfbe2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Executes a state transition based on the value of the object's state field at offset
 *   0x44.
 * summary:
 *   The function reads a state flag from param_1[0x11] (offset 0x44). If the state is 0, it
 *   checks a condition involving param_1[0xe] and param_1[0x12], potentially calling
 *   invoke_virtual_method_on_nested_object_104dfc4c and updating the state to 1. If the
 *   state is 1 or the initial condition fails, it calls copy_twenty_byte_struct and
 *   process_buffer_state_transition_104dfc94. It returns a status code (1, 5, or the result
 *   of the callee).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_state_machine_step(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 1;
  uVar2 = *(uint *)param_1[0xe];
  if (param_1[0x11] == 0) {
    *param_1 = param_1[0x12];
    if (uVar2 < param_1[0x12]) {
      iVar1 = invoke_virtual_method_on_nested_object_104dfc4c(param_1);
      if (iVar1 == 1) {
        *param_1 = *param_1 - uVar2;
        param_1[0x11] = 1;
        iVar1 = 5;
      }
    }
    else {
      copy_twenty_byte_struct((uint8_t *)param_1[0xf],(uint *)param_1[0xe]);
      iVar1 = process_buffer_state_transition_104dfc94(param_1);
    }
  }
  else if (param_1[0x11] == 1) {
    copy_twenty_byte_struct((uint8_t *)param_1[0xf],(uint *)param_1[0xe]);
    iVar1 = process_buffer_state_transition_104dfc94(param_1);
  }
  return iVar1;
}

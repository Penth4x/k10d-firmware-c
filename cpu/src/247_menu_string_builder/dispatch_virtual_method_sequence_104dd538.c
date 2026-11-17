/* @k10d dispatch_virtual_method_sequence_104dd538 @ 0x104dd538
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Invokes a series of helper functions and virtual methods on an object based on a state
 *   value.
 * summary:
 *   The function calls append_string_to_buffer twice with specific constants, followed by a
 *   sequence of ten helper functions (handle_state_two_event through
 *   empty_virtual_slot_51_104dd9c6) passing param_1, param_2, and param_3. It then branches
 *   based on the return value of a function at 0x104d6dbc, executing different sets of
 *   virtual method calls on the object pointed to by param_3 + 0x2b18. Finally, it calls
 *   append_string_to_buffer again with a constant.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_sequence_104dd538(uint32_t param_1,int *param_2,int param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  uint uVar5;
  
  append_string_to_buffer(param_2,0x105baeb8/*ROM*/);
  append_string_to_buffer(param_2,0x105baec4/*ROM*/);
  handle_state_two_event(param_1,param_2,param_3);
  handle_status_two_failure_104dd7a0(param_1,param_2,param_3);
  dispatch_virtual_slot_51_104dd8b0(param_1,param_2,param_3);
  dispatch_virtual_slot_51_104dd85a(param_1,param_2,param_3);
  dispatch_virtual_slot_51_104dd804(param_1,param_2,param_3);
  dispatch_virtual_slot_51_104dd96e(param_1,param_2,param_3);
  empty_virtual_slot_51_104dd96a(param_1,param_2,param_3);
  empty_virtual_slot_51_104dd96c(param_1,param_2,param_3);
  empty_virtual_slot_104dd9c4(param_1,param_2,param_3);
  empty_virtual_slot_51_104dd9c6(param_1,param_2,param_3);
  append_string_to_buffer(param_2,0x105baed4/*ROM*/);
  iVar1 = (*(code *)0x104d6dbc/*ROM*/)(param_3);
  if (iVar1 == 0) {
    uVar2 = add_offset_to_pointer_104d6882(__frv_reg_unset(4));
    uVar3 = (**(code **)(*(int *)(param_3 + 0x2b18) + 0x14))
                      (*(short *)(*(int *)(param_3 + 0x2b18) + 0x10) + param_3);
    (*(code *)0x104d8af4/*ROM*/)(uVar2,uVar3);
    uVar2 = add_offset_to_pointer_104d6882(param_3);
    uVar3 = (**(code **)(*(int *)(param_3 + 0x2b18) + 0x1c))
                      (*(short *)(*(int *)(param_3 + 0x2b18) + 0x18) + param_3);
    forward_param_to_helper_104d8b04(uVar2,uVar3);
    dispatch_eight_subroutines(param_1,param_2,param_3);
  }
  else {
    iVar1 = (*(code *)0x104d6dbc/*ROM*/)(param_3);
    if (iVar1 == 2) {
      uVar2 = add_offset_to_pointer_104d6882(__frv_reg_unset(4));
      uVar3 = (**(code **)(*(int *)(param_3 + 0x2b18) + 0x24))
                        (*(short *)(*(int *)(param_3 + 0x2b18) + 0x20) + param_3);
      (*(code *)0x104d8af4/*ROM*/)(uVar2,uVar3);
      dispatch_eight_subroutines(param_1,param_2,param_3);
    }
    else {
      uVar5 = 1;
      uVar2 = add_offset_to_pointer_104d6882(param_3);
      uVar3 = (**(code **)(*(int *)(param_3 + 0x2b18) + 0x34))
                        (*(short *)(*(int *)(param_3 + 0x2b18) + 0x30) + param_3);
      (*(code *)0x104d8af4/*ROM*/)(uVar2,uVar3);
      uVar2 = add_offset_to_pointer_104d6882(param_3);
      uVar3 = (**(code **)(*(int *)(param_3 + 0x2b18) + 0x3c))
                        (*(short *)(*(int *)(param_3 + 0x2b18) + 0x38) + param_3);
      forward_param_to_helper_104d8b04(uVar2,uVar3);
      dispatch_eight_subroutines(param_1,param_2,param_3);
      uVar4 = (**(code **)(*(int *)(param_3 + 0x2b18) + 0x2c))
                        (*(short *)(*(int *)(param_3 + 0x2b18) + 0x28) + param_3);
      if (1 < uVar4) {
        do {
          iVar1 = (**(code **)(*(int *)(param_3 + 0x2b18) + 0x44))
                            (*(short *)(*(int *)(param_3 + 0x2b18) + 0x40) + param_3);
          if (iVar1 == 0) break;
          uVar2 = add_offset_to_pointer_104d6882(param_3);
          (*(code *)0x104d8af4/*ROM*/)(uVar2,iVar1);
          uVar2 = add_offset_to_pointer_104d6882(param_3);
          uVar3 = (**(code **)(*(int *)(param_3 + 0x2b18) + 0x4c))
                            (*(short *)(*(int *)(param_3 + 0x2b18) + 0x48) + param_3);
          forward_param_to_helper_104d8b04(uVar2,uVar3);
          dispatch_eight_subroutines(param_1,param_2,param_3);
          uVar5 = uVar5 + 1;
          uVar4 = (**(code **)(*(int *)(param_3 + 0x2b18) + 0x2c))
                            (*(short *)(*(int *)(param_3 + 0x2b18) + 0x28) + param_3);
        } while (uVar5 < uVar4);
      }
    }
  }
  append_string_to_buffer(param_2,0x105baee4/*ROM*/);
  return;
}

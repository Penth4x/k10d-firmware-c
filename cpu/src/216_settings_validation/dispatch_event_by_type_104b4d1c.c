/* @k10d dispatch_event_by_type_104b4d1c @ 0x104b4d1c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Reads an event type from a struct and dispatches to one of 25 handler functions based
 *   on that type.
 * summary:
 *   Calls parse_and_store_error_code with a field at offset 0x5c of param_1, a stack
 *   buffer, and a pointer to a local int (iStack_c). If parse_and_store_error_code returns
 *   0, switches on the value stored in iStack_c (0-0x18) and calls the corresponding
 *   handler function, passing param_1 and optionally the stack buffer. The handlers are a
 *   contiguous block of functions (0x104b4e22-0x104b50c8) suggesting a unified
 *   event/message dispatch mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_event_by_type_104b4d1c(int param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint extraout_r4;
  uint extraout_r4_00;
  uint extraout_r4_01;
  uint extraout_r4_02;
  uint extraout_r4_03;
  uint extraout_r4_04;
  uint extraout_r4_05;
  int *piVar4;
  uintptr_t sp;
  uint8_t auStack_5c [80];
  int iStack_c;
  
  iStack_c = 0;
  piVar4 = &iStack_c;
  iVar1 = parse_and_store_error_code(*(int *)(param_1 + 0x5c),auStack_5c,piVar4);
  if (iVar1 == 0) {
    switch(iStack_c) {
    case 0:
      uVar2 = return_zero_stub_104b4e22(param_1);
      break;
    case 1:
      uVar2 = return_zero_stub_104b4e26(param_1);
      break;
    case 2:
      uVar2 = dispatch_command_and_set_status(param_1);
      break;
    case 3:
      uVar2 = call_subroutine_with_offset_field_104b4e98(param_1,auStack_5c);
      break;
    case 4:
      bVar3 = forward_field_5c_to_helper_104b4eac(param_1,auStack_5c);
      uVar2 = (uint)bVar3;
      break;
    case 5:
      forward_param_to_callee_104b4ebe(param_1,auStack_5c);
      uVar2 = extraout_r4;
      break;
    case 6:
      uVar2 = call_subroutine_on_offset_0x5c(param_1);
      break;
    case 7:
      uVar2 = call_subroutine_with_offset_5c_104b4ee4(param_1,auStack_5c);
      break;
    case 8:
      uVar2 = call_two_helpers_on_struct_field(param_1,auStack_5c,piVar4,param_4);
      break;
    case 9:
      uVar2 = call_subroutine_with_offset_5c_104b4f2c(param_1,auStack_5c);
      break;
    case 10:
      uVar2 = call_subroutine_with_offset_5c_104b4f40(param_1);
      break;
    case 0xb:
      call_helper_with_offset_5c_104b4f54(param_1);
      uVar2 = extraout_r4_00;
      break;
    case 0xc:
      uVar2 = call_subroutine_with_offset_5c_104b4f66(param_1);
      break;
    case 0xd:
      uVar2 = check_and_process_field_5c(param_1,auStack_5c);
      break;
    case 0xe:
      forward_field_5c_to_helper_104b4faa(param_1);
      uVar2 = extraout_r4_01;
      break;
    case 0xf:
      call_subroutine_on_field_5c(param_1);
      uVar2 = extraout_r4_02;
      break;
    case 0x10:
      call_subroutine_with_offset_5c_104b4fce(param_1);
      uVar2 = extraout_r4_03;
      break;
    case 0x11:
      call_helper_with_struct_field_104b4fe0(param_1);
      uVar2 = extraout_r4_04;
      break;
    case 0x12:
      call_helper_with_offset_5c_104b4ff2(param_1);
      uVar2 = extraout_r4_05;
      break;
    case 0x13:
      uVar2 = call_subroutine_with_offset_5c_104b5004(param_1);
      break;
    case 0x14:
      uVar2 = call_sub_and_store_result(param_1);
      break;
    case 0x15:
      uVar2 = process_param_with_two_helpers(param_1,auStack_5c);
      break;
    case 0x16:
      uVar2 = query_and_store_bool_result(param_1);
      break;
    case 0x17:
      uVar2 = call_helper_and_store_result_104b50a4(param_1,auStack_5c);
      break;
    case 0x18:
      uVar2 = call_helper_and_return_one_104b50c8(param_1);
      break;
    default:
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

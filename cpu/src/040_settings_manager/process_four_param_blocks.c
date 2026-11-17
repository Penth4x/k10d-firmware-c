/* @k10d process_four_param_blocks @ 0x103960b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over four parameter blocks, processing each with a shared context and clearing
 *   it on failure.
 * summary:
 *   The function retrieves a context object and a shared parameter (likely a flag or ID)
 *   from helper functions. It then performs four sequential operations, each involving a
 *   getter (call_function_at_0x1039b688, etc.), a processor (check_bit_in_word, etc.), and
 *   a conditional reset (call_helper_with_offset_pointer_10395d84, etc.) if the processor
 *   returns zero. The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_four_param_blocks(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  uVar2 = return_r4_passthrough_104d800e();
  uVar2 = adjust_pointer_by_flag(uVar2,1);
  uVar3 = call_function_at_0x1039b688(param_1);
  iVar1 = check_bit_in_word(param_1,uVar3,uVar2);
  if (iVar1 == 0) {
    call_helper_with_offset_pointer_10395d84(param_1,0);
  }
  uVar3 = call_function_at_offset_eight(param_1);
  iVar1 = check_param_with_mode(param_1,uVar3,uVar2);
  if (iVar1 == 0) {
    call_helper_with_offset_pointer_10395da4(param_1,0);
  }
  uVar3 = call_function_at_offset_8_10395dd4(param_1);
  iVar1 = dispatch_mode_change_request_10396286(param_1,uVar3,uVar2);
  if (iVar1 == 0) {
    call_helper_with_offset_pointer_10395dc4(param_1,0);
  }
  uVar3 = call_function_at_offset_8_10395df4(param_1);
  iVar1 = check_two_condition_flags_103962e4(param_1,uVar3,uVar2);
  if (iVar1 == 0) {
    call_helper_with_offset_pointer_10395de4(param_1,0);
  }
  return;
}

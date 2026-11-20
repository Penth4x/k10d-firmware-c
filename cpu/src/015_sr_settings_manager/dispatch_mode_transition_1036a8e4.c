/* @k10d dispatch_mode_transition_1036a8e4 @ 0x1036a8e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 015_sr_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches a state transition based on two integer parameters, calling specific
 *   handlers and returning a result from a final helper.
 * summary:
 *   The function branches on the first two integers in param_2. If the first is 4 or 5, it
 *   calls call_two_helpers_with_param_1036ac46. For specific second values (0xc-0x11, 0x18,
 *   0x19), it calls one of several handlers (test_low_two_bits_of_helper,
 *   test_bits_2_and_3_of_status, forward_param_to_global_offset) and sets a local variable
 *   to a specific integer (2, 8, 9, 10, or 0xb). It then calls
 *   get_or_create_singleton_object_1036c796 and passes its result along with the local
 *   integer to read_array_element_bounded, returning the result of that call. If no branch
 *   matches, it returns param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_10557ba8 * dispatch_mode_transition_1036a8e4(cls_10557ba8 *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  cls_10557ba8 *pcVar3;
  uint32_t uVar4;
  
  if ((*param_2 == 4) || (*param_2 == 5)) {
    call_two_helpers_with_param_1036ac46(param_1);
  }
  if (*param_2 == 4) {
    iVar1 = param_2[1];
    if (iVar1 == 0xe) {
      iVar1 = test_low_two_bits_of_helper(param_1);
      if (iVar1 == 0) {
        return param_1;
      }
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar4 = 0xb;
    }
    else if (iVar1 == 0xd) {
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar4 = 8;
    }
    else if (iVar1 == 0x10) {
      iVar1 = test_low_two_bits_of_helper(param_1);
      if (iVar1 == 0) {
        return param_1;
      }
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar4 = 10;
    }
    else if (iVar1 == 0xf) {
      iVar1 = test_bits_2_and_3_of_status(param_1);
      if (iVar1 == 0) {
        return param_1;
      }
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar4 = 9;
    }
    else {
      if ((((iVar1 != 0x11) && (iVar1 != 9)) && (iVar1 != 0x18)) && (iVar1 != 0x19)) {
        if (iVar1 != 0xc) {
          return param_1;
        }
        forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
        return param_1;
      }
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar4 = 2;
    }
  }
  else {
    if (*param_2 != 6) {
      return param_1;
    }
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar4 = 2;
  }
  pcVar3 = (cls_10557ba8 *)read_array_element_bounded(uVar2,uVar4);
  return pcVar3;
}

/* @k10d conditional_combine_two_values @ 0x1040b5f4
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 094_settings_menu (unit names are model-proposed)
 * purpose:
 *   If a status check passes, combines two values from helper calls and returns the result;
 *   otherwise returns the input.
 * summary:
 *   Calls wait_for_flag_or_timeout to get a status. If non-zero, calls
 *   forward_param_to_helper_1036b8fe(0), then retrieves two values via
 *   get_or_create_singleton_object_1036c796 and read_field_at_offset_100(param_1), and
 *   combines them with read_array_element_bounded. Returns the combined value or the
 *   original param_1 if the status was zero. No camera-specific subsystem is identifiable
 *   from the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10599c24 * conditional_combine_two_values(cls_10599c24 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = wait_for_flag_or_timeout((uint32_t)param_1);
  if (iVar1 != 0) {
    forward_param_to_helper_1036b8fe(0);
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar3 = read_field_at_offset_100((uint32_t)(param_1));
    param_1 = (cls_10599c24 *)read_array_element_bounded(uVar2,uVar3);
  }
  return param_1;
}

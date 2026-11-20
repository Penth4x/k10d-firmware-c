/* @k10d init_object_with_timer_delay @ 0x10486e64
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting a field, calling a setup routine, and scheduling a
 *   5000-unit delay.
 * summary:
 *   The function writes the return value of get_or_init_singleton_104895da into offset 0x54
 *   of the object. It calls enable_display_output to perform additional setup. It then
 *   queries query_object_flag_at_offset_0x1c_1046d6f8 with the object's first field,
 *   mapping the result to 0 or 2, and passes this to dispatch_two_param_operation. Finally,
 *   it calls clear_byte_and_call_helper with a constant 5000, likely setting a timer or
 *   delay, and returns the object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b2f20 * init_object_with_timer_delay(cls_105b2f20 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)get_or_init_singleton_104895da();
  param_1->field_0x54 = (uintptr_t)(piVar1);
  enable_display_output(param_1);
  iVar2 = query_object_flag_at_offset_0x1c_1046d6f8(param_1->field_0x0);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
  }
  dispatch_two_param_operation(param_1->field_0x0,iVar3,iVar2);
  clear_byte_and_call_helper(param_1,5000);
  return param_1;
}

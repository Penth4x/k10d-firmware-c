/* @k10d configure_object_with_six_params @ 0x1043be16
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Validates a size parameter and, if under 0x40, invokes a virtual method and six helper
 *   functions on the object.
 * summary:
 *   The function checks if param_2 is less than 0x40. If true, it performs a virtual call
 *   on an object pointer stored at offset 4 of param_1, writes a computed value to offset
 *   0x1c, and calls six unnamed helper functions passing param_1 and various constants or
 *   parameters. It returns the result of the initial size check. The specific subsystem or
 *   camera role is not determinable from the provided pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool configure_object_with_six_params(void *param_1,uint param_2,uint32_t param_3,uint32_t param_4)

{
  if (param_2 < 0x40) {
    (**(code **)(*(int *)((int)param_1 + 4) + 0x2c))
              ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x28) + (int)param_1);
    **(short **)((int)param_1 + 0x1c) = (short)param_2 * 0x407 + -1;
    set_flag_with_fixed_length(param_1,param_4);
    call_helper_with_0xc000_1043bffa(param_1,0);
    call_helper_with_0xe00(param_1,0xa00);
    set_flag_via_helper(param_1,1);
    clear_or_set_flag_in_param1(param_1,param_3);
    set_flag_on_object_1043c0b2(param_1,1);
  }
  return param_2 < 0x40;
}

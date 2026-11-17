/* @k10d configure_object_with_virtual_call @ 0x1043c3ca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs a virtual call and sets object fields based on a parameter check.
 * summary:
 *   Checks if param_2 is less than 0x7c1f07c. If true, invokes a virtual method via the
 *   vtable at offset 4, calls update_status_word_bits_1043c816 twice with different
 *   arguments, calculates a value from param_2 and stores it at offset 0x1c, and calls
 *   three other functions with param_4, param_3, and 1. Returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t configure_object_with_virtual_call(void *param_1,uint param_2,int param_3,int param_4)

{
  if (param_2 < 0x7c1f07c) {
    (**(code **)(*(int *)((int)param_1 + 4) + 0x2c))
              ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x28) + (int)param_1);
    update_status_word_bits_1043c816(param_1,0x1002,0xffff);
    **(int **)((int)param_1 + 0x1c) = ((int)((param_2 & 0xffff) * 0x42) >> 1) + -1;
    update_status_word_bits_1043c816(param_1,0,0x1000);
    set_flag_with_default(param_1,param_4);
    clear_or_set_flag_18(param_1,param_3);
    set_flag_on_object_1043c6fc(param_1,1);
  }
  return 1;
}

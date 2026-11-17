/* @k10d dispatch_event_if_below_threshold @ 0x1043c430
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   If param_2 is below a fixed threshold, invokes a virtual method and calls four helper
 *   functions with param_1 and the remaining arguments.
 * summary:
 *   The function checks if param_2 is less than 0x1fc668. If true, it performs a virtual
 *   call on an object pointed to by *(param_1+4) using slot 0x2c, then calls
 *   update_status_word_bits_1043c816 twice with specific constants, writes a computed value
 *   to *(param_1+0x1c), and finally calls set_flag_with_default, clear_or_set_flag_18, and
 *   set_flag_on_object_1043c6fc with param_1, param_4, param_3, and 1 respectively. It
 *   always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_if_below_threshold(void *param_1,uint param_2,int param_3,int param_4)

{
  if (param_2 < 0x1fc668) {
    (**(code **)(*(int *)((int)param_1 + 4) + 0x2c))
              ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x28) + (int)param_1);
    update_status_word_bits_1043c816(param_1,0x1802,0xffff);
    **(int **)((int)param_1 + 0x1c) = (param_2 & 0xffff) * 0x80e + -1;
    update_status_word_bits_1043c816(param_1,0,0x1000);
    set_flag_with_default(param_1,param_4);
    clear_or_set_flag_18(param_1,param_3);
    set_flag_on_object_1043c6fc(param_1,1);
  }
  return 1;
}

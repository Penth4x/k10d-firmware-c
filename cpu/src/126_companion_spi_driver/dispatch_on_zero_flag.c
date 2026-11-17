/* @k10d dispatch_on_zero_flag @ 0x104436c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls one of two helper functions depending on whether the second argument is zero.
 * summary:
 *   The function takes a pointer and an integer flag. If the flag is zero, it calls
 *   call_helper_on_field_0x20_10443e96 with the pointer; otherwise, it calls
 *   call_helper_on_field_0x20_10443e84 with the pointer cast to an integer. The specific
 *   roles of the callees are unknown, so the function acts as a simple conditional
 *   dispatcher.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_zero_flag(void *param_1,int param_2)

{
  if (param_2 == 0) {
    call_helper_on_field_0x20_10443e96(param_1);
  }
  else {
    call_helper_on_field_0x20_10443e84((int)param_1);
  }
  return;
}

/* @k10d check_value_in_range_two_to_six @ 0x1040a654
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Returns 1 if the value from call_single_helper_1040a63a is between 2 and 6 inclusive,
 *   otherwise 0.
 * summary:
 *   Calls call_single_helper_1040a63a to obtain a value and uses a switch statement to test
 *   if it falls within the range 2-6. If the value matches any of these cases, it returns
 *   1; otherwise it returns 0. The specific meaning of the value is unknown as the callee
 *   is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_value_in_range_two_to_six(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  uVar1 = call_single_helper_1040a63a();
  switch(uVar1) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    uVar2 = 1;
  }
  return uVar2;
}

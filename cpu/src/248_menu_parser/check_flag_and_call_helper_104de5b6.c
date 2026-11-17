/* @k10d check_flag_and_call_helper_104de5b6 @ 0x104de5b6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 248_menu_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_and_call_helper_104de5b6(void *param_1)

{
  uint32_t uVar1;
  
  if (*(char *)((int)param_1 + 0x10) == '\0') {
    uVar1 = scan_buffer_for_matching_bytes((int *)__frv_reg_unset(4),(int *)__frv_reg_unset(5));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

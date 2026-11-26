/* @k10d check_flag_and_call_helper_104d849a @ 0x104d849a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_and_call_helper_104d849a(int param_1)

{
  if (*(char *)(param_1 + 0x2b6d) != '\0') {
    check_kernel_call_success_10459fea(0xa);
  }
  set_flag_at_offset_0x2b60_104d8756(param_1);
  return 1;
}

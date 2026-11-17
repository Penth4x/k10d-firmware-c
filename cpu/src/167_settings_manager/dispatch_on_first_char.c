/* @k10d dispatch_on_first_char @ 0x104759d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_first_char(uint32_t param_x0, uint32_t param_x1, uint32_t param_x2, uint32_t param_x3)

{
  char *r7_in;
  
  if (*r7_in == '\0') {
    call_init_then_dispatch_two_params(__frv_reg_unset(4), __frv_reg_unset(5));
  }
  else {
    format_two_byte_pair_as_ascii(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6), __frv_reg_unset(7));
  }
  return;
}

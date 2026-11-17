/* @k10d get_value_if_flag_set_10514eb4 @ 0x10514eb4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_value_if_flag_set_10514eb4(int param_1)

{
  uint32_t uVar1;
  
  if (*(char *)(param_1 + 0x2c1) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint32_t *)(param_1 + 700);
  }
  return uVar1;
}

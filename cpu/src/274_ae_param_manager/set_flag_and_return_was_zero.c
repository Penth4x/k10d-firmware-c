/* @k10d set_flag_and_return_was_zero @ 0x10516b0a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_flag_and_return_was_zero(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 8);
  *(uint8_t *)(param_1 + 8) = 1;
  return cVar1 == '\0';
}

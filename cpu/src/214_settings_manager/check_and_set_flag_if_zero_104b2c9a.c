/* @k10d check_and_set_flag_if_zero_104b2c9a @ 0x104b2c9a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_set_flag_if_zero_104b2c9a(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x18) == 0;
  if (bVar1) {
    (*(code *)0x104ad2ea/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
    *(uint32_t *)(param_1 + 0x18) = 2;
  }
  return bVar1;
}

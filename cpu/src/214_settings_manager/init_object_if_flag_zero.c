/* @k10d init_object_if_flag_zero @ 0x104b30ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool init_object_if_flag_zero(int param_1,uint32_t param_2,uint32_t param_3)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x18) == 0;
  if (bVar1) {
    (*(code *)0x104ad2ea/*ROM*/)(*(uint32_t *)(param_1 + 0xc),param_2,param_3,0);
    *(uint32_t *)(param_1 + 0x18) = 2;
  }
  return bVar1;
}

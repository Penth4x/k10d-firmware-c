/* @k10d query_object_state_and_flag @ 0x104beb46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 225_ae_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool query_object_state_and_flag(int param_1, uint32_t *param_2, uint8_t *param_3, uint32_t param_x3)

{
  uint8_t uVar1;
  bool bVar3;
  uint32_t uVar2;
  
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  bVar3 = invoke_virtual_callback_on_object_104bff0c(param_1,(void *)(param_1 + 0x4dc));
  if (bVar3) {
    uVar2 = combine_two_helper_results((void *)(param_1 + 0x4dc));
    *param_2 = uVar2;
    if (*(char *)(param_1 + 0x4e8) == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    *param_2 = 0;
    uVar1 = 0;
  }
  *param_3 = uVar1;
  return bVar3;
}

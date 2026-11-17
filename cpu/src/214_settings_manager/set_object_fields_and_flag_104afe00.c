/* @k10d set_object_fields_and_flag_104afe00 @ 0x104afe00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_fields_and_flag_104afe00(int param_1,uint8_t param_2,uint32_t param_3)

{
  *(uint8_t *)(param_1 + 0x54) = param_2;
  *(uint32_t *)(param_1 + 0x58) = param_3;
  set_flg_obj(*(uint32_t **)(param_1 + 0x34));
  return;
}

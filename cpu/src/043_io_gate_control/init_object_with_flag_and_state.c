/* @k10d init_object_with_flag_and_state @ 0x1039ed0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 043_io_gate_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_flag_and_state(cls_10564150 *param_1,uint32_t param_2)

{
  int iVar1;
  uint8_t uVar2;
  
  param_1->field_0xd9 = 0;
  param_1->field_0x44 = param_2;
  set_flg_obj((void *)&param_1->field_0xcc, 0x1);
  param_1->field_0xd6 = 0;
  iVar1 = debug_mode_wrapper();
  if (iVar1 != 0) {
    param_1->field_0x60 = param_1->field_0x94;
    param_1->field_0xd6 = 1;
  }
  uVar2 = query_object_property_via_temp_104f2570(param_1->field_0xbc);
  param_1->field_0xc4 = uVar2;
  return;
}

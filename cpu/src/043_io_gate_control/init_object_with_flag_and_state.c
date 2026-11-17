/* @k10d init_object_with_flag_and_state @ 0x1039ed0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 043_io_gate_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_flag_and_state(int param_1,uint32_t param_2)

{
  int iVar1;
  uint8_t uVar2;
  
  *(uint8_t *)(param_1 + 0xd9) = 0;
  *(uint32_t *)(param_1 + 0x44) = param_2;
  set_flg_obj((uint32_t *)(param_1 + 0xcc));
  *(uint8_t *)(param_1 + 0xd6) = 0;
  iVar1 = debug_mode_wrapper();
  if (iVar1 != 0) {
    *(uint32_t *)(param_1 + 0x60) = *(uint32_t *)(param_1 + 0x94);
    *(uint8_t *)(param_1 + 0xd6) = 1;
  }
  uVar2 = query_object_property_via_temp_104f2570(*(uint32_t *)(param_1 + 0xbc));
  *(uint8_t *)(param_1 + 0xc4) = uVar2;
  return;
}

/* @k10d query_virtual_state_flag @ 0x104ab6e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 210_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_virtual_state_flag(cls_105b71d4 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = (((vtbl_entry*)(param_1->field_0x4))[7].fn)
                    (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[7].adj);
  if ((iVar1 != 0) && (uVar2 = 1, (*(uint *)param_1->field_0x2c & 0x30000) != 0x10000)) {
    uVar2 = 2;
  }
  return uVar2;
}

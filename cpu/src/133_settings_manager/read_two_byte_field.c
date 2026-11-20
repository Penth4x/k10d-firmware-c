/* @k10d read_two_byte_field @ 0x1045f5e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 133_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_two_byte_field(cls_105a6b4c *param_1)

{
  ushort uVar1;
  
  uVar1 = pack_two_byte_value_10496952(param_1,(ushort)(byte)param_1->field_0x5,(ushort)(byte)param_1->field_0x4);
  return (int)(short)uVar1;
}

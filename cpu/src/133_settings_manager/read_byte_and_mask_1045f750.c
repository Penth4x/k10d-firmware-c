/* @k10d read_byte_and_mask_1045f750 @ 0x1045f750
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 133_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte read_byte_and_mask_1045f750(cls_105a6b94 *param_1,int param_2,byte param_3)

{
  return *(byte *)((int)&param_1[1].field_0x0 + param_2) & param_3;
}

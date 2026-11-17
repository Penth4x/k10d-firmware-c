/* @k10d read_byte_and_mask_1045f2ec @ 0x1045f2ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 132_exposure_value_object (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte read_byte_and_mask_1045f2ec(void *param_1,int param_2,byte param_3)

{
  return *(byte *)((int)param_1 + param_2 + 4) & param_3;
}

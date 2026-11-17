/* @k10d make_bit_mask_from_index @ 0x104771fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint make_bit_mask_from_index(void *param_1,byte param_2)

{
  return 1 << (param_2 & 0xf) & 0xffff;
}

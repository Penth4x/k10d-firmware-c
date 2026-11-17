/* @k10d test_high_bit_of_byte @ 0x104b2818
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_high_bit_of_byte(void *param_1,byte *param_2)

{
  return (*param_2 & 0x80) != 0;
}

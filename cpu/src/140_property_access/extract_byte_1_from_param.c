/* @k10d extract_byte_1_from_param @ 0x104641be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 140_property_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint extract_byte_1_from_param(void *param_1,int param_2)

{
  return param_2 >> 8 & 0xff;
}

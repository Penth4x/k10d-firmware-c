/* @k10d align_down_to_16_bytes @ 0x1042659a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint align_down_to_16_bytes(uint32_t param_1,int param_2)

{
  return param_2 + 0xfU & 0xfffffff0;
}

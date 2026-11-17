/* @k10d test_flag_bits_in_struct @ 0x10491ee8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_flag_bits_in_struct(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}

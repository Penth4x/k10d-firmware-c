/* @k10d query_object_flag_at_offset_0x28 @ 0x10471840
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_flag_at_offset_0x28(int param_1)

{
  bool bVar1;
  
  bVar1 = test_flag_set(*(void **)(param_1 + 0x28));
  return (uint)bVar1;
}

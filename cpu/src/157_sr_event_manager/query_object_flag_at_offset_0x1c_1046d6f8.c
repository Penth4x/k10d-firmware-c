/* @k10d query_object_flag_at_offset_0x1c_1046d6f8 @ 0x1046d6f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_flag_at_offset_0x1c_1046d6f8(int param_1)

{
  bool bVar1;
  
  bVar1 = debug_flag_reader_0x08(*(void **)(param_1 + 0x1c));
  return (uint)bVar1;
}

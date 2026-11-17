/* @k10d query_object_flag_at_offset_0x1c_1046d77c @ 0x1046d77c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_flag_at_offset_0x1c_1046d77c(int param_1)

{
  bool bVar1;
  
  bVar1 = check_magic_at_offset_0xc(*(void **)(param_1 + 0x1c));
  return (uint)bVar1;
}

/* @k10d check_object_flag_at_offset_0x1c @ 0x1046d7be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_object_flag_at_offset_0x1c(int param_1)

{
  bool bVar1;
  
  bVar1 = check_magic_at_offset_0x10(*(void **)(param_1 + 0x1c));
  return (uint)bVar1;
}

/* @k10d call_three_helpers_in_sequence_103948fe @ 0x103948fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_in_sequence_103948fe(void)

{
  int iVar1;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  return_r4_passthrough_104d800e();
  (*(code *)0x104d689e/*ROM*/)();
  return;
}

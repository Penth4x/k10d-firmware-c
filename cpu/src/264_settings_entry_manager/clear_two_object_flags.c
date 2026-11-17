/* @k10d clear_two_object_flags @ 0x1050019c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 264_settings_entry_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_two_object_flags(void *param_1)

{
  set_bit_14_in_ram40030400(*(int *)((int)param_1 + 0x14) + 0x10,0);
  set_ram_flag_40030001(*(int *)((int)param_1 + 0x14) + 0x11,0);
  return 1;
}

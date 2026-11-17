/* @k10d set_flag_at_offset_0x48_103b8aa8 @ 0x103b8aa8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 052_settings_menu_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x48_103b8aa8(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x48));
  return;
}

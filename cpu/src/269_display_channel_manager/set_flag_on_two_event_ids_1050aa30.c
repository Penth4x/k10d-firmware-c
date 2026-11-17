/* @k10d set_flag_on_two_event_ids_1050aa30 @ 0x1050aa30
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_two_event_ids_1050aa30(int param_1,int param_2)

{
  if (param_2 == 0x300001) {
    set_flg_obj((uint32_t *)(param_1 + 0x28));
  }
  if (param_2 == 0x300002) {
    set_flg_obj((uint32_t *)(param_1 + 0x28));
  }
  return 0;
}

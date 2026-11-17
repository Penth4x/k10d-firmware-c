/* @k10d process_mode_event_flags_10418c04 @ 0x10418c04
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_mode_event_flags_10418c04(int param_1)

{
  eventflag_clr_flg((void *)(param_1 + 0x1538),0x200);
  *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xffdfffff;
  if (*(int *)(param_1 + 0x1564) == 0) {
    if (*(int *)(param_1 + 0x1560) == 1) {
      *(uint8_t *)(*(int *)(param_1 + 0x50) + 0x354) = 1;
      set_flag_at_offset_0x34c(*(uint32_t *)(param_1 + 0x50));
      release_mode_event_resources(param_1,(void *)(*(uint32_t *)(param_1 + 0x84)));
      *(uint32_t *)(param_1 + 0x84) = 0;
      init_object_and_wait_for_idle(param_1);
    }
  }
  else if (*(int *)(param_1 + 0x1560) == 0) {
    release_object_resources_10419108(param_1);
  }
  *(int *)(param_1 + 0x1564) = *(int *)(param_1 + 0x1560);
  *(bool *)(*(int *)(param_1 + 0x5c) + 0x48) = *(int *)(param_1 + 0x1560) == 0;
  return;
}

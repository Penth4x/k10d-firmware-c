/* @k10d manage_object_state_transition @ 0x1041054a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void manage_object_state_transition(void *param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(int *)((int)param_1 + 0x10) != 0) {
      (**(code **)(*(int *)((int)param_1 + 4) + 0x7c))
                ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x78) + (int)param_1,1);
      toggle_state_machine(param_1,1);
      *(uint32_t *)((int)param_1 + 0x10) = 0;
    }
  }
  else if ((param_2 == 1) && (*(int *)((int)param_1 + 0x10) != 3)) {
    toggle_state_machine(param_1,0);
    *(uint32_t *)((int)param_1 + 0x10) = 3;
  }
  return;
}

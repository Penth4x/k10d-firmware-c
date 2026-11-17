/* @k10d invoke_virtual_slot_and_toggle_byte @ 0x1043d6fa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_toggle_byte(void *param_1,uint32_t param_2,int param_3)

{
  (**(code **)(*(int *)((int)param_1 + 4) + 0x34))
            ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x30) + (int)param_1);
  if (param_3 != 0) {
    **(byte **)((int)param_1 + 0x118) = *(byte *)((int)param_1 + 0x127) ^ 0xff;
  }
  update_byte_field_in_object(param_1,*(byte *)((int)param_1 + 0x126),*(byte *)((int)param_1 + 0x126));
  return;
}

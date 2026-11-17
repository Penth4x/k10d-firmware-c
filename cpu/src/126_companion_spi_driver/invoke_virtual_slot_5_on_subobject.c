/* @k10d invoke_virtual_slot_5_on_subobject @ 0x1043bcf0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_5_on_subobject(void *param_1)

{
  (**(code **)(*(int *)((int)param_1 + 4) + 0x2c))
            ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x28) + (int)param_1);
  return 1;
}

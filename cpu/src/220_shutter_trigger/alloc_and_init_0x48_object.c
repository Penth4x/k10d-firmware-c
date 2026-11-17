/* @k10d alloc_and_init_0x48_object @ 0x104b73cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int alloc_and_init_0x48_object(int param_1)

{
  if ((param_1 != 0) || (param_1 = heap_alloc((void *)0x48), param_1 != 0)) {
    cls_105a8a1c_new((void *)param_1);
    *(uint8_t *)(param_1 + 0x40) = 0;
    *(uint8_t *)(param_1 + 0x41) = 0;
    *(uint8_t *)(param_1 + 0x42) = 0;
    *(uint32_t *)(param_1 + 0x44) = 0xff;
  }
  return param_1;
}

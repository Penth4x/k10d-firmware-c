/* @k10d alloc_and_init_0x48_object @ 0x104b73cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a8a1c * alloc_and_init_0x48_object(cls_105a8a1c *param_1)

{
  if ((param_1 != (cls_105a8a1c *)0x0) ||
     (param_1 = (cls_105a8a1c *)heap_alloc((void *)0x48), param_1 != (cls_105a8a1c *)0x0)) {
    cls_105a8a1c_new(param_1);
    *(uint8_t *)&param_1[0x10].field_0x0 = 0;
    *(uint8_t *)((int)&param_1[0x10].field_0x0 + 1) = 0;
    *(uint8_t *)((int)&param_1[0x10].field_0x0 + 2) = 0;
    param_1[0x11].field_0x0 = (uintptr_t)((void *)0xff);
  }
  return param_1;
}

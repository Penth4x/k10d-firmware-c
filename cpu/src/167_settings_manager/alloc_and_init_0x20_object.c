/* @k10d alloc_and_init_0x20_object @ 0x1047578a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104757a4) overlaps instruction at (ram,0x104757a2)
    */

int alloc_and_init_0x20_object(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x20), param_1 != (void *)0x0)) {
    cls_105a5c2c_new_2(param_1,900,0);
    *(uint32_t *)((int)param_1 + 0x18) = 0;
    *(uint16_t *)((int)param_1 + 0x1c) = 0xff9c;
    *(uint16_t *)((int)param_1 + 0x1e) = 0xff9c;
  }
  return (int)param_1;
}

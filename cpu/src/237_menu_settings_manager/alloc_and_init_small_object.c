/* @k10d alloc_and_init_small_object @ 0x104ce496
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int alloc_and_init_small_object(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x14), param_1 != (void *)0x0)) {
    alloc_zeroed_struct_104ce600(param_1);
    *(uint8_t *)((int)param_1 + 0xc) = 0;
    *(uint32_t *)((int)param_1 + 0x10) = 9999;
  }
  return (int)param_1;
}

/* @k10d alloc_and_zero_struct_104278ce @ 0x104278ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_struct_104278ce(uint8_t *param_1)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0xc), param_1 != (uint8_t *)0x0)) {
    *param_1 = 0;
    *(uint32_t *)(param_1 + 4) = 0;
    *(uint32_t *)(param_1 + 8) = 0;
  }
  return;
}

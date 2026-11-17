/* @k10d fetch_and_increment_pointer @ 0x1040f6e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t fetch_and_increment_pointer(void *param_1)

{
  uint8_t uVar1;
  
  uVar1 = **(uint8_t **)((int)param_1 + 8);
  *(uint8_t **)((int)param_1 + 8) = *(uint8_t **)((int)param_1 + 8) + 1;
  return uVar1;
}

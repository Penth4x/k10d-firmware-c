/* @k10d populate_card_capacity_fields @ 0x1044a7bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t populate_card_capacity_fields(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = sd_csd_capacity_sectors((int)param_1 + 0x1a4);
  *(uint32_t *)((int)param_1 + 0x14) = uVar1;
  uVar1 = compute_scaled_table_lookup((int)param_1 + 0x1a4);
  *(uint32_t *)((int)param_1 + 0xec) = uVar1;
  return 1;
}

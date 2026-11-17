/* @k10d init_struct_with_zeroed_fields @ 0x10440e42
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_zeroed_fields(int param_1)

{
  **(uint8_t **)(param_1 + 0x24) = 0;
  **(uint8_t **)(param_1 + 0x2c) = 0;
  *(uint8_t *)(param_1 + 0x3e) = **(uint8_t **)(param_1 + 0x28);
  **(uint8_t **)(param_1 + 0x30) = 0;
  **(uint8_t **)(param_1 + 0x20) = 0x30;
  *(uint16_t *)(param_1 + 0x3c) = 0;
  (*(code *)0x1044175a/*ROM*/)(*(uint32_t *)(param_1 + 0x1c));
  return;
}

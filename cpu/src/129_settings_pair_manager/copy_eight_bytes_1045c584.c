/* @k10d copy_eight_bytes_1045c584 @ 0x1045c584
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_eight_bytes_1045c584(uint16_t *param_1,uint16_t *param_2)

{
  if (param_2 != param_1) {
    *param_1 = *param_2;
    *(uint8_t *)(param_1 + 1) = *(uint8_t *)(param_2 + 1);
    *(uint8_t *)((int)param_1 + 3) = *(uint8_t *)((int)param_2 + 3);
    *(uint8_t *)(param_1 + 2) = *(uint8_t *)(param_2 + 2);
    *(uint8_t *)((int)param_1 + 5) = *(uint8_t *)((int)param_2 + 5);
    *(uint8_t *)(param_1 + 3) = *(uint8_t *)(param_2 + 3);
    *(uint8_t *)((int)param_1 + 7) = *(uint8_t *)((int)param_2 + 7);
  }
  return;
}

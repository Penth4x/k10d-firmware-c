/* @k10d set_flag_and_increment_counter @ 0x1041d9ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_increment_counter(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0xcc));
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  }
  return;
}

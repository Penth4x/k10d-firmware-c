/* @k10d set_flag_and_store_byte_1041b406 @ 0x1041b406
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_store_byte_1041b406(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x8d) = param_2;
  set_flg_obj((uint32_t *)(param_1 + 0x7c));
  return;
}

/* @k10d set_flag_and_call_helper_10416bd2 @ 0x10416bd2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_helper_10416bd2(int param_1)

{
  *(uint8_t *)(param_1 + 0x94) = 1;
  store_word_at_offset_0x1500(param_1,0);
  set_flg_obj((uint32_t *)(param_1 + 0x1538));
  return;
}

/* @k10d set_flag_and_store_byte_103b8a8e @ 0x103b8a8e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 052_settings_menu_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_store_byte_103b8a8e(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 100) = param_2;
  set_flg_obj((uint32_t *)(param_1 + 0x48), 0x20);
  return;
}

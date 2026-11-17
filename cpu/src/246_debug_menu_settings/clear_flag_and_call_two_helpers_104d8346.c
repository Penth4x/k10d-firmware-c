/* @k10d clear_flag_and_call_two_helpers_104d8346 @ 0x104d8346
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_two_helpers_104d8346(int param_1)

{
  if (*(char *)(param_1 + 0x2b5c) != '\0') {
    free_heap_block_if_allocated(param_1);
    set_flg_obj((uint32_t *)(param_1 + 0x2b60));
    toggle_object_state_flag(param_1,0);
    *(uint8_t *)(param_1 + 0x2b5c) = 0;
  }
  return;
}

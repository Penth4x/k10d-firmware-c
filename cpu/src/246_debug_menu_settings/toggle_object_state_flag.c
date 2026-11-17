/* @k10d toggle_object_state_flag @ 0x104d88f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_object_state_flag(int param_1,int param_2)

{
  if (param_2 == 0) {
    invoke_object_method_at_offset_0x10_104ea71c(*(void **)(param_1 + 0x2b68));
  }
  else if (*(char *)(param_1 + 0x2b6c) == '\0') {
    call_subroutine_on_field_16_104ea70a(*(void **)(param_1 + 0x2b68));
    *(uint8_t *)(param_1 + 0x2b6c) = 1;
  }
  else {
    invoke_object_method_at_offset_0x10_104ea71c(*(void **)(param_1 + 0x2b68));
    *(uint8_t *)(param_1 + 0x2b6c) = 0;
  }
  return;
}

/* @k10d set_flag_if_zero_and_call_helper @ 0x10363602
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 002_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_zero_and_call_helper(int param_1)

{
  if (*(int *)(param_1 + 0x204) == 0) {
    *(uint8_t *)(param_1 + 0x14) = 1;
  }
  if (*(char *)(param_1 + 0x16) != '\0') {
    invoke_callback_at_8000439c();
  }
  return;
}

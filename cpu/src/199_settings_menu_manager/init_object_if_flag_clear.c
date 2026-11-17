/* @k10d init_object_if_flag_clear @ 0x10494d34
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions on the object and sets a one-time initialization flag at
 *   offset 0xac.
 * summary:
 *   Checks the byte at param_1+0xac; if it is zero, invokes activate_object_list_items and
 *   initialize_object_and_invoke_callback with the object pointer, then sets the flag to 1.
 *   Acts as a guarded one-time initialization routine. The specific subsystem is not
 *   identifiable from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_if_flag_clear(int param_1)

{
  if (*(char *)(param_1 + 0xac) == '\0') {
    activate_object_list_items(param_1);
    initialize_object_and_invoke_callback(param_1);
    *(uint8_t *)(param_1 + 0xac) = 1;
  }
  return;
}

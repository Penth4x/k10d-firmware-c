/* @k10d initialize_object_with_two_calls @ 0x104ef16e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_with_two_calls(int param_1)

{
  return_constant_one_104edd0e(param_1 + 0x10,0);
  init_stack_buffer_with_constants(param_1);
  return 1;
}

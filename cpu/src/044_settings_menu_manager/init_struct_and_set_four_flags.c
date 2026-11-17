/* @k10d init_struct_and_set_four_flags @ 0x103a0682
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a structure via a helper and sets four consecutive fields to zero.
 * summary:
 *   Calls dispatch_object_teardown_1039fcfa with the first argument and 0. Then calls
 *   forward_params_to_helper_1049207a four times on the pointer offset by 2 (param_1 + 2),
 *   passing decreasing values 0x10, 0xf, 0xe, and 0xd as the second argument and 0x78 as
 *   the third. The specific roles of the callees are unknown, but the pattern suggests
 *   initializing a header and clearing a sequence of flags or counters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_and_set_four_flags(int *param_1)

{
  int *piVar1;
  
  dispatch_object_teardown_1039fcfa(param_1,0);
  piVar1 = param_1 + 2;
  forward_params_to_helper_1049207a(piVar1,0x10,0x78);
  forward_params_to_helper_1049207a(piVar1,0xf,0x78);
  forward_params_to_helper_1049207a(piVar1,0xe,0x78);
  forward_params_to_helper_1049207a(piVar1,0xd,0x78);
  return;
}

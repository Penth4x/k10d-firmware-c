/* @k10d dispatch_status_to_handler_103972c4 @ 0x103972c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a status value, clamps it to 0-2, and passes it to a handler function.
 * summary:
 *   Calls get_or_create_singleton_object_10395bd6 and call_function_at_offset_8_10395df4 to
 *   obtain a status code. The code is clamped to the range 0-2 (values >2 are treated as
 *   0). It then calls get_value_from_object, add_offset_to_pointer_104df392,
 *   return_r4_passthrough_104d800e, and add_offset_to_pointer_104d6882, likely for
 *   initialization or state setup. Finally, it calls a function at 0x104d8b22 and passes
 *   the result along with the clamped status to a function at 0x104d5e8e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_status_to_handler_103972c4(uint32_t param_x0)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  iVar1 = get_or_create_singleton_object_10395bd6();
  iVar1 = call_function_at_offset_8_10395df4(iVar1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else if (iVar1 == 1) {
    uVar3 = 1;
  }
  else if (iVar1 == 2) {
    uVar3 = 2;
  }
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  return_r4_passthrough_104d800e();
  add_offset_to_pointer_104d6882(__frv_reg_unset(4));
  uVar2 = (*(code *)0x104d8b22/*ROM*/)();
  (*(code *)0x104d5e8e/*ROM*/)(uVar2,uVar3);
  return;
}

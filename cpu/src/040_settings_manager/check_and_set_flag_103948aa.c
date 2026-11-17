/* @k10d check_and_set_flag_103948aa @ 0x103948aa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a value, passes it to a setter, and returns 1 if a subsequent validation
 *   check succeeds.
 * summary:
 *   The function calls get_value_from_object to get an initial value, which is passed to
 *   add_offset_to_pointer_104df392. It then gets a second value from
 *   return_r4_passthrough_104d800e and passes it to compute_struct_offset_104d6852 with a
 *   constant 1. Finally, it performs a conditional check involving two indirect function
 *   calls (via pointers at 0x104d7962 and 0x104d7732/0x104d7702) to determine if a specific
 *   condition is met, returning 1 on success and 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_set_flag_103948aa(uint32_t param_x0)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  uVar2 = return_r4_passthrough_104d800e();
  compute_struct_offset_104d6852(uVar2,1);
  uVar2 = (*(code *)0x104d7962/*ROM*/)();
  iVar1 = (*(code *)0x104d7732/*ROM*/)();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)0x104d7702/*ROM*/)(uVar2);
    uVar2 = 1;
    if (iVar1 != 1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

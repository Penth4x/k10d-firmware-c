/* @k10d check_and_retry_condition @ 0x10394826
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a flag, performs a sequence of operations, and retries once if a status check
 *   fails.
 * summary:
 *   Gated by cRam800045b4, the function calls get_value_from_object and passes the result
 *   to add_offset_to_pointer_104df392. It then calls return_r4_passthrough_104d800e and
 *   passes the result to compute_struct_offset_104d6852 with argument 1, followed by a call
 *   to 0x104d7942. If the subsequent call to 0x104d7234 returns non-zero, the sequence is
 *   repeated, and the function returns 1 if the final call to 0x104d7204 returns 2,
 *   otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_retry_condition(uint32_t param_x0)

{
  int iVar1;
  uint32_t uVar2;
  
  if (cRam800045b4 != '\0') {
    iVar1 = get_value_from_object();
    add_offset_to_pointer_104df392(iVar1);
    uVar2 = return_r4_passthrough_104d800e();
    compute_struct_offset_104d6852(uVar2,1);
    (*(code *)0x104d7942/*ROM*/)();
    iVar1 = (*(code *)0x104d7234/*ROM*/)();
    if (iVar1 != 0) {
      iVar1 = get_value_from_object();
      add_offset_to_pointer_104df392(iVar1);
      uVar2 = return_r4_passthrough_104d800e();
      compute_struct_offset_104d6852(uVar2,1);
      (*(code *)0x104d7942/*ROM*/)();
      iVar1 = (*(code *)0x104d7204/*ROM*/)();
      if (iVar1 == 2) {
        return 1;
      }
    }
  }
  return 0;
}

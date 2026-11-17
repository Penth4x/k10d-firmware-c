/* @k10d check_and_handle_status @ 0x104af98e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status value from a sub-object and conditionally calls a handler, returning a
 *   status code.
 * summary:
 *   The function reads an integer from offset 0xc of the input object and passes it to
 *   call_helper_with_field8. If the result is zero, it calls
 *   call_with_offset_c_field_104af9be with the object pointer and returns 3. Otherwise, it
 *   returns 2. The specific roles of the callees and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_handle_status(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = call_helper_with_field8(*(int *)((int)param_1 + 0xc));
  if (iVar1 == 0) {
    call_with_offset_c_field_104af9be((int)param_1);
    uVar2 = 3;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

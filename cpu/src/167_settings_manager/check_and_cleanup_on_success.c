/* @k10d check_and_cleanup_on_success @ 0x10478fe6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a check function with two object fields and, if it returns non-zero, calls two
 *   cleanup functions before returning true.
 * summary:
 *   The function reads two pointers from offsets 0x14 and 0xc of the object in param_1 and
 *   passes them to call_with_offset_lock_10480e32. If the result is non-zero, it calls
 *   call_handler_with_lock_10480ea2 with the pointer at 0x14 and the value at 0x8, then
 *   calls clear_struct_fields_and_subblock with the object pointer. It returns true if the
 *   initial check succeeded, false otherwise. The specific roles of the callees are
 *   unknown, so the operation is described mechanically as a conditional check-and-cleanup
 *   pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_cleanup_on_success(int param_1)

{
  int iVar1;
  
  iVar1 = call_with_offset_lock_10480e32(*(void **)(param_1 + 0x14),*(void **)(param_1 + 0xc));
  if (iVar1 != 0) {
    call_handler_with_lock_10480ea2(*(uint32_t *)(param_1 + 0x14),*(uint32_t *)(param_1 + 8));
    clear_struct_fields_and_subblock(param_1);
  }
  return iVar1 != 0;
}

/* @k10d invoke_virtual_slot_two_and_store_result @ 0x1047635a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object pointer, calls its virtual slot 2, and passes the result to a
 *   helper.
 * summary:
 *   The function retrieves a pointer from param_1+8 via
 *   call_helper_with_offset_pointer_104752e2. If non-null, it performs a virtual call to
 *   slot 2 (offset 0x14) with a this-adjustment from offset 0x10. The return value is
 *   passed to copy_8_byte_block_if_valid along with param_3, and the final return value
 *   comes from update_state_on_mismatch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_and_store_result(int param_1,uint32_t param_2,uint32_t param_3)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = (int *)call_helper_with_offset_pointer_104752e2(*(int *)(param_1 + 8));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1);
    copy_8_byte_block_if_valid(param_3,(void*)(uVar2));
    uVar2 = update_state_on_mismatch(*(uint32_t *)(param_1 + 0xc),param_3);
  }
  return uVar2;
}

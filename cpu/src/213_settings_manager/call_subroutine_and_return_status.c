/* @k10d call_subroutine_and_return_status @ 0x104af966
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on a field of param_1 and returns 2 or 3 based on the helper's result.
 * summary:
 *   The function passes the value at offset 0xc of param_1 and param_2 to
 *   select_lens_fw_update_entry. If select_lens_fw_update_entry returns 0, it calls
 *   call_with_offset_c_field_104af9be with param_1 and returns 3; otherwise it returns 2.
 *   The specific roles of the callees and the meaning of the return codes are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_and_return_status(void *param_1,uint32_t param_2)

{
  int extraout_r4;
  uint32_t uVar1;
  
  select_lens_fw_update_entry(*(uint32_t **)((int)param_1 + 0xc),param_2);
  if (extraout_r4 == 0) {
    call_with_offset_c_field_104af9be((int)param_1);
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

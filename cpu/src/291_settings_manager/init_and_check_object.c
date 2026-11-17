/* @k10d init_and_check_object @ 0x105319da
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object field and conditionally sets a flag based on a check result.
 * summary:
 *   The function calls eventflag_clr_flg to initialize the field at offset 0xc of the
 *   object pointed to by param_1. It then calls send_command_and_get_result with fields at
 *   offsets 8 and 4. If the result is non-zero, it calls twai_flg_obj to set a flag on the
 *   object at offset 0xc. The return value is the result of send_command_and_get_result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int init_and_check_object(int param_1)

{
  int iVar1;
  
  eventflag_clr_flg((uint32_t *)(param_1 + 0xc),1);
  iVar1 = send_command_and_get_result((void *)(*(uint32_t *)(param_1 + 8)),(void *)(param_1 + 4));
  if (iVar1 != 0) {
    twai_flg_obj((uint32_t *)(param_1 + 0xc),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
  return iVar1;
}

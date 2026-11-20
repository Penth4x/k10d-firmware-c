/* @k10d call_subroutine_and_flag_on_error @ 0x1046f362
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Calls a helper with object fields and params, then sets a flag on the object if the
 *   helper returns non-zero.
 * summary:
 *   The function first calls eventflag_clr_flg with a pointer to offset 0x44 of param_1 and
 *   the value 1. It then calls read_data_in_chunks passing the value at offset 0x34 of
 *   param_1, a pointer to offset 4 of param_1, param_2, and param_3. If the return value of
 *   read_data_in_chunks is non-zero, it calls twai_flg_obj to set a flag at offset 0x44 of
 *   param_1. The return value of read_data_in_chunks is returned to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_subroutine_and_flag_on_error(int param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),1);
  iVar1 = read_data_in_chunks((int *)(*(uint32_t *)(param_1 + 0x34)),(void *)(param_1 + 4),(uint *)(param_2),(int)(param_3));
  if (iVar1 != 0) {
    twai_flg_obj((uint32_t *)(param_1 + 0x44),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
  return iVar1;
}

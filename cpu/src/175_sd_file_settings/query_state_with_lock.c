/* @k10d query_state_with_lock @ 0x10481094
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, calls a query function with three output parameters, releases the
 *   lock, and returns the result.
 * summary:
 *   The function initializes a local struct with three zeroed fields. It calls
 *   call_kernel_with_short_id on a pointer derived from param_1 (likely a lock acquire),
 *   then calls store_result_and_decrement_counter passing a value from param_1+8, param_2,
 *   and pointers to the local struct fields. It then calls
 *   check_kernel_call_success_10459d88 (likely a lock release) and copies the three local
 *   fields into the memory pointed to by param_3. The return value is the boolean result
 *   from store_result_and_decrement_counter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool query_state_with_lock(int param_1,uint32_t param_2,uint32_t *param_3)

{
  struct {
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_14;
  int iVar1;
  bool bVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_28 [4];
  piVar3 = (int *)auStack_28;
  _cfg_14.uStack_14 = 0;
  _cfg_14.uStack_10 = 0;
  _cfg_14.uStack_c = 0;
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  iVar1 = *(int *)(param_1 + 8);
  *piVar3 = (int)&_cfg_14.uStack_c;
  bVar2 = store_result_and_decrement_counter(iVar1,param_2,&_cfg_14.uStack_14,&_cfg_14.uStack_10,(uint *)*piVar3);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  *param_3 = _cfg_14.uStack_14;
  param_3[1] = _cfg_14.uStack_10;
  param_3[2] = _cfg_14.uStack_c;
  return bVar2;
}

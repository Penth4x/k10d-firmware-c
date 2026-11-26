/* @k10d release_sem_and_set_flag @ 0x104273fa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Releases a semaphore object and sets a flag on an associated object if present.
 * summary:
 *   Checks if the third field of the input structure is non-null. If so, it calls
 *   set_flg_obj on that pointer, stores the boolean result in the seventh field, clears the
 *   third, fourth, and fifth fields, and calls sig_sem_obj on the input structure. Returns
 *   the result of sig_sem_obj or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_sem_and_set_flag(uint32_t *param_1)

{
  uint32_t uVar1;
  bool bVar2;
  
  uVar1 = 0;
  if ((uint32_t *)param_1[2] != (uint32_t *)0x0) {
    bVar2 = set_flg_obj((uint32_t *)param_1[2], *(uint32_t *)((int)param_1 + 0xc));
    *(bool *)(param_1 + 6) = bVar2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    uVar1 = sig_sem_obj(param_1);
  }
  return uVar1;
}

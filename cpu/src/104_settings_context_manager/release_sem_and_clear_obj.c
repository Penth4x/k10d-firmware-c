/* @k10d release_sem_and_clear_obj @ 0x1042743c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Releases a semaphore object and clears associated object pointers if present.
 * summary:
 *   Checks if the object at offset 8 (param_1[2]) is non-null. If so, it calls set_flg_obj
 *   on that object, stores the boolean result at offset 24 (param_1+6), clears the pointers
 *   at offsets 8, 12, and 16, and then calls sig_sem_obj on the main object. Returns the
 *   result of sig_sem_obj or 0 if the initial check failed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_sem_and_clear_obj(uint32_t *param_1)

{
  uint32_t uVar1;
  bool bVar2;
  
  uVar1 = 0;
  if ((uint32_t *)param_1[2] != (uint32_t *)0x0) {
    bVar2 = set_flg_obj((uint32_t *)param_1[2]);
    *(bool *)(param_1 + 6) = bVar2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    uVar1 = sig_sem_obj(param_1);
  }
  return uVar1;
}

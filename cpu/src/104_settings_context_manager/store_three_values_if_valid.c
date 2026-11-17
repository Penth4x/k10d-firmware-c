/* @k10d store_three_values_if_valid @ 0x104273be
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Stores three parameters into a struct if two are non-zero, after calling twai_sem_obj.
 * summary:
 *   The function checks if param_2 and param_3 are non-zero. If so, it calls twai_sem_obj
 *   with the first argument and a global constant, then writes param_2, param_3, and
 *   param_4 to offsets 8, 12, and 16 of the struct pointed to by param_1. It returns 1 on
 *   success and 0 otherwise. The role of twai_sem_obj and the specific data being stored is
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t store_three_values_if_valid(uint32_t *param_1,int param_2,int param_3,uint32_t param_4)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    twai_sem_obj(param_1,_DAT_105a2bf0/*ROM*/);
    param_1[2] = param_2;
    param_1[3] = param_3;
    param_1[4] = param_4;
    uVar1 = 1;
  }
  return uVar1;
}

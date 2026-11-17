/* @k10d invoke_object_method_and_check_flag_104bf6b6 @ 0x104bf6b6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object referenced by param_1 and returns whether a
 *   specific flag is set.
 * summary:
 *   The function performs a virtual call on an object pointer stored at offset 0x480 of
 *   param_1, passing param_1 and param_2 as arguments. It wraps this call with two calls to
 *   eventflag_clr_flg and one to eventflag_wai_flg, which likely manage synchronization or
 *   state. Finally, it returns true if the integer at offset 0x28 of param_1 equals 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_object_method_and_check_flag_104bf6b6(int param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar1,1);
  iVar2 = **(int **)(param_1 + 0x480);
  (**(code **)(iVar2 + 0x2c))
            ((int)*(int **)(param_1 + 0x480) + (int)*(short *)(iVar2 + 0x28),param_1,param_2);
  eventflag_wai_flg(puVar1,1,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  return *(int *)(param_1 + 0x28) == 1;
}

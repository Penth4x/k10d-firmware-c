/* @k10d invoke_object_method_and_check_flag_104bf71e @ 0x104bf71e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object pointer stored in the struct and returns whether a
 *   status field equals 1.
 * summary:
 *   The function performs a virtual call through a vtable pointer located at offset 0x480
 *   of the input structure, passing the structure and a second parameter. It wraps this
 *   call with two calls to eventflag_clr_flg and one to eventflag_wai_flg, which likely
 *   handle synchronization or state management for the object at offset 0x20. Finally, it
 *   returns a boolean indicating if the integer at offset 0x28 of the structure is equal to
 *   1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_object_method_and_check_flag_104bf71e(int param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar1,2);
  iVar2 = **(int **)(param_1 + 0x480);
  (**(code **)(iVar2 + 0x34))
            ((int)*(int **)(param_1 + 0x480) + (int)*(short *)(iVar2 + 0x30),param_1,param_2);
  eventflag_wai_flg(puVar1,2,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,2);
  return *(int *)(param_1 + 0x28) == 1;
}

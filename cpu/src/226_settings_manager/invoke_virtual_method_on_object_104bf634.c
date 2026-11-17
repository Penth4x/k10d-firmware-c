/* @k10d invoke_virtual_method_on_object_104bf634 @ 0x104bf634
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Locks an object field, calls a virtual method on a sub-object, unlocks, and returns a
 *   status flag.
 * summary:
 *   The function calls eventflag_clr_flg on the field at offset 0x20 (likely a mutex lock),
 *   then performs a virtual call on the object pointer stored at offset 0x480 using slot 17
 *   (offset 0x8c). It then calls eventflag_wai_flg (likely a mutex unlock or similar
 *   cleanup) and eventflag_clr_flg again. Finally, it returns true if the integer at offset
 *   0x28 is equal to 1. The specific camera subsystem is not identifiable from the provided
 *   pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_virtual_method_on_object_104bf634(int param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar1,0x20);
  iVar2 = **(int **)(param_1 + 0x480);
  (**(code **)(iVar2 + 0x8c))
            ((int)*(int **)(param_1 + 0x480) + (int)*(short *)(iVar2 + 0x88),param_1,param_2);
  eventflag_wai_flg(puVar1,0x20,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x20);
  return *(int *)(param_1 + 0x28) == 1;
}

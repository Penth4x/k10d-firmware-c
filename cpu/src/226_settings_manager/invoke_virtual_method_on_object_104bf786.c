/* @k10d invoke_virtual_method_on_object_104bf786 @ 0x104bf786
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object pointer stored at offset 0x480 of the input
 *   structure.
 * summary:
 *   The function performs a Cfront-style virtual call using the vtable pointer at param_1 +
 *   0x480. It invokes slot 7 (offset 0x3c) with a this-adjustment from offset 0x38, passing
 *   the original object and param_2. It also calls two helper functions (eventflag_clr_flg
 *   and eventflag_wai_flg) on a sub-object at offset 0x20 before and after the virtual
 *   call, and finally returns a boolean based on whether the field at offset 0x28 equals 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_virtual_method_on_object_104bf786(int param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar1,4);
  iVar2 = **(int **)(param_1 + 0x480);
  (**(code **)(iVar2 + 0x3c))
            ((int)*(int **)(param_1 + 0x480) + (int)*(short *)(iVar2 + 0x38),param_1,param_2);
  eventflag_wai_flg(puVar1,4,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,4);
  return *(int *)(param_1 + 0x28) == 1;
}

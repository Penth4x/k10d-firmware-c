/* @k10d invoke_virtual_method_on_object_104bf7ee @ 0x104bf7ee
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Performs a virtual method call on an object pointer stored at offset 0x480 of the input
 *   structure.
 * summary:
 *   The function retrieves a vtable pointer from the input structure at offset 0x480 and
 *   invokes the method at offset 0x44 (slot 8) with the object and a second parameter. It
 *   calls helper functions eventflag_clr_flg and eventflag_wai_flg on a sub-structure at
 *   offset 0x20 before and after the virtual call. Finally, it returns a boolean indicating
 *   whether the integer at offset 0x28 of the input structure equals 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_virtual_method_on_object_104bf7ee(int param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar1,8);
  iVar2 = **(int **)(param_1 + 0x480);
  (**(code **)(iVar2 + 0x44))
            ((int)*(int **)(param_1 + 0x480) + (int)*(short *)(iVar2 + 0x40),param_1,param_2);
  eventflag_wai_flg(puVar1,8,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,8);
  return *(int *)(param_1 + 0x28) == 1;
}

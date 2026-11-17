/* @k10d invoke_virtual_method_on_object_104bfb72 @ 0x104bfb72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resets a flag, calls a virtual method on an object pointer, and returns a status check.
 * summary:
 *   The function clears the byte at offset 0x1c of the object in param_1. It then performs
 *   a virtual call through the vtable pointer at offset 0x480, specifically invoking the
 *   method at vtable offset 0x6c (slot 10) with the object, a value from offset 0x34, and
 *   param_2. It calls two unknown helper functions (eventflag_clr_flg and
 *   eventflag_wai_flg) with a pointer at offset 0x20 and size 0x1000. Finally, it returns
 *   true if the integer at offset 0x28 is 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_virtual_method_on_object_104bfb72(int param_1,void *param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  *(uint8_t *)(param_1 + 0x1c) = 0;
  eventflag_clr_flg(puVar1,0x1000);
  iVar2 = **(int **)(param_1 + 0x480);
  (**(code **)(iVar2 + 0x6c))
            ((int)*(int **)(param_1 + 0x480) + (int)*(short *)(iVar2 + 0x68),param_1,
             *(uint32_t *)(param_1 + 0x34),param_2);
  eventflag_wai_flg(puVar1,0x1000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x1000);
  return *(int *)(param_1 + 0x28) == 1;
}

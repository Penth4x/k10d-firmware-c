/* @k10d reset_and_dispatch_object_state @ 0x104bfdf8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resets a flag, calls two helper functions on a sub-object, performs a virtual method
 *   call, and returns a status check.
 * summary:
 *   The function clears the byte at offset 0x1c of the object pointed to by param_1. It
 *   then calls eventflag_clr_flg and eventflag_wai_flg with the pointer at offset 0x20 and
 *   a size of 0x20000. It performs a virtual call via the vtable at offset 0x480, passing
 *   the object and other fields. Finally, it returns true if the integer at offset 0x28 is
 *   1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool reset_and_dispatch_object_state(int param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  *(uint8_t *)(param_1 + 0x1c) = 0;
  eventflag_clr_flg(puVar1,0x20000);
  iVar2 = **(int **)(param_1 + 0x480);
  (**(code **)(iVar2 + 0xc4))
            ((int)*(int **)(param_1 + 0x480) + (int)*(short *)(iVar2 + 0xc0),param_1,
             *(uint32_t *)(param_1 + 0x34),param_2);
  eventflag_wai_flg(puVar1,0x20000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x20000);
  return *(int *)(param_1 + 0x28) == 1;
}

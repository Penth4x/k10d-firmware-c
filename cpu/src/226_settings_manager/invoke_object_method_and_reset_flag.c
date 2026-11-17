/* @k10d invoke_object_method_and_reset_flag @ 0x104bfacc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resets a byte flag, calls a virtual method on an object pointer, and returns a status
 *   check.
 * summary:
 *   The function clears the byte at offset 0x1c of param_1. It then performs a virtual call
 *   on the object pointer stored at param_1 + 0x480, using the vtable entry at offset 0x74.
 *   It calls two unnamed helper functions (eventflag_clr_flg and eventflag_wai_flg) with a
 *   pointer derived from param_1 + 0x20 and the constant 0x800. Finally, it returns true if
 *   the integer at param_1 + 0x28 equals 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_object_method_and_reset_flag(int param_1,void *param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  *(uint8_t *)(param_1 + 0x1c) = 0;
  eventflag_clr_flg(puVar1,0x800);
  iVar2 = **(int **)(param_1 + 0x480);
  (**(code **)(iVar2 + 0x74))
            ((int)*(int **)(param_1 + 0x480) + (int)*(short *)(iVar2 + 0x70),param_1,
             *(uint32_t *)(param_1 + 0x34),param_2);
  eventflag_wai_flg(puVar1,0x800,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x800);
  return *(int *)(param_1 + 0x28) == 1;
}

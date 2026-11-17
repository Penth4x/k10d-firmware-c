/* @k10d invoke_virtual_method_on_object_104bfc92 @ 0x104bfc92
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object via a vtable pointer stored at offset 0x480.
 * summary:
 *   The function retrieves a vtable pointer from param_1 + 0x480 and calls the virtual
 *   method at offset 0xb4 (slot 22) with a this-adjustment from offset 0xb0. It passes
 *   param_1, a value from param_1 + 0x34, and param_2 as arguments. It also calls two
 *   helper functions (eventflag_clr_flg and eventflag_wai_flg) with a pointer at param_1 +
 *   0x20 and size 0x4000, and returns a boolean based on whether the value at param_1 +
 *   0x28 equals 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_virtual_method_on_object_104bfc92(int param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar1,0x4000);
  iVar2 = **(int **)(param_1 + 0x480);
  (**(code **)(iVar2 + 0xb4))
            ((int)*(int **)(param_1 + 0x480) + (int)*(short *)(iVar2 + 0xb0),param_1,
             *(uint32_t *)(param_1 + 0x34),param_2);
  eventflag_wai_flg(puVar1,0x4000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x4000);
  return *(int *)(param_1 + 0x28) == 1;
}

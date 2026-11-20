/* @k10d invoke_virtual_method_on_object_104bfa5a @ 0x104bfa5a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object pointer stored at offset 0x480 of the input
 *   structure.
 * summary:
 *   The function performs memory operations on a pointer at offset 0x20 of the input
 *   structure via two calls to eventflag_clr_flg and one to eventflag_wai_flg. It then
 *   executes a virtual call using the object pointer at offset 0x480, specifically invoking
 *   the method at vtable offset 0x9c. The function returns a boolean indicating whether the
 *   integer at offset 0x28 of the input structure equals 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_virtual_method_on_object_104bfa5a(int param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar1,0x400);
  iVar2 = **(int **)(param_1 + 0x480);
  (((vtbl_entry*)(iVar2))[19].fn)
            ((int)*(int **)(param_1 + 0x480) + (int)((vtbl_entry*)(iVar2))[19].adj,param_1,
             *(uint32_t *)(param_1 + 0x34),param_2);
  eventflag_wai_flg(puVar1,0x400,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x400);
  return *(int *)(param_1 + 0x28) == 1;
}

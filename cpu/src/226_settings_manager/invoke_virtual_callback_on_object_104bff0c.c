/* @k10d invoke_virtual_callback_on_object_104bff0c @ 0x104bff0c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object pointer stored at offset 0x480 of the input
 *   structure.
 * summary:
 *   The function performs memory operations on a pointer derived from param_1 + 0x20 using
 *   two unknown helper functions (eventflag_clr_flg and eventflag_wai_flg). It then
 *   executes a virtual call via the vtable at offset 0xd4 of the object found at param_1 +
 *   0x480, passing the object, a value from param_1 + 0x34, and param_2. Finally, it
 *   returns a boolean indicating if the integer at param_1 + 0x28 equals 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_virtual_callback_on_object_104bff0c(int param_1,void *param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar1,0x80000);
  iVar2 = **(int **)(param_1 + 0x480);
  (((vtbl_entry*)(iVar2))[26].fn)
            ((int)*(int **)(param_1 + 0x480) + (int)((vtbl_entry*)(iVar2))[26].adj,param_1,
             *(uint32_t *)(param_1 + 0x34),param_2);
  eventflag_wai_flg(puVar1,0x80000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x80000);
  return *(int *)(param_1 + 0x28) == 1;
}

/* @k10d invoke_virtual_callback_on_object_104bfe9e @ 0x104bfe9e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Performs setup, invokes a virtual method on an object, performs teardown, and returns a
 *   status flag.
 * summary:
 *   The function calls eventflag_clr_flg on a sub-object at offset 0x20 with size 0x40000.
 *   It then dereferences a pointer at offset 0x488 to perform a virtual function call (slot
 *   0x44) with the object and param_2 as arguments. It calls eventflag_wai_flg and
 *   eventflag_clr_flg again, and finally returns whether the integer at offset 0x28 is
 *   equal to 1. The specific subsystem (e.g., image pipeline or sensor) is not identifiable
 *   from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_virtual_callback_on_object_104bfe9e(int param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar1,0x40000);
  iVar2 = **(int **)(param_1 + 0x488);
  (((vtbl_entry*)(iVar2))[8].fn)
            ((int)*(int **)(param_1 + 0x488) + (int)((vtbl_entry*)(iVar2))[8].adj,param_1,param_2);
  eventflag_wai_flg(puVar1,0x40000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x40000);
  return *(int *)(param_1 + 0x28) == 1;
}

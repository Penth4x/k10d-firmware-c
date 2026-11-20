/* @k10d invoke_object_callback_and_check_flag @ 0x104bff7e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object stored in the struct and returns whether a status
 *   field equals 1.
 * summary:
 *   The function performs a virtual call on the object pointer at offset 0x488 of param_1,
 *   passing param_1 and param_2 as arguments. It calls two unknown helper functions
 *   (eventflag_clr_flg and eventflag_wai_flg) with a pointer at offset 0x20 and a size of
 *   0x40000. Finally, it returns true if the integer at offset 0x28 of param_1 is 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_object_callback_and_check_flag(int param_1,uint32_t param_2)

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

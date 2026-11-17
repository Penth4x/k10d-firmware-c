/* @k10d init_object_subsystem_1040a438 @ 0x1040a438
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling setup routines on a sub-structure at offset 0x18 and
 *   returning a value from offset 0x44.
 * summary:
 *   The function takes a pointer to an object (param_1) and performs initialization steps.
 *   It calls eventflag_clr_flg and eventflag_wai_flg on the sub-structure located at
 *   param_1 + 0x18, passing 0x100 as a size or flag. It also calls
 *   init_object_with_three_params_104c46f8 with a value from param_1 + 0x28, the object
 *   pointer, and the constant 3. Finally, it returns the value stored at param_1 + 0x44.
 *   The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_object_subsystem_1040a438(int param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)(param_1 + 0x18);
  eventflag_clr_flg(puVar1,0x100);
  init_object_with_three_params_104c46f8(*(int *)(param_1 + 0x28),param_1,3);
  eventflag_wai_flg(puVar1,0x100,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x100);
  return *(uint32_t *)(param_1 + 0x44);
}

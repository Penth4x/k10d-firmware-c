/* @k10d initialize_object_subfield @ 0x1040a592
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-structure at offset 0x18 of the object and calls a setup routine on
 *   offset 0x28.
 * summary:
 *   The function takes an object pointer (param_1) and two additional parameters. It calls
 *   eventflag_clr_flg on the sub-structure at offset 0x18, then calls
 *   init_object_with_two_ids_104c4668 passing the pointer at offset 0x28, the object
 *   itself, and the two parameters. It then calls eventflag_wai_flg on the sub-structure at
 *   offset 0x18 with a null pointer and a global constant, followed by another call to
 *   eventflag_clr_flg. Finally, it returns the value stored at offset 0x44 of the object.
 *   The specific roles of the callees and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_object_subfield(void *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)((int)param_1 + 0x18);
  eventflag_clr_flg(puVar1,8);
  init_object_with_two_ids_104c4668(*(uint32_t *)((int)param_1 + 0x28),param_1,param_2,param_3);
  eventflag_wai_flg(puVar1,8,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,8);
  return *(uint32_t *)((int)param_1 + 0x44);
}

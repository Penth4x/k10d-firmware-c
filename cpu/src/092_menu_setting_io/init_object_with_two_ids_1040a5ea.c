/* @k10d init_object_with_two_ids_1040a5ea @ 0x1040a5ea
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Initializes a struct at param_1 by calling two helper functions on a sub-object at
 *   offset 0x18 and returning a value from offset 0x44.
 * summary:
 *   The function takes a pointer to a struct (param_1) and performs initialization steps.
 *   It calls eventflag_clr_flg on the sub-object at offset 0x18 with argument 0x20, then
 *   calls init_object_with_two_ids_104c46ce with the value at offset 0x28 and the base
 *   pointer. It then calls eventflag_wai_flg on the sub-object with arguments 0x20, 0, and
 *   a global pointer, followed by another call to eventflag_clr_flg. Finally, it returns
 *   the value stored at offset 0x44 of the struct. The specific subsystem is not
 *   identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_object_with_two_ids_1040a5ea(void *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)((int)param_1 + 0x18);
  eventflag_clr_flg(puVar1,0x20);
  init_object_with_two_ids_104c46ce(*(uint32_t *)((int)param_1 + 0x28),param_1);
  eventflag_wai_flg(puVar1,0x20,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x20);
  return *(uint32_t *)((int)param_1 + 0x44);
}

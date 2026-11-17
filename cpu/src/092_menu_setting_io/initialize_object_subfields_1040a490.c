/* @k10d initialize_object_subfields_1040a490 @ 0x1040a490
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Initializes specific fields of an object structure by calling helper functions on
 *   offsets 0x18 and 0x28.
 * summary:
 *   The function takes a pointer to an object and calls four helper functions. It operates
 *   on the field at offset 0x18 (twice) and the field at offset 0x28. It passes the
 *   constant 2 to the helpers operating on offset 0x18 and the constant 3 to the helper
 *   operating on offset 0x28. Finally, it returns the value stored at offset 0x44 of the
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_object_subfields_1040a490(void *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)((int)param_1 + 0x18);
  eventflag_clr_flg(puVar1,2);
  init_object_with_three_fields_104c4608(*(int *)((int)param_1 + 0x28),(int)param_1,3);
  eventflag_wai_flg(puVar1,2,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,2);
  return *(uint32_t *)((int)param_1 + 0x44);
}

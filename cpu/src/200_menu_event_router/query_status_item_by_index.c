/* @k10d query_status_item_by_index @ 0x10496a4a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 200_menu_event_router (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t query_status_item_by_index(cls_105b5410 *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((((param_2 != 0xe) && (param_2 != 0xd)) && (param_2 != 0xf)) && (param_2 != 0x10)) ||
     (param_2 == _DAT_8001053c/*SDRAM*/)) {
    uVar1 = status_item_asserted((void *)&param_1->field_0x4,*(int *)(param_2 * 4 + 0x105b52c4/*ROM*/));
  }
  return uVar1;
}

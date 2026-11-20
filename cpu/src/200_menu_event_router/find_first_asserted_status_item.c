/* @k10d find_first_asserted_status_item @ 0x1049712c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 200_menu_event_router (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t find_first_asserted_status_item(cls_105b5410 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_8001053c/*SDRAM*/ == 0xffff) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = status_item_asserted(&param_1->field_0x4,
                           *(int *)(*(int *)(iVar2 + 0x105b5400/*ROM*/) * 4 + 0x105b52c4/*ROM*/));
      if (iVar1 != 0) {
        _DAT_8001053c/*SDRAM*/ = *(uint32_t *)(iVar3 * 4 + 0x105b5400/*ROM*/);
        return _DAT_8001053c/*SDRAM*/;
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar2 < 0x10);
  }
  return 0xffff;
}

/* @k10d check_status_item_asserted @ 0x104971d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 200_menu_event_router (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_status_item_asserted(int param_1,int param_2)

{
  bool bVar2;
  int iVar1;
  uint32_t uVar3;
  
  bVar2 = test_status_item_bit_1046b236((cls_105a8a1c *)(param_1 + 4),param_2);
  uVar3 = 0;
  if ((bVar2) && (iVar1 = status_item_asserted((cls_105a8a1c *)(param_1 + 4),param_2), iVar1 != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}

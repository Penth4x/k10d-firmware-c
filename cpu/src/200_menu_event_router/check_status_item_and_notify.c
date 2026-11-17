/* @k10d check_status_item_and_notify @ 0x10496aa2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 200_menu_event_router (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_status_item_and_notify(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  bool bVar5;
  
  if (param_2 == 0x1a) {
    iVar1 = status_item_asserted((void *)(param_1 + 4),iRam105b532c);
    iVar3 = iRam80010534;
    if (iVar1 == 0) {
      return false;
    }
    if (iRam80010534 == 0) {
      return false;
    }
    iRam80010534 = 0;
    uVar2 = get_or_init_sram_block_105342fe();
    uVar4 = 0x1a;
  }
  else {
    if (param_2 == 0x1e) {
      iVar3 = status_item_asserted((void *)(param_1 + 4),iRam105b533c);
      if (iVar3 == 0) {
        return false;
      }
      if (iRam80010538 == 0) {
        return false;
      }
      bVar5 = iRam80010538 != 0xffff;
      iRam80010538 = 0;
      return bVar5;
    }
    if (param_2 != 0xb) {
      bVar5 = status_item_newly_asserted(param_1 + 4,*(uint32_t *)(param_2 * 4 + 0x105b52c4/*ROM*/));
      return bVar5;
    }
    iVar1 = status_item_asserted((void *)(param_1 + 4),iRam105b52f0);
    iVar3 = iRam80010544;
    if (iVar1 == 0) {
      return false;
    }
    if (iRam80010544 == 0) {
      return false;
    }
    iRam80010544 = 0;
    uVar2 = get_or_init_sram_block_105342fe();
    uVar4 = 0xb;
  }
  write_field_by_id((void *)uVar2,uVar4,1);
  return iVar3 != 0xffff;
}

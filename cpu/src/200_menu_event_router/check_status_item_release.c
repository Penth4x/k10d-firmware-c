/* @k10d check_status_item_release @ 0x10496b92
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Checks if a specific status item was newly released and updates a corresponding state
 *   flag.
 * summary:
 *   Dispatches on param_2 to check the release status of different items using
 *   test_status_item_bit_1046b1a2 or status_item_newly_released. For specific IDs (0x1a,
 *   0xb), it updates a state flag in RAM and calls write_field_by_id with the result of
 *   get_or_init_sram_block_105342fe. Returns 1 if the item was released and the flag was
 *   previously not set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_status_item_release(cls_105b5410 *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  bool bVar6;
  
  if (param_2 == 0x1a) {
    iVar1 = test_status_item_bit_1046b1a2(&param_1->field_0x4,iRam105b532c);
    iVar3 = iRam80010534;
    if (iVar1 == 0) {
      return 0;
    }
    if (iRam80010534 == 1) {
      return 0;
    }
    iRam80010534 = 1;
    uVar2 = get_or_init_sram_block_105342fe();
    uVar5 = 0x1a;
  }
  else {
    if (param_2 == 0x1e) {
      iVar3 = test_status_item_bit_1046b1a2(&param_1->field_0x4,iRam105b533c);
      if (iVar3 == 0) {
        return 0;
      }
      if (iRam80010538 == 1) {
        return 0;
      }
      bVar6 = iRam80010538 != 0xffff;
      iRam80010538 = 1;
      return (uint)bVar6;
    }
    if (param_2 != 0xb) {
      uVar4 = status_item_newly_released(&param_1->field_0x4,*(uint32_t *)(param_2 * 4 + 0x105b52c4/*ROM*/));
      return uVar4;
    }
    iVar1 = test_status_item_bit_1046b1a2(&param_1->field_0x4,iRam105b52f0);
    iVar3 = iRam80010544;
    if (iVar1 == 0) {
      return 0;
    }
    if (iRam80010544 == 1) {
      return 0;
    }
    iRam80010544 = 1;
    uVar2 = get_or_init_sram_block_105342fe();
    uVar5 = 0xb;
  }
  write_field_by_id((uint32_t *)(uVar2),(int)(uVar5),(uint32_t)(0));
  return (uint)(iVar3 != 0xffff);
}

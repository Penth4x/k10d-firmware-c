/* @k10d build_and_send_setting_block @ 0x104ba51a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int build_and_send_setting_block(int param_1,int param_2)

{
  int iVar1;
  bool bVar4;
  void *pvVar2;
  uint32_t uVar3;
  int iVar5;
  
  bVar4 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar5 = 0;
  if (bVar4) {
    pvVar2 = (void *)heap_alloc_2(_DAT_80048314/*SDRAM*/);
    iVar5 = _DAT_80048314/*SDRAM*/;
    iVar1 = 0;
    if (0 < _DAT_80048314/*SDRAM*/) {
      do {
        *(uint8_t *)((int)pvVar2 + iVar1) = 0xff;
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar5);
    }
    uVar3 = setting_get(param_2,0x68);
    *(char *)((int)pvVar2 + 4) = (char)uVar3;
    uVar3 = setting_get(param_2,0x69);
    *(char *)((int)pvVar2 + 5) = (char)uVar3;
    uVar3 = setting_get(param_2,0x6a);
    *(char *)((int)pvVar2 + 6) = (char)uVar3;
    uVar3 = setting_get(param_2,0x6b);
    *(char *)((int)pvVar2 + 7) = (char)uVar3;
    uVar3 = setting_get(param_2,0x6c);
    *(char *)((int)pvVar2 + 8) = (char)uVar3;
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar5 = invoke_transaction_with_length_two(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),pvVar2);
    if (iVar5 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    heap_free_2((int)pvVar2);
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar5;
}

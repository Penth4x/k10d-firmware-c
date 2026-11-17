/* @k10d poll_status_and_dispatch_event_104cc18c @ 0x104cc18c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_status_and_dispatch_event_104cc18c(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint uStack_c;
  
  eventflag_clr_flg((uint32_t *)(param_1 + 0x34),0xffffffff);
  iVar2 = forward_four_args_to_helper();
  if (iVar2 != 0) {
    uStack_c = 0;
    while( true ) {
      eventflag_wai_flg((uint32_t *)(param_1 + 0x34),0xf000000,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg((uint32_t *)(param_1 + 0x34),uStack_c);
      if ((uStack_c & 0xe000000) != 0) break;
      if ((uStack_c & 0x1000000) != 0) {
        *(uint32_t *)(param_1 + 0x214) = 0xb;
        *(uint32_t *)(param_1 + 0x210) = 0xc000f;
        iVar2 = **(int **)(param_1 + 0x1c);
        (**(code **)(iVar2 + 0x14))
                  ((int)*(int **)(param_1 + 0x1c) + (int)*(short *)(iVar2 + 0x10),0xc000f,0xb);
      }
    }
    uVar3 = uStack_c & 0x8000000;
    if ((*(int *)(param_1 + 0x40) != 0) &&
       (iVar2 = init_object_and_check_flag(*(uint32_t *)(param_1 + 0x48)), iVar2 != 0)) {
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 2;
      }
      goto LAB_104cc280;
    }
  }
  uVar1 = 0;
LAB_104cc280:
  *(uint32_t *)(param_1 + 0x214) = uVar1;
  *(uint32_t *)(param_1 + 0x210) = 0xc000f;
  return;
}

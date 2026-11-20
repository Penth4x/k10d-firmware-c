/* @k10d poll_status_and_dispatch_event_104cbf40 @ 0x104cbf40
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Polls a status word in a loop, dispatches a virtual event on specific bits, and sets a
 *   result code.
 * summary:
 *   The function branches on a flag at param_1+0x9c. If set, it enters a loop calling
 *   eventflag_wai_flg to read a status word (uStack_c) and eventflag_clr_flg to update
 *   state. It checks bits 0x1000000 and 0x8000000 of the status word; if 0x1000000 is set,
 *   it invokes a virtual method (slot 2) on an object at param_1+0x1c with arguments
 *   0xc000d and 0xb. It exits the loop when bit 0x2000000 is set. Finally, it writes a
 *   result code (0, 1, or 2) to param_1+0x214 and a constant 0xc000d to param_1+0x210.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_status_and_dispatch_event_104cbf40(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  bool bVar3;
  uint uStack_c;
  
  bVar3 = false;
  if (*(char *)(param_1 + 0x9c) == '\0') {
    iVar2 = forward_two_args_to_helper_104be754(*(uint32_t *)(param_1 + 0x48),*(uint32_t *)(param_1 + 0x7c));
LAB_104cc03a:
    if (iVar2 != 0) {
      if (bVar3) {
        uVar1 = 2;
      }
      else {
        uVar1 = 1;
      }
      goto LAB_104cc04c;
    }
  }
  else {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x34),(uint)(0xffffffff));
    iVar2 = call_helper_with_fixed_args_104be768(*(uint32_t *)(param_1 + 0x48),(void *)(param_1 + 0x18));
    if (iVar2 != 0) {
      uStack_c = 0;
      while( true ) {
        eventflag_wai_flg((uint32_t *)(param_1 + 0x34),0xf000000,&uStack_c,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg((uint32_t *)(param_1 + 0x34),uStack_c);
        if ((uStack_c & 0xe000000) != 0) break;
        if ((uStack_c & 0x1000000) != 0) {
          *(uint32_t *)(param_1 + 0x214) = 0xb;
          *(uint32_t *)(param_1 + 0x210) = 0xc000d;
          iVar2 = **(int **)(param_1 + 0x1c);
          (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar2))[2].adj,0xc000d,0xb);
        }
      }
      bVar3 = (uStack_c & 0x8000000) != 0;
      if (*(int *)(param_1 + 0x40) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = call_single_argument_helper_104be77c(*(int *)(param_1 + 0x48));
      }
      goto LAB_104cc03a;
    }
  }
  uVar1 = 0;
LAB_104cc04c:
  *(uint32_t *)(param_1 + 0x214) = uVar1;
  *(uint32_t *)(param_1 + 0x210) = 0xc000d;
  return;
}

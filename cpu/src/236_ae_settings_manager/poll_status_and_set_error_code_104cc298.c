/* @k10d poll_status_and_set_error_code_104cc298 @ 0x104cc298
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Polls a status register in a loop until a completion bit is set, then writes a result
 *   code to the object.
 * summary:
 *   The function branches on a flag at offset 0x9c. If set, it enters a loop calling
 *   eventflag_wai_flg and eventflag_clr_flg to read a status word into uStack_c, breaking
 *   when bit 29 (0x20000000) is set. It checks bit 24 (0x1000000) to potentially trigger a
 *   virtual call with arguments 0xc0010 and 0xb. Finally, it writes a status code (0, 1, or
 *   2) to offset 0x214 and a constant 0xc0010 to offset 0x210. The specific subsystem is
 *   not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_status_and_set_error_code_104cc298(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  bool bVar4;
  uint8_t auStack_2c [4];
  uint uStack_c;
  
  puVar3 = auStack_2c;
  bVar4 = false;
  if (*(char *)(param_1 + 0x9c) == '\0') {
    iVar2 = forward_call_with_fixed_args(*(uint32_t *)(param_1 + 0x48),(uint)*(ushort *)(param_1 + 0xa2),
                         (uint)*(byte *)(param_1 + 0xa4),*(uint8_t *)(param_1 + 0xa5));
LAB_104cc3b4:
    if (iVar2 != 0) {
      if (bVar4) {
        uVar1 = 2;
      }
      else {
        uVar1 = 1;
      }
      goto LAB_104cc3c6;
    }
  }
  else {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x34),0xffffffff);
    puVar3[3] = *(uint8_t *)(param_1 + 0xa5);
    iVar2 = call_helper_with_fixed_last_arg();
    if (iVar2 != 0) {
      uStack_c = 0;
      while( true ) {
        eventflag_wai_flg((uint32_t *)(param_1 + 0x34),0xf000000,&uStack_c,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg((uint32_t *)(param_1 + 0x34),uStack_c);
        if ((uStack_c & 0xe000000) != 0) break;
        if ((uStack_c & 0x1000000) != 0) {
          *(uint32_t *)(param_1 + 0x214) = 0xb;
          *(uint32_t *)(param_1 + 0x210) = 0xc0010;
          iVar2 = **(int **)(param_1 + 0x1c);
          (**(code **)(iVar2 + 0x14))
                    ((int)*(int **)(param_1 + 0x1c) + (int)*(short *)(iVar2 + 0x10),0xc0010,0xb);
        }
      }
      bVar4 = (uStack_c & 0x8000000) != 0;
      if (*(int *)(param_1 + 0x40) == 0) {
        call_single_helper_104bea4e();
        iVar2 = 0;
      }
      else {
        iVar2 = call_single_helper_104bea4e();
      }
      goto LAB_104cc3b4;
    }
  }
  uVar1 = 0;
LAB_104cc3c6:
  *(uint32_t *)(param_1 + 0x214) = uVar1;
  *(uint32_t *)(param_1 + 0x210) = 0xc0010;
  return;
}

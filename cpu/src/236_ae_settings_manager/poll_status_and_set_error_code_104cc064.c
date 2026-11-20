/* @k10d poll_status_and_set_error_code_104cc064 @ 0x104cc064
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Polls a status source based on a flag, loops until a termination bit is set, and writes
 *   a result code to the object.
 * summary:
 *   The function branches on the byte at offset 0x9c of the object. If zero, it calls
 *   call_helper_with_zero_args with parameters from offsets 0x48 and 0xa0. Otherwise, it
 *   initializes a state at offset 0x34, calls call_single_helper_104be79e, and enters a
 *   loop calling eventflag_wai_flg and eventflag_clr_flg until a bit in the
 *   0x8000000-0xe000000 range is set. It may trigger a virtual call with code 0xc000e if
 *   bit 0x1000000 is set. Finally, it writes a status code (0, 1, or 2) to offset 0x214 and
 *   0xc000e to offset 0x210.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_status_and_set_error_code_104cc064(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  bool bVar3;
  uint uStack_c;
  
  bVar3 = false;
  if (*(char *)(param_1 + 0x9c) == '\0') {
    iVar2 = call_helper_with_zero_args(*(uint32_t *)(param_1 + 0x48),(uint)*(byte *)(param_1 + 0xa0));
LAB_104cc162:
    if (iVar2 != 0) {
      if (bVar3) {
        uVar1 = 2;
      }
      else {
        uVar1 = 1;
      }
      goto LAB_104cc174;
    }
  }
  else {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x34),(uint)(0xffffffff));
    iVar2 = call_single_helper_104be79e();
    if (iVar2 != 0) {
      uStack_c = 0;
      while( true ) {
        eventflag_wai_flg((uint32_t *)(param_1 + 0x34),0xf000000,&uStack_c,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg((uint32_t *)(param_1 + 0x34),uStack_c);
        if ((uStack_c & 0xe000000) != 0) break;
        if ((uStack_c & 0x1000000) != 0) {
          *(uint32_t *)(param_1 + 0x214) = 0xb;
          *(uint32_t *)(param_1 + 0x210) = 0xc000e;
          iVar2 = **(int **)(param_1 + 0x1c);
          (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar2))[2].adj,0xc000e,0xb);
        }
      }
      bVar3 = (uStack_c & 0x8000000) != 0;
      if (*(int *)(param_1 + 0x40) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = call_single_helper_104be7ae();
      }
      goto LAB_104cc162;
    }
  }
  uVar1 = 0;
LAB_104cc174:
  *(uint32_t *)(param_1 + 0x214) = uVar1;
  *(uint32_t *)(param_1 + 0x210) = 0xc000e;
  return;
}

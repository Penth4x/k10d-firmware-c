/* @k10d load_firmware_update_file_1046a2b4 @ 0x1046a2b4
 * name: verified (structural evidence: selects C:\FWDC162D.BIN / C:\FWDC162C.BIN / C:\FWDC162B.BIN (strings 0x105473d0/e0/f0) for param_2 = 3/4/5 with expected sizes 0x800000/0x40000/0x840000)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Load the firmware update file chosen by param_2 from the card: 3 = FWDC162D (main
 *   image only), 4 = FWDC162C (control-CPU image only), 5 = FWDC162B (both). Returns true
 *   only when the read size equals the expected image size.
 * summary:
 *   VERIFIED: selects C:\FWDC162D.BIN / C:\FWDC162C.BIN / C:\FWDC162B.BIN (strings
 *   0x105473d0/e0/f0) for param_2 = 3/4/5 with expected sizes 0x800000/0x40000/0x840000
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool load_firmware_update_file_1046a2b4(void *param_1,int param_2,int param_3)

{
  bool bVar2;
  int iVar1;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_2c [4];
  bool bStack_15;
  uint32_t uStack_10;
  int iStack_c;
  
  puVar7 = auStack_2c;
  uStack_10 = 0;
  iStack_c = 0;
  bStack_15 = false;
  if (param_2 == 3) {
    pcVar4 = s_C__FWDC162D_BIN_105473d0;
    iVar5 = 0x800000;
  }
  else {
    if (param_2 == 4) {
      pcVar4 = s_C__FWDC162C_BIN_105473e0;
      iVar1 = 0x400000;
      iVar5 = 0x40000;
      goto LAB_1046a310;
    }
    if (param_2 != 5) {
      return false;
    }
    pcVar4 = s_C__FWDC162B_BIN_105473f0;
    iVar5 = 0x840000;
  }
  iVar1 = 0;
LAB_1046a310:
  bVar2 = call_helper_and_store_result_1046a3ea((int)param_1,pcVar4,&iStack_c);
  if ((bVar2) &&
     (iVar6 = **(int **)((int)param_1 + 0x248),
     iVar6 = (((vtbl_entry*)(iVar6))[5].fn)
                       ((int)*(int **)((int)param_1 + 0x248) + (int)((vtbl_entry*)(iVar6))[5].adj,pcVar4,
                        1,&uStack_10), iVar6 != 0)) {
    zero_and_fill_sram_buffers((uint32_t)(param_1));
    sr_state_machine(*(int *)((int)param_1 + 0x24c),_DAT_800042c8/*SDRAM*/,_DAT_800042c4/*SDRAM*/);
    display_output_enable(*(uint32_t *)((int)param_1 + 0x24c));
    uVar3 = _DAT_800042d0/*SDRAM*/ + 1;
    *(uint16_t *)(puVar7 + 2) = 7;
    forward_params_to_helper_1046a5be(param_1,0,(uint)uVar3,(void*)(&DAT_105a8524/*ROM*/),*(uint16_t *)(puVar7 + 2));
    iVar6 = **(int **)((int)param_1 + 0x248);
    iVar1 = (((vtbl_entry*)(iVar6))[7].fn)
                      ((int)*(int **)((int)param_1 + 0x248) + (int)((vtbl_entry*)(iVar6))[7].adj,
                       uStack_10,iVar1 * 2 + param_3,iStack_c);
    bStack_15 = iVar1 != 0;
    iVar1 = **(int **)((int)param_1 + 0x248);
    (((vtbl_entry*)(iVar1))[6].fn)
              ((int)*(int **)((int)param_1 + 0x248) + (int)((vtbl_entry*)(iVar1))[6].adj,uStack_10);
  }
  if (iVar5 != iStack_c) {
    bStack_15 = false;
  }
  return bStack_15;
}

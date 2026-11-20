/* @k10d send_three_mmio_blocks_10504ad2 @ 0x10504ad2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Transmits three 4-byte data blocks from param_2 to a device via a control object in
 *   param_1.
 * summary:
 *   The function iterates three times, each time loading a 4-byte value from param_2
 *   (offsets 4, 8, 12) and a 2-byte tag from param_3/4/5. It calls
 *   imgp_b_program_and_start_104fe680 to prepare the data, eventflag_wai_flg to transmit
 *   it, and imgp_a_stop_and_reset to finalize. The first block's data is halved before
 *   transmission. The control object at param_1+0x28 is used for all operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void send_three_mmio_blocks_10504ad2(int param_1,int param_2,uint16_t param_3,uint16_t param_4,uint16_t param_5)

{
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  uint32_t uStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint32_t uStack_c;
  
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_18 = *(uint16_t *)(param_2 + 0x10);
  uStack_14 = *(uint16_t *)(param_2 + 0x14);
  uStack_1c = *(uint32_t *)(param_2 + 4);
  uStack_16 = *(uint16_t *)(param_2 + 0x12);
  puVar2 = (uint32_t *)(param_1 + 0x2c);
  uStack_e = param_3;
  eventflag_clr_flg(puVar2,4);
  iVar1 = param_1 + 4;
  imgp_b_program_and_start_104fe680((int)(*(uint32_t *)(param_1 + 0x28)),(void *)(iVar1),(uint32_t *)(&uStack_1c));
  eventflag_wai_flg(puVar2,4,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,4);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x28));
  uStack_18 = (uint16_t)((int)(uint)*(ushort *)(param_2 + 0x10) >> 1);
  uStack_14 = (uint16_t)((int)(uint)*(ushort *)(param_2 + 0x14) >> 1);
  uStack_1c = *(uint32_t *)(param_2 + 8);
  uStack_e = param_4;
  imgp_b_program_and_start_104fe680((int)(*(uint32_t *)(param_1 + 0x28)),(void *)(iVar1),(uint32_t *)(&uStack_1c));
  eventflag_wai_flg(puVar2,4,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,4);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x28));
  uStack_1c = *(uint32_t *)(param_2 + 0xc);
  uStack_e = param_5;
  imgp_b_program_and_start_104fe680((int)(*(uint32_t *)(param_1 + 0x28)),(void *)(iVar1),(uint32_t *)(&uStack_1c));
  eventflag_wai_flg(puVar2,4,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,4);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x28));
  return;
}

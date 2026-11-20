/* @k10d send_three_mmio_blocks_10504c18 @ 0x10504c18
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Constructs and transmits three sequential data blocks via a helper function using
 *   fields from two parameter structs.
 * summary:
 *   The function extracts specific 16-bit and 32-bit fields from param_2 and param_3,
 *   packing them into local stack buffers. It then calls imgp_c_program_and_start_104fe5ce
 *   and imgp_a_program_and_start_104fe526 three times, each preceded by a call to
 *   eventflag_clr_flg and followed by eventflag_wai_flg and imgp_a_stop_and_reset,
 *   suggesting a repeated send/acknowledge pattern over a communication channel. The data
 *   includes values shifted right by 1 bit and constants like 0x20 and 0xffffffff.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void send_three_mmio_blocks_10504c18(int param_1,int param_2,int param_3)

{
  struct {
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint16_t uStack_48;
    uint16_t uStack_46;
    uint16_t uStack_44;
    uint16_t uStack_42;
    uint16_t uStack_40;
    uint16_t uStack_3e;
    uint16_t uStack_3c;
    uint16_t uStack_3a;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint16_t uStack_2c;
    uint16_t uStack_2a;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint16_t uStack_24;
    uint16_t uStack_22;
    uint16_t uStack_20;
    uint16_t uStack_1e;
    uint16_t uStack_1c;
    uint16_t uStack_1a;
    uint16_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_50;
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  _cfg_50.uStack_40 = 0;
  _cfg_50.uStack_3e = 0;
  _cfg_50.uStack_3c = 0;
  _cfg_50.uStack_3a = 0;
  _cfg_50.uStack_50 = *(uint32_t *)(param_2 + 4);
  _cfg_50.uStack_4c = *(uint32_t *)(param_3 + 4);
  _cfg_50.uStack_48 = *(uint16_t *)(param_3 + 0x10);
  _cfg_50.uStack_46 = *(uint16_t *)(param_3 + 0x12);
  _cfg_50.uStack_44 = *(uint16_t *)(param_2 + 0x14);
  _cfg_50.uStack_42 = *(uint16_t *)(param_3 + 0x14);
  puVar2 = (uint32_t *)(param_1 + 0x2c);
  eventflag_clr_flg(puVar2,4);
  iVar1 = param_1 + 4;
  imgp_c_program_and_start_104fe5ce((int)(*(uint32_t *)(param_1 + 0x28)),(void *)(iVar1),(uint32_t *)(&_cfg_50.uStack_50));
  eventflag_wai_flg(puVar2,4,&_cfg_50.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,4);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x28));
  _cfg_50.uStack_38 = 1;
  _cfg_50.uStack_34 = *(uint32_t *)(param_2 + 8);
  _cfg_50.uStack_30 = *(uint32_t *)(param_3 + 8);
  _cfg_50.uStack_2c = (uint16_t)((int)(uint)*(ushort *)(param_3 + 0x10) >> 1);
  _cfg_50.uStack_2a = (uint16_t)((int)(uint)*(ushort *)(param_3 + 0x12) >> 1);
  _cfg_50.uStack_28 = (uint16_t)((int)(uint)*(ushort *)(param_2 + 0x14) >> 1);
  _cfg_50.uStack_24 = 0;
  _cfg_50.uStack_26 = (uint16_t)((int)(uint)*(ushort *)(param_3 + 0x14) >> 1);
  _cfg_50.uStack_22 = 0;
  _cfg_50.uStack_20 = 0;
  _cfg_50.uStack_1e = 0;
  _cfg_50.uStack_1c = 0;
  _cfg_50.uStack_1a = 0x20;
  _cfg_50.uStack_18 = 0x20;
  _cfg_50.uStack_14 = 0xffffffff;
  _cfg_50.uStack_10 = 0xaaaaaaaa;
  eventflag_clr_flg(puVar2,4);
  imgp_a_program_and_start_104fe526((int)(*(uint32_t *)(param_1 + 0x28)),(void *)(iVar1),(uint32_t *)(&_cfg_50.uStack_38));
  eventflag_wai_flg(puVar2,4,&_cfg_50.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,4);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x28));
  _cfg_50.uStack_34 = *(uint32_t *)(param_2 + 0xc);
  _cfg_50.uStack_30 = *(uint32_t *)(param_3 + 0xc);
  eventflag_clr_flg(puVar2,4);
  imgp_a_program_and_start_104fe526((int)(*(uint32_t *)(param_1 + 0x28)),(void *)(iVar1),(uint32_t *)(&_cfg_50.uStack_38));
  eventflag_wai_flg(puVar2,4,&_cfg_50.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,4);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x28));
  return;
}

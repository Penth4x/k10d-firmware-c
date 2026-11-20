/* @k10d allocate_and_configure_buffer_regions @ 0x104f6d08
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Allocates a large memory block and configures three sub-regions via a sequence of
 *   helper calls.
 * summary:
 *   Allocates a 0x180000 byte block from the system memory pool. It then performs a series
 *   of configuration operations on three distinct sub-regions (offsets 0, 0xc0000,
 *   0x120000) using helpers eventflag_clr_flg, build_sensor_readout_params,
 *   eventflag_wai_flg, and configure_timer_channel_state. It also executes a nested loop
 *   that processes data within the allocated block using insertion_sort_bytes before
 *   releasing the memory block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104f6d4e) overlaps instruction at (ram,0x104f6d4c)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void allocate_and_configure_buffer_regions(int param_1, int param_2, uint32_t param_x2)

{
  struct {
    uint32_t uStack_48;
    void * pvStack_44;
    ushort uStack_40;
    ushort uStack_3e;
    uint16_t uStack_3c;
    void * pvStack_38;
    ushort uStack_34;
    ushort uStack_32;
    uint16_t uStack_30;
    uint16_t uStack_2e;
    uint16_t uStack_2c;
    uint16_t uStack_2a;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint8_t uStack_24;
    uint8_t uStack_23;
    uint32_t uStack_20;
    uint8_t uStack_1c;
    uint8_t uStack_1b;
    uint8_t uStack_1a;
    uint16_t uStack_18;
    uint16_t uStack_16;
    uint8_t uStack_14;
    uint16_t uStack_12;
    uint16_t uStack_10;
    uint32_t uStack_c;
  } _cfg_48;
  ushort uVar1;
  uint16_t uVar2;
  bool bVar3;
  ushort uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  void *pvVar9;
  uint32_t *puVar10;
  void *pvVar11;
  uint8_t *puVar12;
  uint8_t *puVar13;
  int iVar14;
  int iVar15;
  uintptr_t sp;
  int iStack_ac;
  int iStack_a8;
  uint8_t uStack_51;
  uint8_t uStack_50;
  uint8_t uStack_4f;
  uint8_t uStack_4e;
  uint8_t uStack_4d;
  uint8_t uStack_4c;
  uint8_t uStack_4b;
  uint8_t uStack_4a;
  uint8_t uStack_49;
  _cfg_48.uStack_c = 0;
  uVar1 = *(ushort *)(param_2 + 0x10);
  uVar2 = *(uint16_t *)(param_2 + 0x12);
  pvVar9 = (void *)get_system_heap();
  pvVar9 = (void *)mempool_get_block(pvVar9,(void *)0x180000,0);
  if (pvVar9 != 0) {
    uVar5 = *(uint32_t *)(param_2 + 4);
    uVar6 = *(uint32_t *)(param_2 + 8);
    uVar7 = *(uint32_t *)(param_2 + 0xc);
    _cfg_48.uStack_18 = 0;
    _cfg_48.uStack_16 = 0;
    _cfg_48.uStack_12 = 0;
    _cfg_48.uStack_10 = 0;
    _cfg_48.uStack_2e = 0;
    _cfg_48.uStack_34 = 0x400;
    _cfg_48.uStack_32 = 0x400;
    _cfg_48.uStack_30 = 0x300;
    _cfg_48.uStack_2a = 0;
    _cfg_48.uStack_24 = 0;
    puVar10 = (uint32_t *)(param_1 + 0x38);
    _cfg_48.uStack_23 = 0;
    _cfg_48.uStack_20 = 0;
    _cfg_48.uStack_1c = 0;
    _cfg_48.uStack_1b = 0;
    _cfg_48.uStack_1a = 0;
    _cfg_48.uStack_14 = 0;
    _cfg_48.uStack_48 = 3;
    _cfg_48.pvStack_44 = (void *)uVar5;
    _cfg_48.uStack_40 = uVar1;
    _cfg_48.uStack_3e = uVar1;
    _cfg_48.uStack_3c = uVar2;
    _cfg_48.pvStack_38 = pvVar9;
    _cfg_48.uStack_2c = _cfg_48.uStack_2e;
    _cfg_48.uStack_28 = _cfg_48.uStack_2a;
    _cfg_48.uStack_26 = _cfg_48.uStack_2a;
    eventflag_clr_flg(puVar10,1);
    iVar8 = param_1 + 4;
    build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x28)),(int)(1),(void *)(iVar8),(int *)(&_cfg_48.uStack_48));
    eventflag_wai_flg(puVar10,1,&_cfg_48.uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar10,1);
    configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
    uVar4 = uVar1 >> 1;
    _cfg_48.uStack_2e = 0;
    _cfg_48.uStack_34 = 0x200;
    _cfg_48.uStack_32 = 0x200;
    _cfg_48.uStack_30 = 0x300;
    _cfg_48.uStack_2a = 0;
    _cfg_48.pvStack_44 = (void *)uVar6;
    _cfg_48.uStack_40 = uVar4;
    _cfg_48.uStack_3e = uVar4;
    _cfg_48.uStack_3c = uVar2;
    _cfg_48.pvStack_38 = (void *)((int)pvVar9 + 0xc0000);
    _cfg_48.uStack_2c = _cfg_48.uStack_2e;
    _cfg_48.uStack_28 = _cfg_48.uStack_2a;
    _cfg_48.uStack_26 = _cfg_48.uStack_2a;
    eventflag_clr_flg(puVar10,1);
    build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x28)),(int)(1),(void *)(iVar8),(int *)(&_cfg_48.uStack_48));
    eventflag_wai_flg(puVar10,1,&_cfg_48.uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar10,1);
    configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
    _cfg_48.pvStack_44 = (void *)uVar7;
    _cfg_48.pvStack_38 = (void *)((int)pvVar9 + 0x120000);
    eventflag_clr_flg(puVar10,1);
    build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x28)),(int)(1),(void *)(iVar8),(int *)(&_cfg_48.uStack_48));
    eventflag_wai_flg(puVar10,1,&_cfg_48.uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar10,1);
    configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
    iStack_a8 = 2;
    iStack_ac = 0x800;
    do {
      puVar12 = (uint8_t *)((int)pvVar9 + iStack_ac + 2);
      puVar13 = (uint8_t *)((int)pvVar9 + iStack_ac + -0x3fe);
      iVar14 = 0x3fd;
      do {
        uStack_51 = puVar13[-1];
        uStack_50 = *puVar13;
        uStack_4f = puVar13[1];
        uStack_4e = puVar12[-1];
        uStack_4d = *puVar12;
        uStack_4c = puVar12[1];
        uStack_4b = puVar12[0x3ff];
        uStack_4a = puVar12[0x400];
        uStack_49 = puVar12[0x401];
        insertion_sort_bytes(param_1,&uStack_51,9);
        puVar13 = puVar13 + 1;
        *puVar12 = uStack_4d;
        iVar15 = iVar14 + -1;
        bVar3 = 0 < iVar14;
        puVar12 = puVar12 + 1;
        iVar14 = iVar15;
      } while (bVar3 && iVar15 != 0);
      iStack_a8 = iStack_a8 + 1;
      iStack_ac = iStack_ac + 0x400;
    } while (iStack_a8 < 0x2ff);
    _cfg_48.uStack_40 = 0x400;
    _cfg_48.uStack_2e = 0;
    _cfg_48.pvStack_44 = pvVar9;
    _cfg_48.uStack_3e = _cfg_48.uStack_40;
    _cfg_48.uStack_3c = 0x300;
    _cfg_48.pvStack_38 = (void *)uVar5;
    _cfg_48.uStack_34 = uVar1;
    _cfg_48.uStack_32 = uVar1;
    _cfg_48.uStack_30 = uVar2;
    _cfg_48.uStack_2c = _cfg_48.uStack_2e;
    _cfg_48.uStack_2a = _cfg_48.uStack_2e;
    _cfg_48.uStack_28 = _cfg_48.uStack_2e;
    _cfg_48.uStack_26 = _cfg_48.uStack_2e;
    eventflag_clr_flg(puVar10,1);
    build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x28)),(int)(1),(void *)(iVar8),(int *)(&_cfg_48.uStack_48));
    eventflag_wai_flg(puVar10,1,&_cfg_48.uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar10,1);
    configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
    _cfg_48.uStack_40 = 0x200;
    _cfg_48.uStack_2e = 0;
    _cfg_48.pvStack_44 = (void *)((int)pvVar9 + 0xc0000);
    _cfg_48.uStack_3e = _cfg_48.uStack_40;
    _cfg_48.uStack_3c = 0x300;
    _cfg_48.pvStack_38 = (void *)uVar6;
    _cfg_48.uStack_34 = uVar4;
    _cfg_48.uStack_32 = uVar4;
    _cfg_48.uStack_30 = uVar2;
    _cfg_48.uStack_2c = _cfg_48.uStack_2e;
    _cfg_48.uStack_2a = _cfg_48.uStack_2e;
    _cfg_48.uStack_28 = _cfg_48.uStack_2e;
    _cfg_48.uStack_26 = _cfg_48.uStack_2e;
    eventflag_clr_flg(puVar10,1);
    build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x28)),(int)(1),(void *)(iVar8),(int *)(&_cfg_48.uStack_48));
    eventflag_wai_flg(puVar10,1,&_cfg_48.uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar10,1);
    configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
    _cfg_48.pvStack_44 = (void *)((int)pvVar9 + 0x120000);
    _cfg_48.pvStack_38 = (void *)uVar7;
    eventflag_clr_flg(puVar10,1);
    build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x28)),(int)(1),(void *)(iVar8),(int *)(&_cfg_48.uStack_48));
    eventflag_wai_flg(puVar10,1,&_cfg_48.uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar10,1);
    configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
    pvVar11 = (void *)get_system_heap();
    mempool_release_block(pvVar11,pvVar9);
  }
  return;
}

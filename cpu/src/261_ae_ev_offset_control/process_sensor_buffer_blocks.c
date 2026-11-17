/* @k10d process_sensor_buffer_blocks @ 0x104f72f4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Allocates two large memory pools, configures DMA-like transfer descriptors for three
 *   buffer regions, and processes pixel data in a nested loop.
 * summary:
 *   The function allocates two 0x180000-byte blocks from the system memory pool. It then
 *   sets up a series of transfer descriptors (via build_sensor_readout_params and
 *   eventflag_wai_flg) pointing to three distinct regions within the first buffer (offsets
 *   0, 0xc0000, 0x120000) and a corresponding region in the second buffer. A nested loop
 *   iterates over these regions, calling insertion_sort_bytes on 9-byte chunks of data,
 *   suggesting a pixel or line-by-line processing step. Finally, it releases the allocated
 *   memory blocks.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_sensor_buffer_blocks(int param_1, int param_2, uint32_t param_x2)

{
  ushort uVar1;
  uint16_t uVar2;
  bool bVar3;
  ushort uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  uint32_t *puVar13;
  uint8_t *puVar14;
  uint8_t *puVar15;
  uint8_t *puVar16;
  uintptr_t sp;
  int iStack_b8;
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
  uint32_t uStack_48;
  void *pvStack_44;
  ushort uStack_40;
  ushort uStack_3e;
  uint16_t uStack_3c;
  void *pvStack_38;
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
  
  uStack_c = 0;
  uVar1 = *(ushort *)(param_2 + 0x10);
  uVar2 = *(uint16_t *)(param_2 + 0x12);
  pvVar10 = (void *)get_system_heap();
  pvVar10 = (void *)mempool_get_block(pvVar10,(void *)0x180000,0);
  pvVar11 = (void *)get_system_heap();
  pvVar11 = (void *)mempool_get_block(pvVar11,(void *)0x180000,0);
  if (pvVar10 != (void *)0x0) {
    if (pvVar11 != (void *)0x0) {
      uVar5 = *(uint32_t *)(param_2 + 4);
      uVar6 = *(uint32_t *)(param_2 + 8);
      uVar7 = *(uint32_t *)(param_2 + 0xc);
      uStack_18 = 0;
      uStack_16 = 0;
      uStack_12 = 0;
      uStack_10 = 0;
      uStack_2e = 0;
      uStack_34 = 0x400;
      uStack_32 = 0x400;
      uStack_30 = 0x300;
      uStack_2a = 0;
      puVar13 = (uint32_t *)(param_1 + 0x38);
      uStack_24 = 0;
      uStack_23 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_1b = 0;
      uStack_1a = 0;
      uStack_14 = 0;
      uStack_48 = 3;
      pvStack_44 = (void *)uVar5;
      uStack_40 = uVar1;
      uStack_3e = uVar1;
      uStack_3c = uVar2;
      pvStack_38 = pvVar10;
      uStack_2c = uStack_2e;
      uStack_28 = uStack_2a;
      uStack_26 = uStack_2a;
      eventflag_clr_flg(puVar13,1);
      iVar8 = param_1 + 4;
      build_sensor_readout_params(*(uint32_t *)(param_1 + 0x28),1,(void *)iVar8,&uStack_48);
      eventflag_wai_flg(puVar13,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar13,1);
      configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
      uVar4 = uVar1 >> 1;
      uStack_2e = 0;
      uStack_34 = 0x200;
      uStack_32 = 0x200;
      uStack_30 = 0x300;
      uStack_2a = 0;
      pvStack_44 = (void *)uVar6;
      uStack_40 = uVar4;
      uStack_3e = uVar4;
      uStack_3c = uVar2;
      pvStack_38 = (void *)((int)pvVar10 + 0xc0000);
      uStack_2c = uStack_2e;
      uStack_28 = uStack_2a;
      uStack_26 = uStack_2a;
      eventflag_clr_flg(puVar13,1);
      build_sensor_readout_params(*(uint32_t *)(param_1 + 0x28),1,(void *)iVar8,&uStack_48);
      eventflag_wai_flg(puVar13,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar13,1);
      configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
      pvStack_44 = (void *)uVar7;
      pvStack_38 = (void *)((int)pvVar10 + 0x120000);
      eventflag_clr_flg(puVar13,1);
      build_sensor_readout_params(*(uint32_t *)(param_1 + 0x28),1,(void *)iVar8,&uStack_48);
      eventflag_wai_flg(puVar13,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar13,1);
      configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
      iStack_a8 = 2;
      iStack_ac = 0x800;
      do {
        puVar14 = (uint8_t *)((int)pvVar10 + iStack_ac + 2);
        puVar16 = (uint8_t *)((int)pvVar11 + iStack_ac + 2);
        iStack_b8 = 0x3fd;
        puVar15 = (uint8_t *)((int)pvVar10 + iStack_ac + -0x3fe);
        do {
          uStack_51 = puVar15[-1];
          uStack_50 = *puVar15;
          uStack_4f = puVar15[1];
          uStack_4e = puVar14[-1];
          uStack_4d = *puVar14;
          uStack_4c = puVar14[1];
          uStack_4b = puVar14[0x3ff];
          uStack_4a = puVar14[0x400];
          uStack_49 = puVar14[0x401];
          insertion_sort_bytes(param_1,&uStack_51,9);
          puVar14 = puVar14 + 1;
          *puVar16 = uStack_51;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
          iVar9 = iStack_b8 + -1;
          bVar3 = 0 < iStack_b8;
          iStack_b8 = iVar9;
        } while (bVar3 && iVar9 != 0);
        iStack_a8 = iStack_a8 + 1;
        iStack_ac = iStack_ac + 0x400;
      } while (iStack_a8 < 0x2ff);
      uStack_40 = 0x400;
      uStack_2e = 0;
      pvStack_44 = pvVar11;
      uStack_3e = uStack_40;
      uStack_3c = 0x300;
      pvStack_38 = (void *)uVar5;
      uStack_34 = uVar1;
      uStack_32 = uVar1;
      uStack_30 = uVar2;
      uStack_2c = uStack_2e;
      uStack_2a = uStack_2e;
      uStack_28 = uStack_2e;
      uStack_26 = uStack_2e;
      eventflag_clr_flg(puVar13,1);
      build_sensor_readout_params(*(uint32_t *)(param_1 + 0x28),1,(void *)iVar8,&uStack_48);
      eventflag_wai_flg(puVar13,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar13,1);
      configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
      uStack_40 = 0x200;
      uStack_2e = 0;
      pvStack_44 = (void *)((int)pvVar10 + 0xc0000);
      uStack_3e = uStack_40;
      uStack_3c = 0x300;
      pvStack_38 = (void *)uVar6;
      uStack_34 = uVar4;
      uStack_32 = uVar4;
      uStack_30 = uVar2;
      uStack_2c = uStack_2e;
      uStack_2a = uStack_2e;
      uStack_28 = uStack_2e;
      uStack_26 = uStack_2e;
      eventflag_clr_flg(puVar13,1);
      build_sensor_readout_params(*(uint32_t *)(param_1 + 0x28),1,(void *)iVar8,&uStack_48);
      eventflag_wai_flg(puVar13,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar13,1);
      configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
      pvStack_44 = (void *)((int)pvVar10 + 0x120000);
      pvStack_38 = (void *)uVar7;
      eventflag_clr_flg(puVar13,1);
      build_sensor_readout_params(*(uint32_t *)(param_1 + 0x28),1,(void *)iVar8,&uStack_48);
      eventflag_wai_flg(puVar13,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar13,1);
      configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
      pvVar12 = (void *)get_system_heap();
      mempool_release_block(pvVar12,pvVar10);
      pvVar10 = (void *)get_system_heap();
      mempool_release_block(pvVar10,pvVar11);
      return;
    }
    pvVar12 = (void *)get_system_heap();
    mempool_release_block(pvVar12,pvVar10);
  }
  if (pvVar11 != (void *)0x0) {
    pvVar11 = (void *)get_system_heap();
    mempool_release_block(pvVar11,pvVar10);
  }
  return;
}

/* @k10d allocate_and_configure_image_buffers @ 0x104f61c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 260_ae_ev_offset_config (unit names are model-proposed)
 * purpose:
 *   Allocates two memory pools for image data and configures a large stack struct with
 *   dimensions and pointers for processing.
 * summary:
 *   The function reads width and height from param_2, allocates a buffer of size
 *   (width/8)*(height/8) and a second buffer of size width*height*2 from the system heap.
 *   It initializes a large local structure with these pointers, dimensions, and various
 *   flags, then calls several helper functions (init_event_struct_and_dispatch_104f827a,
 *   init_and_start_image_pipeline, send_three_payload_blocks) passing this structure and
 *   the allocated buffers. Finally, it releases both memory blocks and calls a virtual
 *   method on a class instance.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104f6312) overlaps instruction at (ram,0x104f6310)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void allocate_and_configure_image_buffers(int param_1,void *param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint16_t uVar10;
  uint16_t uVar11;
  uint16_t uVar12;
  uint16_t uVar13;
  uint32_t *puVar9;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  int iVar17;
  uintptr_t sp;
  uint32_t *puVar18;
  uint8_t auStack_1cc [20];
  uint16_t uStack_116;
  uint16_t uStack_114;
  uint16_t uStack_112;
  uint16_t uStack_110;
  uint16_t uStack_10e;
  uint16_t uStack_10c;
  uint16_t uStack_10a;
  uint16_t uStack_108;
  uint16_t uStack_106;
  uint32_t uStack_104;
  uint32_t uStack_100;
  uint32_t uStack_fc;
  uint32_t uStack_f8;
  ushort uStack_f4;
  ushort uStack_f2;
  ushort uStack_f0;
  uint16_t uStack_ee;
  uint16_t uStack_ec;
  uint32_t uStack_e8;
  void *pvStack_e4;
  void *pvStack_e0;
  int iStack_dc;
  ushort uStack_d8;
  ushort uStack_d6;
  ushort uStack_d4;
  uint16_t uStack_d2;
  uint16_t uStack_d0;
  int iStack_cc;
  uint32_t **ppuStack_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  void *puStack_bc;
  uint32_t *puStack_b8;
  uint32_t *puStack_b4;
  uint16_t uStack_b0;
  uint16_t uStack_ae;
  ushort uStack_ac;
  ushort uStack_aa;
  uint8_t uStack_a8;
  uint8_t uStack_a7;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint32_t uStack_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint16_t uStack_8c;
  uint16_t uStack_8a;
  uint16_t uStack_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  ushort uStack_7c;
  ushort uStack_7a;
  ushort uStack_78;
  void *pvStack_74;
  uint16_t uStack_70;
  uint16_t uStack_6e;
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  uint16_t uStack_68;
  uint16_t uStack_66;
  uint16_t uStack_64;
  uint16_t uStack_62;
  uint8_t uStack_60;
  uint8_t uStack_5f;
  uint32_t uStack_5c;
  uint8_t uStack_58;
  uint8_t uStack_57;
  uint8_t uStack_56;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint8_t uStack_50;
  uint16_t uStack_4e;
  uint16_t uStack_4c;
  uint32_t uStack_48;
  void *pvStack_44;
  uint16_t uStack_40;
  uint16_t uStack_3e;
  uint16_t uStack_3c;
  void *pvStack_38;
  ushort uStack_34;
  ushort uStack_32;
  ushort uStack_30;
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
  
  puVar18 = (uint32_t *)auStack_1cc;
  uStack_c4 = 0;
  uStack_104 = 1;
  uStack_e8 = 1;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f2 = 0;
  uStack_f0 = 0;
  uStack_ee = 0;
  uStack_ec = 0;
  pvStack_e4 = (void *)0x0;
  pvStack_e0 = (void *)0x0;
  iStack_dc = 0;
  uStack_d8 = 0;
  uStack_d6 = 0;
  uStack_d4 = 0;
  uStack_d2 = 0;
  uStack_d0 = 0;
  puStack_bc = &DAT_1059e4d0/*ROM*/;
  iStack_cc = 0;
  ppuStack_c8 = (uint32_t **)0x0;
  uStack_c0 = 0;
  puStack_b8 = (uint32_t *)0x0;
  puStack_b4 = (uint32_t *)0x0;
  uStack_b0 = 0x100;
  uStack_ae = 0x100;
  uStack_ac = 0;
  uStack_aa = 0;
  uStack_a8 = 1;
  uStack_a7 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_8a = 0x80;
  uStack_88 = 0x80;
  uStack_c = 0;
  uVar2 = *(ushort *)((int)param_2 + 0x10);
  uVar3 = *(ushort *)((int)param_2 + 0x12);
  iVar4 = (uint)(uVar2 >> 7) * 0x20;
  iVar5 = (uint)(uVar3 >> 7) * 0x20;
  pvVar14 = (void *)get_system_heap();
  pvVar14 = (void *)mempool_get_block(pvVar14,(void *)(iVar4 * iVar5),0);
  if (pvVar14 != (void *)0x0) {
    pvVar15 = (void *)get_system_heap();
    uVar1 = (uint)uVar3 * (uint)uVar2;
    pvVar15 = (void *)mempool_get_block(pvVar15,(void *)(uVar1 * 2),0);
    if (pvVar15 != (void *)0x0) {
      uVar6 = *(uint32_t *)((int)param_2 + 4);
      uVar7 = *(uint32_t *)((int)param_2 + 8);
      uVar8 = *(uint32_t *)((int)param_2 + 0xc);
      uStack_66 = 0;
      pvVar16 = (void *)(uVar1 + (int)pvVar15);
      iVar17 = (uVar1 >> 1) + (int)pvVar16;
      uStack_64 = 0;
      uStack_84 = 0;
      uStack_62 = 0;
      uStack_5c = 0;
      uStack_60 = 0;
      uVar10 = (uint16_t)(((uint)uVar2 + (uint)(uVar2 >> 7) * -0x80 >> 6) << 5);
      uVar11 = (uint16_t)(((uint)uVar3 + (uint)(uVar3 >> 7) * -0x80 >> 2) << 1);
      uVar12 = (uint16_t)iVar4;
      uVar13 = (uint16_t)iVar5;
      uStack_56 = 1;
      puVar9 = (uint32_t *)(param_1 + 0x38);
      uStack_54 = 0;
      uStack_52 = 0;
      uStack_4e = 0x400;
      uStack_4c = 0x400;
      uStack_80 = uVar6;
      uStack_7c = uVar2;
      uStack_7a = uVar2;
      uStack_78 = uVar3;
      pvStack_74 = pvVar14;
      uStack_70 = uVar12;
      uStack_6e = uVar12;
      uStack_6c = uVar13;
      uStack_6a = uVar10;
      uStack_68 = uVar11;
      uStack_5f = uStack_60;
      uStack_58 = uStack_60;
      uStack_57 = uStack_60;
      uStack_50 = uStack_56;
      eventflag_clr_flg(puVar9,1);
      iVar4 = param_1 + 4;
      build_sensor_readout_params(*(uint32_t *)(param_1 + 0x28),1,(void *)iVar4,&uStack_84);
      eventflag_wai_flg(puVar9,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar9,1);
      configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
      uStack_116 = 0x1c;
      uStack_114 = 0x1c;
      uStack_112 = 0x1c;
      uStack_110 = 0x1c;
      uStack_10e = 0x20;
      uStack_10c = 0x1c;
      uStack_10a = 0x1c;
      uStack_108 = 0x1c;
      uStack_106 = 0x1c;
      *(uint16_t *)((int)puVar18 + 2) = uVar13;
      *(uint16_t **)((int)puVar18 + 4) = &uStack_116;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar14,pvVar14,uVar12,*(uint16_t *)((int)puVar18 + 2),
                   *(uint32_t *)((int)puVar18 + 4));
      *(uint16_t *)((int)puVar18 + 2) = uVar13;
      *(uint16_t **)((int)puVar18 + 4) = &uStack_116;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar14,pvVar14,uVar12,*(uint16_t *)((int)puVar18 + 2),
                   *(uint32_t *)((int)puVar18 + 4));
      *(uint16_t *)((int)puVar18 + 2) = uVar13;
      *(uint16_t **)((int)puVar18 + 4) = &uStack_116;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar14,pvVar14,uVar12,*(uint16_t *)((int)puVar18 + 2),
                   *(uint32_t *)((int)puVar18 + 4));
      *(uint16_t *)((int)puVar18 + 2) = uVar13;
      *(uint16_t **)((int)puVar18 + 4) = &uStack_116;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar14,pvVar14,uVar12,*(uint16_t *)((int)puVar18 + 2),
                   *(uint32_t *)((int)puVar18 + 4));
      *(uint16_t *)((int)puVar18 + 2) = uVar13;
      *(uint16_t **)((int)puVar18 + 4) = &uStack_116;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar14,pvVar14,uVar12,*(uint16_t *)((int)puVar18 + 2),
                   *(uint32_t *)((int)puVar18 + 4));
      *(uint16_t *)((int)puVar18 + 2) = uVar13;
      *(uint16_t **)((int)puVar18 + 4) = &uStack_116;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar14,pvVar14,uVar12,*(uint16_t *)((int)puVar18 + 2),
                   *(uint32_t *)((int)puVar18 + 4));
      *(uint16_t *)((int)puVar18 + 2) = uVar13;
      *(uint16_t **)((int)puVar18 + 4) = &uStack_116;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar14,pvVar14,uVar12,*(uint16_t *)((int)puVar18 + 2),
                   *(uint32_t *)((int)puVar18 + 4));
      *(uint16_t *)((int)puVar18 + 2) = uVar13;
      *(uint16_t **)((int)puVar18 + 4) = &uStack_116;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar14,pvVar14,uVar12,*(uint16_t *)((int)puVar18 + 2),
                   *(uint32_t *)((int)puVar18 + 4));
      uStack_48 = 0;
      uStack_24 = 0;
      uStack_2e = 0;
      uStack_2c = 0;
      uStack_16 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_26 = 0;
      uStack_1a = 1;
      uStack_12 = 0x40;
      uStack_10 = 0x40;
      pvStack_44 = pvVar14;
      uStack_40 = uVar12;
      uStack_3e = uVar12;
      uStack_3c = uVar13;
      pvStack_38 = pvVar15;
      uStack_34 = uVar2;
      uStack_32 = uVar2;
      uStack_30 = uVar3;
      uStack_2a = uVar10;
      uStack_28 = uVar11;
      uStack_23 = uStack_24;
      uStack_1c = uStack_24;
      uStack_1b = uStack_24;
      uStack_14 = uStack_1a;
      eventflag_clr_flg(puVar9,1);
      build_sensor_readout_params(*(uint32_t *)(param_1 + 0x28),1,(void *)iVar4,&uStack_48);
      eventflag_wai_flg(puVar9,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar9,1);
      configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
      if (param_3 == 0) {
        uVar10 = 0x5c;
        uVar11 = 0x24;
      }
      else {
        uVar10 = 0x40;
        if (param_3 == 1) {
          uVar11 = 0x40;
        }
        else {
          uVar10 = 0x24;
          uVar11 = 0x5c;
        }
      }
      *(ushort *)((int)puVar18 + 2) = uVar2;
      *(ushort *)((int)puVar18 + 6) = uVar3;
      *(uint16_t *)((int)puVar18 + 10) = uVar10;
      *(uint16_t *)((int)puVar18 + 0xe) = uVar11;
      init_and_start_image_pipeline(param_1,uVar6,pvVar15,uVar6,*(uint16_t *)((int)puVar18 + 2),
                   *(uint16_t *)((int)puVar18 + 6),*(uint16_t *)((int)puVar18 + 10),
                   *(uint16_t *)((int)puVar18 + 0xe));
      uStack_ee = 0;
      uStack_ec = 0;
      uStack_d2 = 0;
      uStack_d0 = 0;
      uStack_b0 = 0xe8;
      uStack_ae = 0xe8;
      uStack_104 = 1;
      uStack_e8 = 1;
      uStack_ac = uVar2 >> 1;
      uStack_aa = uVar3 >> 1;
      uStack_a8 = 1;
      uStack_a7 = 1;
      uStack_c4 = 0x1130001;
      uStack_c0 = 0;
      uStack_100 = uVar6;
      uStack_fc = uVar7;
      uStack_f8 = uVar8;
      uStack_f4 = uVar2;
      uStack_f2 = uVar3;
      uStack_f0 = uVar2;
      pvStack_e4 = pvVar15;
      pvStack_e0 = pvVar16;
      iStack_dc = iVar17;
      uStack_d8 = uVar2;
      uStack_d6 = uVar3;
      uStack_d4 = uVar2;
      iStack_cc = iVar4;
      ppuStack_c8 = &puStack_b8;
      puStack_b8 = &uStack_104;
      puStack_b4 = &uStack_e8;
      eventflag_clr_flg(puVar9,1);
      reg_framework_send(*(int *)(param_1 + 0x30) + 8);
      eventflag_wai_flg(puVar9,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar9,1);
      *puVar18 = uVar6;
      puVar18[1] = uVar7;
      puVar18[2] = uVar8;
      *(ushort *)((int)puVar18 + 0xe) = uVar2;
      *(ushort *)((int)puVar18 + 0x12) = uVar3;
      send_three_payload_blocks(param_1,pvVar15,pvVar16,(void *)iVar17,*puVar18,puVar18[1],puVar18[2],
                   *(ushort *)((int)puVar18 + 0xe),*(uint16_t *)((int)puVar18 + 0x12));
      pvVar16 = (void *)get_system_heap();
      mempool_release_block(pvVar16,pvVar15);
    }
    pvVar15 = (void *)get_system_heap();
    mempool_release_block(pvVar15,pvVar14);
  }
  virtual_destructor_free_10428222(&iStack_cc,2);
  return;
}

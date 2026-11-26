/* @k10d configure_image_pipeline_buffers @ 0x104f51c6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 260_ae_ev_offset_config (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_image_pipeline_buffers(int param_1,uint32_t *param_2,int param_3)

{
  struct {
    uint8_t uStack_11;
    uint32_t uStack_10;
    ushort uStack_c;
    ushort uStack_a;
  } _cfg_11;
  uint16_t uVar1;
  uint16_t uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  uint32_t *puVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uintptr_t sp;
  uint32_t *puVar23;
  uint8_t local_260 [36];
  uint16_t local_186;
  uint16_t uStack_184;
  uint16_t uStack_182;
  uint16_t uStack_180;
  uint16_t uStack_17e;
  uint16_t uStack_17c;
  uint16_t uStack_17a;
  uint16_t uStack_178;
  uint16_t uStack_176;
  uint16_t uStack_174;
  uint16_t uStack_172;
  uint16_t uStack_170;
  uint16_t local_16e;
  uint16_t uStack_16c;
  uint16_t uStack_16a;
  uint16_t uStack_168;
  uint16_t uStack_166;
  uint16_t uStack_164;
  uint16_t uStack_162;
  uint16_t uStack_160;
  uint16_t uStack_15e;
  uint32_t uStack_15c;
  void *pvStack_158;
  void *pvStack_154;
  int iStack_150;
  ushort uStack_14c;
  ushort uStack_14a;
  ushort uStack_148;
  uint16_t uStack_146;
  uint16_t uStack_144;
  uint32_t uStack_140;
  void *pvStack_13c;
  void *pvStack_138;
  int iStack_134;
  ushort uStack_130;
  ushort uStack_12e;
  ushort uStack_12c;
  uint16_t uStack_12a;
  uint16_t uStack_128;
  int iStack_124;
  uint32_t **ppuStack_120;
  uint32_t uStack_11c;
  uint32_t uStack_118;
  void *puStack_114;
  uint32_t *puStack_110;
  uint32_t *puStack_10c;
  uint16_t uStack_108;
  uint16_t uStack_106;
  uint16_t uStack_104;
  uint16_t uStack_102;
  uint8_t uStack_100;
  uint8_t uStack_ff;
  uint32_t uStack_fc;
  uint32_t uStack_f8;
  uint32_t uStack_f4;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  uint32_t uStack_e8;
  uint16_t uStack_e4;
  uint16_t uStack_e2;
  uint16_t uStack_e0;
  uint32_t *puStack_dc;
  uint32_t *puStack_d8;
  uint16_t uStack_d4;
  uint16_t uStack_d2;
  uint16_t uStack_d0;
  uint32_t uStack_cc;
  int iStack_c8;
  short sStack_c4;
  ushort uStack_c2;
  ushort uStack_c0;
  void *pvStack_bc;
  uint16_t uStack_b8;
  uint16_t uStack_b6;
  uint16_t uStack_b4;
  uint16_t uStack_b2;
  uint16_t uStack_b0;
  uint16_t uStack_ae;
  uint16_t uStack_ac;
  uint16_t uStack_aa;
  uint8_t uStack_a8;
  uint8_t uStack_a7;
  void *pvStack_a4;
  uint8_t uStack_a0;
  uint8_t uStack_9f;
  uint8_t uStack_9e;
  uint16_t uStack_9c;
  uint16_t uStack_9a;
  uint8_t uStack_98;
  uint16_t uStack_96;
  uint16_t uStack_94;
  uint32_t uStack_90;
  void *pvStack_8c;
  uint16_t uStack_88;
  uint16_t uStack_86;
  uint16_t uStack_84;
  void *pvStack_80;
  short sStack_7c;
  ushort uStack_7a;
  ushort uStack_78;
  uint16_t uStack_76;
  uint16_t uStack_74;
  uint16_t uStack_72;
  uint16_t uStack_70;
  uint16_t uStack_6e;
  uint8_t uStack_6c;
  uint8_t uStack_6b;
  uint32_t uStack_68;
  uint8_t uStack_64;
  uint8_t uStack_63;
  uint8_t uStack_62;
  uint16_t uStack_60;
  uint16_t uStack_5e;
  uint8_t uStack_5c;
  uint16_t uStack_5a;
  uint16_t uStack_58;
  uint32_t uStack_54;
  ushort uStack_50;
  ushort uStack_4e;
  short sStack_4c;
  short sStack_4a;
  short sStack_48;
  int iStack_44;
  void *pvStack_40;
  void *pvStack_3c;
  uint32_t uStack_38;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  uint16_t uStack_1e;
  uint8_t uStack_1c;
  uint8_t uStack_1b;
  uint32_t uStack_18;
  puVar23 = (uint32_t *)local_260;
  if (*(ushort *)(param_2 + 4) < 0x401) {
    allocate_and_configure_image_buffers(param_1,param_2,param_3);
    return;
  }
  pvVar13 = (void *)((uint)*(ushort *)(param_2 + 5) * (uint)*(ushort *)((int)param_2 + 0x12));
  pvVar10 = (void *)get_system_heap();
  pvVar10 = (void *)mempool_get_block(pvVar10,pvVar13,0);
  pvVar11 = (void *)get_system_heap();
  pvVar11 = (void *)mempool_get_block(pvVar11,pvVar13,0);
  pvVar12 = (void *)get_system_heap();
  pvVar13 = (void *)mempool_get_block(pvVar12,pvVar13,0);
  if (pvVar10 == 0) {
LAB_104f5298:
    if (pvVar11 != 0) {
      pvVar10 = (void *)get_system_heap();
      mempool_release_block(pvVar10,pvVar11);
    }
    if (pvVar13 != 0) {
      pvVar10 = (void *)get_system_heap();
      mempool_release_block(pvVar10,pvVar13);
    }
    return;
  }
  if ((pvVar11 == 0) || (pvVar13 == 0)) {
    pvVar12 = (void *)get_system_heap();
    mempool_release_block(pvVar12,pvVar10);
    goto LAB_104f5298;
  }
  uVar16 = param_2[1];
  uVar17 = param_2[2];
  uVar18 = param_2[3];
  uVar1 = *(uint16_t *)(param_2 + 4);
  uVar2 = *(uint16_t *)((int)param_2 + 0x12);
  *puVar23 = (uintptr_t)(pvVar10);
  puVar23[1] = (uintptr_t)(pvVar11);
  puVar23[2] = (uintptr_t)(pvVar13);
  *(uint16_t *)((int)puVar23 + 0xe) = uVar1;
  *(uint16_t *)((int)puVar23 + 0x12) = uVar2;
  puVar23[5] = 0;
  puVar23[6] = 0;
  puVar23[7] = 0;
  init_event_queue_struct_104f84b4(param_1,uVar16,uVar17,uVar18,*puVar23,puVar23[1],puVar23[2],
               *(ushort *)((int)puVar23 + 0xe),*(uint16_t *)((int)puVar23 + 0x12),puVar23[5],
               puVar23[6],puVar23[7]);
  local_186 = 0x4c;
  uStack_184 = 0x96;
  uStack_182 = 0x1e;
  uStack_180 = 0;
  uStack_17e = 0xffd5;
  uStack_17c = 0xffab;
  uStack_17a = 0x80;
  uStack_178 = 0x100;
  uStack_176 = 0x80;
  uStack_174 = 0xff95;
  uStack_172 = 0xffeb;
  uStack_170 = 0x100;
  if (param_3 != 0) {
    if (param_3 == 1) {
      uStack_17e = 0xffd7;
      uStack_17c = 0xffae;
      uStack_17a = 0x7c;
      uStack_176 = 0x7c;
      uStack_174 = 0xff99;
      uStack_172 = 0xffec;
    }
    else if (param_3 == 2) {
      uStack_17e = 0xffd8;
      uStack_17c = 0xffb1;
      uStack_17a = 0x78;
      uStack_176 = 0x78;
      uStack_174 = 0xff9c;
      uStack_172 = 0xffed;
    }
  }
  uVar17 = param_2[2];
  uVar16 = param_2[3];
  uVar1 = *(uint16_t *)(param_2 + 4);
  uVar2 = *(uint16_t *)((int)param_2 + 0x12);
  *puVar23 = param_2[1];
  puVar23[1] = uVar17;
  puVar23[2] = uVar16;
  *(uint16_t *)((int)puVar23 + 0xe) = uVar1;
  *(uint16_t *)((int)puVar23 + 0x12) = uVar2;
  puVar23[5] = 0;
  puVar23[6] = 0;
  puVar23[7] = 0;
  puVar23[8] = (uintptr_t)(&local_186);
  init_event_queue_struct_104f8648(param_1,pvVar10,pvVar11,pvVar13,*puVar23,puVar23[1],puVar23[2],
               *(ushort *)((int)puVar23 + 0xe),*(uint16_t *)((int)puVar23 + 0x12),puVar23[5],
               puVar23[6],puVar23[7],(uint16_t *)puVar23[8]);
  pvVar12 = (void *)get_system_heap();
  mempool_release_block(pvVar12,pvVar10);
  pvVar10 = (void *)get_system_heap();
  mempool_release_block(pvVar10,pvVar11);
  pvVar10 = (void *)get_system_heap();
  mempool_release_block(pvVar10,pvVar13);
  uStack_15c = 1;
  pvStack_158 = (void *)0x0;
  pvStack_154 = (void *)0x0;
  iStack_150 = 0;
  uStack_14c = 0;
  uStack_14a = 0;
  uStack_148 = 0;
  uStack_146 = 0;
  uStack_144 = 0;
  uStack_140 = 1;
  pvStack_13c = (void *)0x0;
  pvStack_138 = (void *)0x0;
  iStack_134 = 0;
  uStack_130 = 0;
  uStack_12e = 0;
  uStack_12c = 0;
  uStack_12a = 0;
  uStack_128 = 0;
  puStack_114 = &DAT_1059e4d0/*ROM*/;
  iStack_124 = 0;
  ppuStack_120 = (uint32_t **)0x0;
  uStack_11c = 0;
  uStack_118 = 0;
  puStack_110 = (uint32_t *)0x0;
  puStack_10c = (uint32_t *)0x0;
  uStack_104 = 0;
  uStack_108 = 0x100;
  uStack_102 = 0;
  uStack_100 = 1;
  uStack_ff = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e2 = 0x80;
  _cfg_11.uStack_10 = 0;
  _cfg_11.uStack_c = 0;
  _cfg_11.uStack_a = 0;
  uStack_106 = uStack_108;
  uStack_e0 = uStack_e2;
  select_two_parameter_values_by_index(&_cfg_11.uStack_11,0,&_cfg_11.uStack_c,&_cfg_11.uStack_a);
  uVar6 = (uint)_cfg_11.uStack_c;
  uVar5 = (uint)_cfg_11.uStack_a;
  uVar3 = _cfg_11.uStack_c >> 8;
  iVar20 = (uint)uVar3 * 0x20;
  uVar4 = _cfg_11.uStack_a >> 8;
  iVar9 = (uint)uVar4 * 0x20;
  pvVar13 = (void *)get_system_heap();
  pvVar13 = (void *)mempool_get_block(pvVar13,(void *)((_cfg_11.uStack_c + 0x20) * (uint)_cfg_11.uStack_a * 2 + 0x80
                                                      ),0);
  pvVar10 = (void *)get_system_heap();
  pvVar10 = (void *)mempool_get_block(pvVar10,(void *)((_cfg_11.uStack_c + 0x20) * (uint)_cfg_11.uStack_a * 2 + 0x80
                                                      ),0);
  pvVar11 = (void *)get_system_heap();
  pvVar11 = (void *)mempool_get_block(pvVar11,(void *)(iVar20 * iVar9),0);
  pvVar12 = (void *)get_system_heap();
  pvVar12 = (void *)mempool_get_block(pvVar12,(void *)0x100,0);
  if (pvVar13 != 0) {
    if (((pvVar10 != 0) && (pvVar11 != 0)) && (pvVar12 != 0)) {
      iVar21 = (int)pvVar13 + 0x20;
      iVar8 = (_cfg_11.uStack_c + 0x20) * (uint)_cfg_11.uStack_a;
      iVar7 = iVar21 + iVar8;
      iVar22 = iVar8 / 2 + iVar7;
      uStack_140 = 1;
      uStack_130 = _cfg_11.uStack_c;
      uStack_12e = _cfg_11.uStack_a;
      uStack_12c = (ushort)(_cfg_11.uStack_c + 0x20);
      uStack_12a = 0;
      uStack_128 = 0;
      uStack_d4 = 0;
      uStack_d2 = 0x80;
      uStack_11c = 0x900001;
      iVar8 = param_1 + 4;
      uStack_118 = 0;
      puVar15 = (uint32_t *)(param_1 + 0x38);
      pvStack_13c = (void *)iVar21;
      pvStack_138 = (void *)iVar7;
      iStack_134 = iVar22;
      iStack_124 = iVar8;
      ppuStack_120 = &puStack_dc;
      puStack_dc = param_2;
      puStack_d8 = &uStack_140;
      uStack_d0 = uStack_d2;
      eventflag_clr_flg(puVar15,1);
      reg_framework_send(*(int *)(param_1 + 0x34) + 8, &iStack_124, 0x2);
      eventflag_wai_flg(puVar15,1,&_cfg_11.uStack_10,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar15,1);
      uStack_cc = 0;
      uStack_a8 = 0;
      pvStack_a4 = (void *)0x0;
      uStack_a0 = 0;
      sStack_c4 = _cfg_11.uStack_c + 0x20;
      uStack_c2 = _cfg_11.uStack_c;
      uStack_c0 = _cfg_11.uStack_a;
      uStack_b2 = 0;
      uStack_b0 = 0;
      uStack_88 = (uint16_t)iVar20;
      uStack_84 = (uint16_t)iVar9;
      uStack_ae = 0;
      uStack_ac = 0;
      uStack_aa = 0;
      uStack_9e = 1;
      uStack_9c = 0;
      uStack_9a = 0;
      uStack_96 = 0x800;
      uStack_94 = 0x800;
      uStack_a7 = uStack_a8;
      if (param_3 == 2) {
        iVar9 = 0;
        iVar20 = 0x3f;
        iVar19 = 0;
        do {
          *(char *)(iVar9 + (int)pvVar12) =
               (char)(((uint)(iVar19 >> 7) >> 0x18) + iVar19 >> 8) + '\b';
          *(char *)(iVar9 + 1 + (int)pvVar12) =
               (char)(((uint)(iVar19 + 0xf0 >> 7) >> 0x18) + iVar19 + 0xf0 >> 8) + '\b';
          *(char *)(iVar9 + 2 + (int)pvVar12) =
               (char)(((uint)(iVar19 + 0x1e0 >> 7) >> 0x18) + iVar19 + 0x1e0 >> 8) + '\b';
          *(char *)((int)pvVar12 + iVar9 + 3) =
               (char)(((uint)(iVar19 + 0x2d0 >> 7) >> 0x18) + iVar19 + 0x2d0 >> 8) + '\b';
          iVar19 = iVar19 + 0x3c0;
          iVar20 = iVar20 + -1;
          iVar9 = iVar9 + 4;
        } while (-1 < iVar20);
        uStack_a7 = 1;
        pvStack_a4 = pvVar12;
      }
      iStack_c8 = iVar21;
      pvStack_bc = pvVar11;
      uStack_b8 = uStack_88;
      uStack_b6 = uStack_88;
      uStack_b4 = uStack_84;
      uStack_9f = uStack_a0;
      uStack_98 = uStack_9e;
      eventflag_clr_flg(puVar15,1);
      build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x28)),(int)(1),(void *)(iVar8),(int *)(&uStack_cc));
      eventflag_wai_flg(puVar15,1,&_cfg_11.uStack_10,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar15,1);
      configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
      local_16e = 0x1c;
      uStack_16c = 0x1c;
      uStack_16a = 0x1c;
      uStack_168 = 0x1c;
      uStack_166 = 0x20;
      uStack_164 = 0x1c;
      uStack_162 = uStack_164;
      uStack_160 = uStack_164;
      uStack_15e = uStack_164;
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      *(uint16_t *)((int)puVar23 + 2) = uStack_84;
      *(uint16_t **)((int)puVar23 + 4) = &local_16e;
      init_event_struct_and_dispatch_104f827a(param_1,pvVar11,pvVar11,uStack_88,*(uint16_t *)((int)puVar23 + 2),
                   *(uint32_t *)((int)puVar23 + 4));
      uStack_90 = 0;
      uStack_6c = 0;
      uStack_6b = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_63 = 0;
      uStack_60 = 0;
      uStack_5e = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      uStack_7a = _cfg_11.uStack_c;
      sStack_7c = _cfg_11.uStack_c + 0x20;
      uStack_72 = (uint16_t)((uVar6 + (uint)uVar3 * -0x100 >> 6) << 5);
      uStack_78 = _cfg_11.uStack_a;
      uStack_70 = (uint16_t)((uVar5 + (uint)uVar4 * -0x100 >> 2) << 1);
      uStack_62 = 1;
      uStack_5c = 1;
      uStack_6e = 0;
      uStack_5a = 0x20;
      pvStack_8c = pvVar11;
      uStack_86 = uStack_88;
      pvStack_80 = pvVar10;
      uStack_58 = uStack_5a;
      eventflag_clr_flg(puVar15,1);
      build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x28)),(int)(1),(void *)(iVar8),(int *)(&uStack_90));
      eventflag_wai_flg(puVar15,1,&_cfg_11.uStack_10,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar15,1);
      configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
      if (param_3 == 0) {
        uStack_34 = 0x4c;
        uStack_32 = 0x34;
      }
      else {
        uStack_34 = 0x40;
        if (param_3 == 1) {
          uStack_32 = 0x40;
        }
        else {
          uStack_34 = 0x34;
          uStack_32 = 0x4c;
        }
      }
      uStack_1b = 1;
      uStack_18 = 0;
      uStack_30 = 0x80;
      uStack_2e = 0x80;
      uStack_2c = 0x80;
      uStack_2a = 0x80;
      uStack_28 = 0x80;
      uStack_26 = 0x80;
      uStack_24 = 0x80;
      uStack_22 = 0x80;
      uStack_4e = _cfg_11.uStack_a;
      uStack_38 = 0;
      uStack_50 = _cfg_11.uStack_c;
      sStack_4c = _cfg_11.uStack_c + 0x20;
      uStack_20 = 0;
      uStack_1e = 0;
      uStack_1c = 0;
      uStack_54 = 2;
      puVar15 = (uint32_t *)(param_1 + 0x38);
      sStack_4a = sStack_4c;
      sStack_48 = sStack_4c;
      iStack_44 = iVar21;
      pvStack_40 = pvVar10;
      pvStack_3c = pvVar13;
      eventflag_clr_flg(puVar15,1);
      iVar9 = param_1 + 4;
      imgp_c_program_and_start_104fe976((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(iVar9),(int *)(&uStack_54));
      eventflag_wai_flg(puVar15,1,&_cfg_11.uStack_10,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar15,1);
      imgp_c_start_and_ack(*(uint32_t *)(param_1 + 0x24));
      uStack_15c = 1;
      uStack_14c = _cfg_11.uStack_c;
      uStack_14a = _cfg_11.uStack_a;
      uStack_148 = _cfg_11.uStack_c + 0x20;
      uStack_146 = 0;
      uStack_144 = 0;
      uStack_140 = 1;
      pvVar14 = (void *)((int)pvVar10 + (uint)_cfg_11.uStack_c * (uint)_cfg_11.uStack_a);
      iVar20 = (int)((uint)_cfg_11.uStack_c * (uint)_cfg_11.uStack_a) / 2 + (int)pvVar14;
      uStack_130 = _cfg_11.uStack_c;
      uStack_12e = _cfg_11.uStack_a;
      uStack_12c = _cfg_11.uStack_c;
      uStack_12a = 0;
      uStack_128 = 0;
      uStack_108 = 0xf0;
      uStack_106 = 0xf0;
      uStack_104 = (uint16_t)((int)(uint)_cfg_11.uStack_c >> 1);
      uStack_102 = (uint16_t)((int)(uint)_cfg_11.uStack_a >> 1);
      uStack_100 = 1;
      uStack_11c = 0x1130001;
      uStack_118 = 0;
      pvStack_158 = pvVar13;
      pvStack_154 = (void *)iVar7;
      iStack_150 = iVar22;
      pvStack_13c = pvVar10;
      pvStack_138 = pvVar14;
      iStack_134 = iVar20;
      iStack_124 = iVar9;
      ppuStack_120 = &puStack_110;
      puStack_110 = &uStack_15c;
      puStack_10c = &uStack_140;
      uStack_ff = uStack_100;
      eventflag_clr_flg(puVar15,1);
      reg_framework_send(*(int *)(param_1 + 0x30) + 8, &iStack_124, 0x2);
      eventflag_wai_flg(puVar15,1,&_cfg_11.uStack_10,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar15,1);
      uStack_15c = 1;
      uStack_14c = _cfg_11.uStack_c;
      uStack_14a = _cfg_11.uStack_a;
      uStack_148 = _cfg_11.uStack_c;
      uStack_146 = 0;
      uStack_144 = 0;
      uStack_11c = 0x900001;
      uStack_118 = 0;
      pvStack_158 = pvVar10;
      pvStack_154 = pvVar14;
      iStack_150 = iVar20;
      iStack_124 = iVar9;
      ppuStack_120 = &puStack_dc;
      puStack_dc = &uStack_15c;
      puStack_d8 = param_2;
      eventflag_clr_flg(puVar15,1);
      reg_framework_send(*(int *)(param_1 + 0x34) + 8, &iStack_124, 0x2);
      eventflag_wai_flg(puVar15,1,&_cfg_11.uStack_10,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar15,1);
      pvVar14 = (void *)get_system_heap();
      mempool_release_block(pvVar14,pvVar13);
      pvVar13 = (void *)get_system_heap();
      mempool_release_block(pvVar13,pvVar10);
      pvVar13 = (void *)get_system_heap();
      mempool_release_block(pvVar13,pvVar11);
      pvVar13 = (void *)get_system_heap();
      mempool_release_block(pvVar13,pvVar12);
      goto LAB_104f61b0;
    }
    pvVar14 = (void *)get_system_heap();
    mempool_release_block(pvVar14,pvVar13);
  }
  if (pvVar10 != 0) {
    pvVar13 = (void *)get_system_heap();
    mempool_release_block(pvVar13,pvVar10);
  }
  if (pvVar11 != 0) {
    pvVar13 = (void *)get_system_heap();
    mempool_release_block(pvVar13,pvVar11);
  }
  if (pvVar12 != 0) {
    pvVar13 = (void *)get_system_heap();
    mempool_release_block(pvVar13,pvVar12);
  }
LAB_104f61b0:
  virtual_destructor_free_10428222(&iStack_124,2);
  return;
}

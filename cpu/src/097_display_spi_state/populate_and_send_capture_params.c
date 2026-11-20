/* @k10d populate_and_send_capture_params @ 0x1041df56
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Populates four large parameter structs from virtual object properties and transmits
 *   them to four target channels.
 * summary:
 *   The function initializes four large stack structures (approx 0x40 bytes each) by
 *   calling numerous virtual methods on an object pointer stored at param_1+0x30. It maps
 *   specific virtual slots to struct fields, including a size calculation based on a
 *   virtual property (0x5c) and offset calculations based on another (0x9c). It then calls
 *   apply_struct_fields_via_setters four times to transmit these structs to channels
 *   identified by pointers at param_1+0xd4 through 0xe0. Finally, it constructs two smaller
 *   parameter blocks (aiStack_78, aiStack_54) based on virtual properties (0x134, 0x13c)
 *   and sends them via apply_pipeline_config_to_channels to channels at param_1+0xec and
 *   0xf0, followed by a final update via write_fourteen_mmio_values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_and_send_capture_params(void *param_1)

{
  struct {
    uint8_t uStack_198;
    uint8_t uStack_197;
    uint8_t uStack_196;
    uint8_t uStack_195;
    uint8_t uStack_194;
    uint32_t uStack_190;
    uint32_t uStack_18c;
    uint16_t uStack_188;
    uint16_t uStack_186;
    uint16_t uStack_184;
    uint16_t uStack_182;
    uint16_t uStack_180;
    int iStack_17c;
    uint32_t uStack_178;
    uint32_t uStack_174;
    uint32_t uStack_170;
    uint8_t uStack_16c;
    uint16_t uStack_16a;
    uint16_t uStack_168;
    uint16_t uStack_166;
    uint16_t uStack_164;
    uint16_t uStack_162;
    uint16_t uStack_160;
    uint32_t uStack_15c;
    uint32_t uStack_158;
    uint32_t uStack_154;
    uint8_t uStack_150;
    uint8_t uStack_14f;
    uint8_t uStack_14e;
    uint8_t uStack_14d;
    uint8_t uStack_14c;
    uint32_t uStack_148;
    uint32_t uStack_144;
    uint16_t uStack_140;
    uint16_t uStack_13e;
    uint16_t uStack_13c;
    uint16_t uStack_13a;
    uint16_t uStack_138;
    int iStack_134;
    uint32_t uStack_130;
    uint32_t uStack_12c;
    uint32_t uStack_128;
    uint8_t uStack_124;
    uint16_t uStack_122;
    uint16_t uStack_120;
    uint16_t uStack_11e;
    uint16_t uStack_11c;
    uint16_t uStack_11a;
    uint16_t uStack_118;
    uint32_t uStack_114;
    uint32_t uStack_110;
    uint32_t uStack_10c;
    uint8_t uStack_108;
    uint8_t uStack_107;
    uint8_t uStack_106;
    uint8_t uStack_105;
    uint8_t uStack_104;
    uint32_t uStack_100;
    uint32_t uStack_fc;
    uint16_t uStack_f8;
    uint16_t uStack_f6;
    uint16_t uStack_f4;
    uint16_t uStack_f2;
    uint16_t uStack_f0;
    int iStack_ec;
    uint32_t uStack_e8;
    uint32_t uStack_e4;
    uint32_t uStack_e0;
    uint8_t uStack_dc;
    uint16_t uStack_da;
    uint16_t uStack_d8;
    uint16_t uStack_d6;
    uint16_t uStack_d4;
    uint16_t uStack_d2;
    uint16_t uStack_d0;
    uint32_t uStack_cc;
    uint32_t uStack_c8;
    uint32_t uStack_c4;
    uint8_t uStack_c0;
    uint8_t uStack_bf;
    uint8_t uStack_be;
    uint8_t uStack_bd;
    uint8_t uStack_bc;
    uint32_t uStack_b8;
    uint32_t uStack_b4;
    uint16_t uStack_b0;
    uint16_t uStack_ae;
    uint16_t uStack_ac;
    uint16_t uStack_aa;
    uint16_t uStack_a8;
    int iStack_a4;
    uint32_t uStack_a0;
    uint32_t uStack_9c;
    uint32_t uStack_98;
    uint8_t uStack_94;
    uint16_t uStack_92;
    uint16_t uStack_90;
    uint16_t uStack_8e;
    uint16_t uStack_8c;
    uint16_t uStack_8a;
    uint16_t uStack_88;
    uint32_t uStack_84;
    uint32_t uStack_80;
    uint32_t uStack_7c;
  } _cfg_198;
  struct {
    uint8_t uStack_d;
    uint8_t uStack_c;
    uint8_t uStack_b;
    uint8_t uStack_a;
    uint8_t uStack_9;
  } _cfg_d;
  char cVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  int aiStack_78 [5];
  uint8_t uStack_64;
  uint8_t uStack_63;
  uint8_t uStack_62;
  uint8_t uStack_61;
  uint8_t uStack_60;
  uint8_t uStack_5f;
  uint8_t uStack_5e;
  uint8_t uStack_5d;
  uint8_t uStack_5c;
  uint8_t uStack_5b;
  uint8_t uStack_5a;
  uint8_t uStack_59;
  uint8_t uStack_58;
  uint8_t uStack_57;
  int aiStack_54 [5];
  uint8_t uStack_40;
  uint8_t uStack_3f;
  uint8_t uStack_3e;
  uint8_t uStack_3d;
  uint8_t uStack_3c;
  uint8_t uStack_3b;
  uint8_t uStack_3a;
  uint8_t uStack_39;
  uint8_t uStack_38;
  uint8_t uStack_37;
  uint8_t uStack_36;
  uint8_t uStack_35;
  uint8_t uStack_34;
  uint8_t uStack_33;
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  _cfg_d.uStack_d = 1;
  _cfg_d.uStack_c = 1;
  _cfg_d.uStack_b = 1;
  _cfg_d.uStack_a = 1;
  _cfg_d.uStack_9 = 1;
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_d.uStack_d = (((vtbl_entry*)(iVar5))[8].fn)
                       ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[8].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_d.uStack_c = (((vtbl_entry*)(iVar5))[9].fn)
                       ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[9].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_d.uStack_b = (((vtbl_entry*)(iVar5))[40].fn)
                       ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[40].adj);
  _cfg_d.uStack_a = 1;
  _cfg_d.uStack_9 = 1;
  dispatch_seven_byte_command(*(uint32_t *)((int)param_1 + 0x28),&_cfg_d.uStack_d);
  _cfg_198.uStack_198 = 1;
  _cfg_198.uStack_197 = 0;
  _cfg_198.uStack_196 = 0;
  _cfg_198.uStack_195 = 0;
  _cfg_198.uStack_194 = 0;
  _cfg_198.uStack_190 = 8;
  _cfg_198.uStack_18c = 0;
  _cfg_198.uStack_188 = 0;
  _cfg_198.uStack_186 = 0;
  _cfg_198.uStack_184 = 0;
  _cfg_198.uStack_182 = 0;
  _cfg_198.uStack_180 = 0;
  _cfg_198.iStack_17c = 0;
  _cfg_198.uStack_178 = 0;
  _cfg_198.uStack_174 = 0;
  _cfg_198.uStack_170 = 0;
  _cfg_198.uStack_16c = 0;
  _cfg_198.uStack_16a = 0;
  _cfg_198.uStack_168 = 0;
  _cfg_198.uStack_166 = 0;
  _cfg_198.uStack_164 = 0;
  _cfg_198.uStack_162 = 1;
  _cfg_198.uStack_160 = 1;
  _cfg_198.uStack_154 = 0x80000000/*SDRAM*/;
  _cfg_198.uStack_15c = 0;
  _cfg_198.uStack_158 = 0;
  _cfg_198.uStack_150 = 1;
  _cfg_198.uStack_14f = 0;
  _cfg_198.uStack_148 = 8;
  _cfg_198.uStack_144 = 0;
  _cfg_198.uStack_140 = 0;
  _cfg_198.uStack_13e = 0;
  _cfg_198.uStack_13c = 0;
  _cfg_198.uStack_13a = 0;
  _cfg_198.uStack_138 = 0;
  _cfg_198.iStack_134 = 0;
  _cfg_198.uStack_130 = 0;
  _cfg_198.uStack_12c = 0;
  _cfg_198.uStack_128 = 0;
  _cfg_198.uStack_124 = 0;
  _cfg_198.uStack_122 = 0;
  _cfg_198.uStack_120 = 0;
  _cfg_198.uStack_11e = 0;
  _cfg_198.uStack_11c = 0;
  _cfg_198.uStack_11a = 1;
  _cfg_198.uStack_118 = 1;
  _cfg_198.uStack_10c = 0x80000000/*SDRAM*/;
  _cfg_198.uStack_114 = 0;
  _cfg_198.uStack_110 = 0;
  _cfg_198.uStack_108 = 1;
  _cfg_198.uStack_107 = 0;
  _cfg_198.uStack_fc = 0;
  _cfg_198.uStack_100 = 8;
  _cfg_198.uStack_f8 = 0;
  _cfg_198.uStack_f6 = 0;
  _cfg_198.uStack_f4 = 0;
  _cfg_198.uStack_f2 = 0;
  _cfg_198.uStack_f0 = 0;
  _cfg_198.iStack_ec = 0;
  _cfg_198.uStack_e8 = 0;
  _cfg_198.uStack_e4 = 0;
  _cfg_198.uStack_e0 = 0;
  _cfg_198.uStack_dc = 0;
  _cfg_198.uStack_da = 0;
  _cfg_198.uStack_d8 = 0;
  _cfg_198.uStack_d6 = 0;
  _cfg_198.uStack_d4 = 0;
  _cfg_198.uStack_d2 = 1;
  _cfg_198.uStack_d0 = 1;
  _cfg_198.uStack_c4 = 0x80000000/*SDRAM*/;
  _cfg_198.uStack_cc = 0;
  _cfg_198.uStack_c8 = 0;
  _cfg_198.uStack_c0 = 1;
  _cfg_198.uStack_bf = 0;
  _cfg_198.uStack_b4 = 0;
  _cfg_198.uStack_b8 = 8;
  _cfg_198.uStack_b0 = 0;
  _cfg_198.uStack_ae = 0;
  _cfg_198.uStack_ac = 0;
  _cfg_198.uStack_aa = 0;
  _cfg_198.uStack_a8 = 0;
  _cfg_198.iStack_a4 = 0;
  _cfg_198.uStack_a0 = 0;
  _cfg_198.uStack_9c = 0;
  _cfg_198.uStack_98 = 0;
  _cfg_198.uStack_94 = 0;
  _cfg_198.uStack_7c = 0x80000000/*SDRAM*/;
  _cfg_198.uStack_92 = 0;
  _cfg_198.uStack_90 = 0;
  _cfg_198.uStack_8e = 0;
  _cfg_198.uStack_8c = 0;
  _cfg_198.uStack_8a = 1;
  _cfg_198.uStack_88 = 1;
  _cfg_198.uStack_84 = 0;
  _cfg_198.uStack_80 = 0;
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_14e = _cfg_198.uStack_14f;
  _cfg_198.uStack_14d = _cfg_198.uStack_14f;
  _cfg_198.uStack_14c = _cfg_198.uStack_14f;
  _cfg_198.uStack_106 = _cfg_198.uStack_107;
  _cfg_198.uStack_105 = _cfg_198.uStack_107;
  _cfg_198.uStack_104 = _cfg_198.uStack_107;
  _cfg_198.uStack_be = _cfg_198.uStack_bf;
  _cfg_198.uStack_bd = _cfg_198.uStack_bf;
  _cfg_198.uStack_bc = _cfg_198.uStack_bf;
  _cfg_198.uStack_198 = (((vtbl_entry*)(iVar5))[7].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[7].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_150 = (((vtbl_entry*)(iVar5))[7].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[7].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_108 = (((vtbl_entry*)(iVar5))[7].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[7].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_c0 = (((vtbl_entry*)(iVar5))[7].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[7].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_197 = (((vtbl_entry*)(iVar5))[8].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[8].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_14f = (((vtbl_entry*)(iVar5))[8].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[8].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_107 = (((vtbl_entry*)(iVar5))[8].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[8].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_bf = (((vtbl_entry*)(iVar5))[8].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[8].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_196 = (((vtbl_entry*)(iVar5))[9].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[9].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_14e = (((vtbl_entry*)(iVar5))[9].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[9].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_106 = (((vtbl_entry*)(iVar5))[9].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[9].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  uVar3 = 8;
  _cfg_198.uStack_be = (((vtbl_entry*)(iVar5))[9].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[9].adj);
  _cfg_198.uStack_195 = 0;
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_14d = _cfg_198.uStack_195;
  _cfg_198.uStack_105 = _cfg_198.uStack_195;
  _cfg_198.uStack_bd = _cfg_198.uStack_195;
  iVar5 = (((vtbl_entry*)(iVar5))[11].fn)
                    ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[11].adj);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else if (iVar5 == 1) {
    uVar3 = 4;
  }
  else if (iVar5 == 2) {
    uVar3 = 8;
  }
  else if (iVar5 == 3) {
    uVar3 = 0xc;
  }
  _cfg_198.uStack_18c = 0;
  _cfg_198.uStack_144 = 0;
  _cfg_198.uStack_fc = 0;
  _cfg_198.uStack_b4 = 0;
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_190 = uVar3;
  _cfg_198.uStack_148 = uVar3;
  _cfg_198.uStack_100 = uVar3;
  _cfg_198.uStack_b8 = uVar3;
  _cfg_198.uStack_188 = (((vtbl_entry*)(iVar5))[12].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[12].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_140 = (((vtbl_entry*)(iVar5))[12].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[12].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_f8 = (((vtbl_entry*)(iVar5))[12].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[12].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_b0 = (((vtbl_entry*)(iVar5))[12].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[12].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_186 = (((vtbl_entry*)(iVar5))[13].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[13].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_13e = (((vtbl_entry*)(iVar5))[13].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[13].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_f6 = (((vtbl_entry*)(iVar5))[13].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[13].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_ae = (((vtbl_entry*)(iVar5))[13].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[13].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_184 = (((vtbl_entry*)(iVar5))[16].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[16].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_13c = (((vtbl_entry*)(iVar5))[16].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[16].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_f4 = (((vtbl_entry*)(iVar5))[16].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[16].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_ac = (((vtbl_entry*)(iVar5))[16].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[16].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_182 = (((vtbl_entry*)(iVar5))[17].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[17].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_13a = (((vtbl_entry*)(iVar5))[17].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[17].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_f2 = (((vtbl_entry*)(iVar5))[17].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[17].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_aa = (((vtbl_entry*)(iVar5))[17].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[17].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_180 = (((vtbl_entry*)(iVar5))[19].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[19].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_138 = (((vtbl_entry*)(iVar5))[19].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[19].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_f0 = (((vtbl_entry*)(iVar5))[19].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[19].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_a8 = (((vtbl_entry*)(iVar5))[19].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[19].adj);
  _cfg_198.uStack_174 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 8);
  _cfg_198.uStack_12c = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 8);
  _cfg_198.uStack_e4 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 8);
  _cfg_198.uStack_9c = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 8);
  _cfg_198.uStack_170 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0xc);
  _cfg_198.uStack_128 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0xc);
  _cfg_198.uStack_e0 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0xc);
  _cfg_198.uStack_98 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0xc);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_16a = (((vtbl_entry*)(iVar5))[23].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[23].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_122 = (((vtbl_entry*)(iVar5))[23].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[23].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_da = (((vtbl_entry*)(iVar5))[23].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[23].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_92 = (((vtbl_entry*)(iVar5))[23].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[23].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_168 = (((vtbl_entry*)(iVar5))[24].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[24].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_120 = (((vtbl_entry*)(iVar5))[24].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[24].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_d8 = (((vtbl_entry*)(iVar5))[24].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[24].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_90 = (((vtbl_entry*)(iVar5))[24].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[24].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_166 = (((vtbl_entry*)(iVar5))[25].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar5 + 200));
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_11e = (((vtbl_entry*)(iVar5))[25].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar5 + 200));
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_d6 = (((vtbl_entry*)(iVar5))[25].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar5 + 200));
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_8e = (((vtbl_entry*)(iVar5))[25].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar5 + 200));
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_164 = (((vtbl_entry*)(iVar5))[26].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[26].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_11c = (((vtbl_entry*)(iVar5))[26].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[26].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_d4 = (((vtbl_entry*)(iVar5))[26].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[26].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_8c = (((vtbl_entry*)(iVar5))[26].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[26].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_162 = (((vtbl_entry*)(iVar5))[27].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[27].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_11a = (((vtbl_entry*)(iVar5))[27].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[27].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_d2 = (((vtbl_entry*)(iVar5))[27].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[27].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_8a = (((vtbl_entry*)(iVar5))[27].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[27].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_160 = (((vtbl_entry*)(iVar5))[28].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[28].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_118 = (((vtbl_entry*)(iVar5))[28].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[28].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_d0 = (((vtbl_entry*)(iVar5))[28].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[28].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_88 = (((vtbl_entry*)(iVar5))[28].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[28].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_194 = (((vtbl_entry*)(iVar5))[10].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[10].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_14c = (((vtbl_entry*)(iVar5))[10].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[10].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_104 = (((vtbl_entry*)(iVar5))[10].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[10].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_bc = (((vtbl_entry*)(iVar5))[10].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[10].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_16c = (((vtbl_entry*)(iVar5))[22].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[22].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_124 = (((vtbl_entry*)(iVar5))[22].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[22].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_dc = (((vtbl_entry*)(iVar5))[22].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[22].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_94 = (((vtbl_entry*)(iVar5))[22].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[22].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  iVar5 = (((vtbl_entry*)(iVar5))[7].fn)
                    ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[7].adj);
  iVar4 = 0x40;
  if (iVar5 == 0) {
    iVar4 = 0x20;
  }
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.iStack_17c = (((vtbl_entry*)(iVar5))[19].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[19].adj);
  _cfg_198.iStack_17c = _cfg_198.iStack_17c + iVar4;
  iVar5 = **(int **)((int)param_1 + 0x30);
  iVar5 = (((vtbl_entry*)(iVar5))[19].fn)
                    ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[19].adj);
  _cfg_198.iStack_134 = iVar4 + iVar5 * -3;
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.iStack_ec = (((vtbl_entry*)(iVar5))[19].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[19].adj);
  _cfg_198.iStack_ec = _cfg_198.iStack_ec + iVar4;
  iVar5 = **(int **)((int)param_1 + 0x30);
  iVar5 = (((vtbl_entry*)(iVar5))[19].fn)
                    ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[19].adj);
  _cfg_198.iStack_a4 = iVar4 + iVar5 * -3;
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_15c = (((vtbl_entry*)(iVar5))[29].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[29].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_158 = (((vtbl_entry*)(iVar5))[30].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[30].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_114 = (((vtbl_entry*)(iVar5))[31].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[31].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_110 = (((vtbl_entry*)(iVar5))[32].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[32].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_cc = (((vtbl_entry*)(iVar5))[33].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[33].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_c8 = (((vtbl_entry*)(iVar5))[34].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[34].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_84 = (((vtbl_entry*)(iVar5))[35].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[35].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_80 = (((vtbl_entry*)(iVar5))[36].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[36].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_154 = (((vtbl_entry*)(iVar5))[37].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[37].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_10c = (((vtbl_entry*)(iVar5))[37].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[37].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_c4 = (((vtbl_entry*)(iVar5))[37].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[37].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  _cfg_198.uStack_7c = (((vtbl_entry*)(iVar5))[37].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[37].adj);
  apply_struct_fields_via_setters(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xd4),&_cfg_198.uStack_198
              );
  apply_struct_fields_via_setters(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xd8),&_cfg_198.uStack_150
              );
  apply_struct_fields_via_setters(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xdc),&_cfg_198.uStack_108
              );
  apply_struct_fields_via_setters(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xe0),&_cfg_198.uStack_c0)
  ;
  aiStack_78[0] = 0;
  aiStack_78[3] = 0xc0;
  aiStack_78[1] = 0;
  aiStack_78[4] = 0;
  uStack_64 = 0;
  aiStack_78[2] = 0x8000;
  uStack_63 = 0;
  uStack_62 = 1;
  uStack_61 = 0;
  uStack_5d = 1;
  uStack_57 = 1;
  uStack_60 = 0;
  aiStack_54[2] = 0x8000;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  uStack_59 = 0;
  uStack_58 = 0;
  aiStack_54[0] = 0;
  aiStack_54[1] = 0;
  aiStack_54[3] = 0xc0;
  aiStack_54[4] = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  uStack_3e = 1;
  uStack_3d = 0;
  uStack_3c = 0;
  uStack_3b = 0;
  uStack_3a = 0;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_36 = 0;
  uStack_35 = 0;
  uStack_34 = 0;
  iVar5 = **(int **)((int)param_1 + 0x30);
  uStack_39 = uStack_3e;
  uStack_33 = uStack_3e;
  iVar5 = (((vtbl_entry*)(iVar5))[38].fn)
                    ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[38].adj);
  if (iVar5 == 2) {
    aiStack_78[0] = 0x8000;
    aiStack_54[0] = 0x8000;
  }
  else if (iVar5 == 1) {
    aiStack_78[0] = 0x4000;
    aiStack_54[0] = 0x4000;
  }
  else if (iVar5 == 0) {
    aiStack_78[0] = 0;
    aiStack_54[0] = 0;
  }
  else if (iVar5 == 3) {
    aiStack_78[0] = 0xc000;
    aiStack_54[0] = 0xc000;
  }
  iVar5 = **(int **)((int)param_1 + 0x30);
  iVar5 = (((vtbl_entry*)(iVar5))[39].fn)
                    ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[39].adj);
  if (iVar5 == 0) {
    aiStack_78[1] = 0;
    aiStack_54[1] = 0;
  }
  else if (iVar5 == 1) {
    aiStack_78[1] = 0x400;
    aiStack_54[1] = 0x400;
  }
  else if (iVar5 == 2) {
    aiStack_78[1] = 0x600;
    aiStack_54[1] = 0x600;
  }
  else if (iVar5 == 3) {
    aiStack_78[1] = 0x200;
    aiStack_54[1] = 0x200;
  }
  aiStack_78[2] = 0x8000;
  aiStack_54[2] = 0xc000;
  aiStack_78[4] = 0;
  aiStack_54[4] = 0;
  aiStack_78[3] = 0;
  aiStack_54[3] = 0;
  uStack_64 = 0;
  uStack_63 = 0;
  iVar5 = **(int **)((int)param_1 + 0x30);
  uStack_62 = (((vtbl_entry*)(iVar5))[40].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[40].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  uStack_5f = (((vtbl_entry*)(iVar5))[8].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[8].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  uStack_5e = (((vtbl_entry*)(iVar5))[9].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[9].adj);
  uStack_61 = 0;
  uStack_60 = 0;
  uStack_5d = 1;
  uStack_5c = 0;
  uStack_59 = 0;
  uStack_5a = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  iVar5 = **(int **)((int)param_1 + 0x30);
  uStack_5b = uStack_5d;
  uStack_3e = (((vtbl_entry*)(iVar5))[40].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[40].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  uStack_3b = (((vtbl_entry*)(iVar5))[8].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[8].adj);
  iVar5 = **(int **)((int)param_1 + 0x30);
  uStack_3a = (((vtbl_entry*)(iVar5))[9].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar5))[9].adj);
  uStack_3d = 0;
  uStack_3c = 0;
  uStack_39 = 1;
  uStack_38 = 0;
  uStack_35 = 0;
  uStack_36 = 0;
  uStack_34 = 0;
  uStack_33 = 0;
  if ((*(ushort *)(*(int *)((int)param_1 + 0x54) + 0x10) < 0x55) ||
     (uStack_37 = uStack_39, *(char *)(*(int *)((int)param_1 + 0x54) + 0x5c) != '\0')) {
    uStack_5b = 0;
    uStack_37 = 0;
  }
  cVar1 = read_sysparam_byte(*(uint8_t **)((int)param_1 + 0x48));
  if ((cVar1 != '\0') &&
     (iVar5 = get_sysparam_store_byte((void*)(*(uint32_t *)((int)param_1 + 0x48)),0x1b), iVar5 == 0)) {
    uStack_5b = 0;
    uStack_37 = 0;
  }
  apply_pipeline_config_to_channels(*(int *)((int)param_1 + 0x28),*(int **)((int)param_1 + 0xec),aiStack_78);
  apply_pipeline_config_to_channels(*(int *)((int)param_1 + 0x28),*(int **)((int)param_1 + 0xf0),aiStack_54);
  uStack_28 = 0;
  uStack_26 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  uStack_30 = *(uint16_t *)(*(int *)((int)param_1 + 0x54) + 0x38);
  uStack_2e = *(uint16_t *)(*(int *)((int)param_1 + 0x54) + 0x3a);
  uStack_2c = *(uint16_t *)(*(int *)((int)param_1 + 0x54) + 0x3c);
  uStack_2a = *(uint16_t *)(*(int *)((int)param_1 + 0x54) + 0x3e);
  uStack_20 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0x28);
  uStack_1c = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0x2c);
  uStack_18 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0x30);
  uStack_14 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0x34);
  write_fourteen_mmio_values(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xec),&uStack_30)
  ;
  write_fourteen_mmio_values(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xf0),&uStack_30)
  ;
  iVar5 = *(int *)((int)param_1 + 0x28);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x2c) + 4);
  uVar2 = (((vtbl_entry*)(iVar4))[40].fn)
                    (*(int *)((int)param_1 + 0x2c) + (int)((vtbl_entry*)(iVar4))[40].adj);
  *(uint8_t *)(iVar5 + 0xc) = uVar2;
  configure_peripheral_via_function_pointers(*(uint32_t *)((int)param_1 + 0x28));
  return;
}

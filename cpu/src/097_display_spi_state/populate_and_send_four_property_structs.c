/* @k10d populate_and_send_four_property_structs @ 0x1041eeb0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Populates four large stack structures with values from virtual object properties and
 *   sends them via helper functions.
 * summary:
 *   The function reads numerous properties from a virtual object (via vtable calls on the
 *   pointer at param_1+0x30) to populate four large stack-based structures. It calculates
 *   specific offsets and flags based on enumerated values (e.g., mapping 0-3 to 0, 4, 8,
 *   12). It then calls dispatch_seven_byte_command and apply_struct_fields_via_setters to
 *   transmit these structures. Finally, it initializes two smaller structs with
 *   timing/offset values (0x2000) and sends them via write_fourteen_mmio_values, and
 *   updates a status byte in the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_and_send_four_property_structs(void *param_1)

{
  int iVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
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
  uint8_t uStack_d;
  uint8_t uStack_c;
  uint8_t uStack_b;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uStack_d = 1;
  uStack_c = 1;
  uStack_b = 1;
  uStack_a = 1;
  uStack_9 = 1;
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_d = (**(code **)(iVar4 + 0x44))
                       ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x40));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_c = (**(code **)(iVar4 + 0x4c))
                       ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x48));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_b = (**(code **)(iVar4 + 0x144))
                       ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x140));
  uStack_a = 1;
  uStack_9 = uStack_a;
  dispatch_seven_byte_command(*(uint32_t *)((int)param_1 + 0x28),&uStack_d);
  uStack_198 = 1;
  uStack_197 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  uStack_194 = 0;
  uStack_190 = 8;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_186 = 0;
  uStack_184 = 0;
  uStack_182 = 0;
  uStack_180 = 0;
  iStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_16a = 0;
  uStack_168 = 0;
  uStack_166 = 0;
  uStack_164 = 0;
  uStack_162 = 1;
  uStack_160 = 1;
  uStack_154 = 0x80000000/*SDRAM*/;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_150 = 1;
  uStack_14f = 0;
  uStack_14e = 0;
  uStack_14d = 0;
  uStack_14c = 0;
  uStack_148 = 8;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13e = 0;
  uStack_13c = 0;
  uStack_13a = 0;
  uStack_138 = 0;
  iStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_122 = 0;
  uStack_120 = 0;
  uStack_11e = 0;
  uStack_11c = 0;
  uStack_11a = 1;
  uStack_118 = 1;
  uStack_10c = 0x80000000/*SDRAM*/;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_108 = 1;
  uStack_107 = 0;
  uStack_106 = 0;
  uStack_105 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_100 = 8;
  uStack_f8 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f2 = 0;
  uStack_f0 = 0;
  iStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_da = 0;
  uStack_d8 = 0;
  uStack_d6 = 0;
  uStack_d4 = 0;
  uStack_d2 = 1;
  uStack_d0 = 1;
  uStack_c4 = 0x80000000/*SDRAM*/;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c0 = 1;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bd = 0;
  uStack_bc = 0;
  uStack_b8 = 8;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ae = 0;
  uStack_ac = 0;
  uStack_aa = 0;
  uStack_a8 = 0;
  iStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_92 = 0;
  uStack_90 = 0;
  uStack_8e = 0;
  uStack_8c = 0;
  uStack_8a = 1;
  uStack_88 = 1;
  uStack_7c = 0x80000000/*SDRAM*/;
  uStack_84 = 0;
  uStack_80 = 0;
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_198 = (**(code **)(iVar4 + 0x3c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x38));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_150 = (**(code **)(iVar4 + 0x3c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x38));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_108 = (**(code **)(iVar4 + 0x3c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x38));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_c0 = (**(code **)(iVar4 + 0x3c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x38));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_197 = (**(code **)(iVar4 + 0x44))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x40));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_14f = (**(code **)(iVar4 + 0x44))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x40));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_107 = (**(code **)(iVar4 + 0x44))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x40));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_bf = (**(code **)(iVar4 + 0x44))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x40));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_196 = (**(code **)(iVar4 + 0x4c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x48));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_14e = (**(code **)(iVar4 + 0x4c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x48));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_106 = (**(code **)(iVar4 + 0x4c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x48));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_be = (**(code **)(iVar4 + 0x4c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x48));
  uStack_195 = 0;
  uStack_14d = 0;
  uStack_105 = 0;
  uStack_bd = 0;
  uVar3 = 8;
  iVar4 = **(int **)((int)param_1 + 0x30);
  iVar4 = (**(code **)(iVar4 + 0x5c))
                    ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x58));
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else if (iVar4 == 1) {
    uVar3 = 4;
  }
  else if (iVar4 == 2) {
    uVar3 = 8;
  }
  else if (iVar4 == 3) {
    uVar3 = 0xc;
  }
  uStack_18c = 0;
  uStack_144 = 0;
  uStack_fc = 0;
  uStack_b4 = 0;
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_190 = uVar3;
  uStack_148 = uVar3;
  uStack_100 = uVar3;
  uStack_b8 = uVar3;
  uStack_188 = (**(code **)(iVar4 + 100))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x60));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_140 = (**(code **)(iVar4 + 100))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x60));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_f8 = (**(code **)(iVar4 + 100))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x60));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_b0 = (**(code **)(iVar4 + 100))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x60));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_186 = (**(code **)(iVar4 + 0x6c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x68));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_13e = (**(code **)(iVar4 + 0x6c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x68));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_f6 = (**(code **)(iVar4 + 0x6c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x68));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_ae = (**(code **)(iVar4 + 0x6c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x68));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_184 = (**(code **)(iVar4 + 0x84))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x80));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_13c = (**(code **)(iVar4 + 0x84))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x80));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_f4 = (**(code **)(iVar4 + 0x84))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x80));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_ac = (**(code **)(iVar4 + 0x84))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x80));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_182 = (**(code **)(iVar4 + 0x8c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x88));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_13a = (**(code **)(iVar4 + 0x8c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x88));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_f2 = (**(code **)(iVar4 + 0x8c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x88));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_aa = (**(code **)(iVar4 + 0x8c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x88));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_180 = (**(code **)(iVar4 + 0x9c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x98));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_138 = (**(code **)(iVar4 + 0x9c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x98));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_f0 = (**(code **)(iVar4 + 0x9c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x98));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_a8 = (**(code **)(iVar4 + 0x9c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x98));
  uStack_174 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 8);
  uStack_12c = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 8);
  uStack_e4 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 8);
  uStack_9c = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 8);
  uStack_170 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0xc);
  uStack_128 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0xc);
  uStack_e0 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0xc);
  uStack_98 = *(uint32_t *)(*(int *)((int)param_1 + 0x54) + 0xc);
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_16a = (**(code **)(iVar4 + 0xbc))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xb8));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_122 = (**(code **)(iVar4 + 0xbc))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xb8));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_da = (**(code **)(iVar4 + 0xbc))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xb8));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_92 = (**(code **)(iVar4 + 0xbc))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xb8));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_168 = (**(code **)(iVar4 + 0xc4))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xc0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_120 = (**(code **)(iVar4 + 0xc4))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xc0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_d8 = (**(code **)(iVar4 + 0xc4))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xc0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_90 = (**(code **)(iVar4 + 0xc4))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xc0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_166 = (**(code **)(iVar4 + 0xcc))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 200));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_11e = (**(code **)(iVar4 + 0xcc))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 200));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_d6 = (**(code **)(iVar4 + 0xcc))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 200));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_8e = (**(code **)(iVar4 + 0xcc))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 200));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_164 = (**(code **)(iVar4 + 0xd4))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xd0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_11c = (**(code **)(iVar4 + 0xd4))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xd0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_d4 = (**(code **)(iVar4 + 0xd4))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xd0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_8c = (**(code **)(iVar4 + 0xd4))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xd0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_162 = (**(code **)(iVar4 + 0xdc))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xd8));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_11a = (**(code **)(iVar4 + 0xdc))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xd8));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_d2 = (**(code **)(iVar4 + 0xdc))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xd8));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_8a = (**(code **)(iVar4 + 0xdc))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xd8));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_160 = (**(code **)(iVar4 + 0xe4))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xe0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_118 = (**(code **)(iVar4 + 0xe4))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xe0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_d0 = (**(code **)(iVar4 + 0xe4))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xe0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_88 = (**(code **)(iVar4 + 0xe4))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xe0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_194 = (**(code **)(iVar4 + 0x54))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x50));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_14c = (**(code **)(iVar4 + 0x54))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x50));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_104 = (**(code **)(iVar4 + 0x54))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x50));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_bc = (**(code **)(iVar4 + 0x54))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x50));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_16c = (**(code **)(iVar4 + 0xb4))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xb0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_124 = (**(code **)(iVar4 + 0xb4))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xb0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_dc = (**(code **)(iVar4 + 0xb4))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xb0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_94 = (**(code **)(iVar4 + 0xb4))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xb0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  iVar1 = (**(code **)(iVar4 + 0x3c))
                    ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x38));
  iVar4 = 0x40;
  if (iVar1 == 0) {
    iVar4 = 0x20;
  }
  iVar1 = **(int **)((int)param_1 + 0x30);
  iStack_17c = (**(code **)(iVar1 + 0x9c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x98));
  iStack_17c = iStack_17c + iVar4;
  iVar1 = **(int **)((int)param_1 + 0x30);
  iVar1 = (**(code **)(iVar1 + 0x9c))
                    ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x98));
  iStack_134 = iVar4 + iVar1 * -3;
  iVar1 = **(int **)((int)param_1 + 0x30);
  iStack_ec = (**(code **)(iVar1 + 0x9c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x98));
  iStack_ec = iStack_ec + iVar4;
  iVar1 = **(int **)((int)param_1 + 0x30);
  iVar1 = (**(code **)(iVar1 + 0x9c))
                    ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x98));
  iStack_a4 = iVar4 + iVar1 * -3;
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_15c = (**(code **)(iVar4 + 0xec))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xe8));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_158 = (**(code **)(iVar4 + 0xf4))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xf0));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_114 = (**(code **)(iVar4 + 0xfc))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0xf8));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_110 = (**(code **)(iVar4 + 0x104))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x100));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_cc = (**(code **)(iVar4 + 0x10c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x108));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_c8 = (**(code **)(iVar4 + 0x114))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x110));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_84 = (**(code **)(iVar4 + 0x11c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x118));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_80 = (**(code **)(iVar4 + 0x124))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x120));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_154 = (**(code **)(iVar4 + 300))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x128));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_10c = (**(code **)(iVar4 + 300))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x128));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_c4 = (**(code **)(iVar4 + 300))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x128));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_7c = (**(code **)(iVar4 + 300))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x128));
  apply_struct_fields_via_setters(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xd4),&uStack_198
              );
  apply_struct_fields_via_setters(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xd8),&uStack_150
              );
  apply_struct_fields_via_setters(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xdc),&uStack_108
              );
  apply_struct_fields_via_setters(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xe0),&uStack_c0)
  ;
  aiStack_78[0] = 0;
  aiStack_78[3] = 0xc0;
  aiStack_78[1] = 0;
  aiStack_78[4] = 0;
  uStack_64 = 0;
  aiStack_78[2] = 0x8000;
  uStack_63 = 0;
  uStack_62 = 1;
  uStack_5d = 1;
  uStack_57 = 1;
  uStack_61 = 0;
  aiStack_54[2] = 0x8000;
  uStack_60 = 0;
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
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_39 = uStack_3e;
  uStack_33 = uStack_3e;
  iVar4 = (**(code **)(iVar4 + 0x134))
                    ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x130));
  if (iVar4 == 2) {
    aiStack_78[0] = 0x8000;
    aiStack_54[0] = 0x8000;
  }
  else if (iVar4 == 1) {
    aiStack_78[0] = 0x4000;
    aiStack_54[0] = 0x4000;
  }
  else if (iVar4 == 0) {
    aiStack_78[0] = 0;
    aiStack_54[0] = 0;
  }
  else if (iVar4 == 3) {
    aiStack_78[0] = 0xc000;
    aiStack_54[0] = 0xc000;
  }
  iVar4 = **(int **)((int)param_1 + 0x30);
  iVar4 = (**(code **)(iVar4 + 0x13c))
                    ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x138));
  if (iVar4 == 0) {
    aiStack_78[1] = 0;
    aiStack_54[1] = 0;
  }
  else if (iVar4 == 1) {
    aiStack_78[1] = 0x400;
    aiStack_54[1] = 0x400;
  }
  else if (iVar4 == 2) {
    aiStack_78[1] = 0x600;
    aiStack_54[1] = 0x600;
  }
  else if (iVar4 == 3) {
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
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_62 = (**(code **)(iVar4 + 0x144))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x140));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_5f = (**(code **)(iVar4 + 0x44))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x40));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_5e = (**(code **)(iVar4 + 0x4c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x48));
  uStack_61 = 0;
  uStack_60 = 0;
  uStack_5d = 1;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_59 = 0;
  uStack_5a = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_3e = (**(code **)(iVar4 + 0x144))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x140));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_3b = (**(code **)(iVar4 + 0x44))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x40));
  iVar4 = **(int **)((int)param_1 + 0x30);
  uStack_3a = (**(code **)(iVar4 + 0x4c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar4 + 0x48));
  uStack_3d = 0;
  uStack_3c = 0;
  uStack_39 = 1;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_35 = 0;
  uStack_36 = 0;
  uStack_34 = 0;
  uStack_33 = 0;
  apply_pipeline_config_to_channels(*(int *)((int)param_1 + 0x28),*(int **)((int)param_1 + 0xec),aiStack_78);
  apply_pipeline_config_to_channels(*(int *)((int)param_1 + 0x28),*(int **)((int)param_1 + 0xf0),aiStack_54);
  uStack_28 = 0;
  uStack_26 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  uStack_20 = 0x2000;
  uStack_1c = 0x2000;
  uStack_18 = 0x2000;
  uStack_14 = 0x2000;
  write_fourteen_mmio_values(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xec),&uStack_30)
  ;
  write_fourteen_mmio_values(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xf0),&uStack_30)
  ;
  iVar4 = *(int *)((int)param_1 + 0x28);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x2c) + 4);
  uVar2 = (**(code **)(iVar1 + 0x144))
                    (*(int *)((int)param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x140));
  *(uint8_t *)(iVar4 + 0xc) = uVar2;
  configure_peripheral_via_function_pointers(*(uint32_t *)((int)param_1 + 0x28));
  return;
}

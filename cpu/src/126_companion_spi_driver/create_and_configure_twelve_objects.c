/* @k10d create_and_configure_twelve_objects @ 0x1043f034
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Creates twelve cls_105a09fc objects, configures each with a parameter struct containing
 *   MMIO addresses, and stores them in param_1.
 * summary:
 *   The function initializes a structure (param_1) by creating twelve instances of
 *   cls_105a09fc. For each instance, it populates a configuration struct with pointers to
 *   MMIO registers in the 0x5c003000-0x5c003150 range and calls a virtual method (slot 2)
 *   to apply the configuration. It also calls forward_three_args_to_helper_10459d64 to set
 *   flags at offsets 0x38, 0x40, and 0x48 of param_1. The specific MMIO addresses and the
 *   repetitive creation of channel-like objects suggest initialization of display or OSD
 *   channels, but the exact camera subsystem role is not unambiguously clear from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t create_and_configure_twelve_objects(cls_105a0a54 *param_1)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void *puVar5;
  uintptr_t sp;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  void **ppuStack_10;
  uint32_t uStack_c;
  
  forward_three_args_to_helper_10459d64(&param_1->field_0x38,1,0x1f);
  forward_three_args_to_helper_10459d64(&param_1->field_0x40,1,0x1f);
  forward_three_args_to_helper_10459d64(&param_1->field_0x48,1,0x1f);
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  alloc_and_zero_struct_1043ef7a(&uStack_58);
  uVar3 = read_table_entry_field(pvVar2,0x32);
  uVar4 = read_table_entry_field(pvVar2,0x28);
  uStack_c = read_table_entry_field(pvVar2,0xd);
  uStack_3c = 0x5c00300a;
  uStack_44 = 0x5c003006;
  uStack_40 = 0x5c003008;
  uStack_48 = 0x5c003004;
  uStack_50 = 0x5c003000;
  uStack_4c = 0x5c003002;
  uStack_38 = 0x5c003027;
  uStack_34 = 0x5c003028;
  uStack_30 = 0x5c00302a;
  uStack_2c = 0x5c003040;
  uStack_28 = 0x5c003042;
  uStack_24 = 0x5c003050;
  uStack_20 = 0;
  uStack_14 = 0x31;
  uStack_1c = 0;
  uStack_18 = 0x90;
  uStack_58 = uVar3;
  uStack_54 = uVar4;
  ppuStack_10 = (void*)(&param_1->field_0x38);
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0x4 = (uint32_t)(puVar5);
  iVar1 = *(int *)(param_1->field_0x4 + 4);
  (((vtbl_entry*)(iVar1))[2].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x33);
  uStack_54 = read_table_entry_field(pvVar2,0x29);
  uStack_3c = 0x5c003012;
  uStack_44 = 0x5c00300e;
  uStack_40 = 0x5c003010;
  uStack_48 = 0x5c00300c;
  uStack_34 = 0x5c00302c;
  uStack_30 = 0x5c00302e;
  uStack_2c = 0x5c003044;
  uStack_28 = 0x5c003046;
  uStack_20 = 1;
  uStack_14 = 0x32;
  uStack_18 = 0x91;
  uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0x8 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].fn)
            (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x34);
  uStack_54 = read_table_entry_field(pvVar2,0x2a);
  uStack_3c = 0x5c00301a;
  uStack_44 = 0x5c003016;
  uStack_40 = 0x5c003018;
  uStack_48 = 0x5c003014;
  uStack_34 = 0x5c003030;
  uStack_30 = 0x5c003032;
  uStack_2c = 0x5c003048;
  uStack_28 = 0x5c00304a;
  uStack_20 = 2;
  uStack_14 = 0x33;
  uStack_18 = 0x92;
  uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0xc = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].fn)
            (param_1->field_0xc + ((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x35);
  uStack_54 = read_table_entry_field(pvVar2,0x2b);
  uStack_3c = 0x5c003022;
  uStack_44 = 0x5c00301e;
  uStack_40 = 0x5c003020;
  uStack_48 = 0x5c00301c;
  uStack_34 = 0x5c003034;
  uStack_30 = 0x5c003036;
  uStack_2c = 0x5c00304c;
  uStack_28 = 0x5c00304e;
  uStack_20 = 3;
  uStack_14 = 0x34;
  uStack_18 = 0x93;
  uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0x10 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x10 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x76);
  uStack_54 = read_table_entry_field(pvVar2,0x6f);
  uStack_3c = 0x5c00308a;
  uStack_44 = 0x5c003086;
  uStack_40 = 0x5c003088;
  uStack_48 = 0x5c003084;
  uStack_50 = 0x5c003080;
  uStack_4c = 0x5c003082;
  uStack_38 = 0x5c0030a7;
  uStack_34 = 0x5c0030a8;
  uStack_30 = 0x5c0030aa;
  uStack_2c = 0x5c0030c0;
  uStack_28 = 0x5c0030c2;
  uStack_24 = 0x5c0030d0;
  uStack_20 = 0;
  uStack_14 = 0x35;
  uStack_1c = 1;
  uStack_18 = 0x94;
  uStack_58 = uVar3;
  ppuStack_10 = (void **)&param_1->field_0x40;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0x14 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x14 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uStack_54 = read_table_entry_field(pvVar2,0x70);
  uStack_3c = 0x5c003092;
  uStack_44 = 0x5c00308e;
  uStack_40 = 0x5c003090;
  uStack_48 = 0x5c00308c;
  uStack_34 = 0x5c0030ac;
  uStack_30 = 0x5c0030ae;
  uStack_2c = 0x5c0030c4;
  uStack_28 = 0x5c0030c6;
  uStack_20 = 1;
  uStack_14 = 0x36;
  uStack_18 = 0x95;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0x18 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x18 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uStack_54 = read_table_entry_field(pvVar2,0x71);
  uStack_3c = 0x5c00309a;
  uStack_44 = 0x5c003096;
  uStack_40 = 0x5c003098;
  uStack_48 = 0x5c003094;
  uStack_34 = 0x5c0030b0;
  uStack_30 = 0x5c0030b2;
  uStack_2c = 0x5c0030c8;
  uStack_28 = 0x5c0030ca;
  uStack_20 = 2;
  uStack_14 = 0x37;
  uStack_18 = 0x96;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0x1c = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x1c + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uStack_54 = read_table_entry_field(pvVar2,0x72);
  uStack_3c = 0x5c0030a2;
  uStack_44 = 0x5c00309e;
  uStack_40 = 0x5c0030a0;
  uStack_48 = 0x5c00309c;
  uStack_34 = 0x5c0030b4;
  uStack_30 = 0x5c0030b6;
  uStack_2c = 0x5c0030cc;
  uStack_28 = 0x5c0030ce;
  uStack_20 = 3;
  uStack_14 = 0x38;
  uStack_18 = 0x97;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0x20 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x20 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x32);
  uStack_54 = read_table_entry_field(pvVar2,0x73);
  uStack_3c = 0x5c00310a;
  uStack_44 = 0x5c003106;
  uStack_40 = 0x5c003108;
  uStack_48 = 0x5c003104;
  uStack_50 = 0x5c003100;
  uStack_4c = 0x5c003102;
  uStack_38 = 0x5c003127;
  uStack_34 = 0x5c003128;
  uStack_30 = 0x5c00312a;
  uStack_2c = 0x5c003140;
  uStack_28 = 0x5c003142;
  uStack_24 = 0x5c003150;
  uStack_20 = 0;
  uStack_14 = 0x39;
  uStack_1c = 2;
  uStack_18 = 0x98;
  uStack_58 = uVar3;
  ppuStack_10 = (void **)&param_1->field_0x48;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0x24 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x24 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x33);
  uStack_54 = read_table_entry_field(pvVar2,0x74);
  uStack_3c = 0x5c003112;
  uStack_44 = 0x5c00310e;
  uStack_40 = 0x5c003110;
  uStack_48 = 0x5c00310c;
  uStack_34 = 0x5c00312c;
  uStack_30 = 0x5c00312e;
  uStack_2c = 0x5c003144;
  uStack_28 = 0x5c003146;
  uStack_20 = 1;
  uStack_14 = 0x3a;
  uStack_18 = 0x99;
  uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0x28 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x28 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x34);
  uStack_54 = read_table_entry_field(pvVar2,0x75);
  uStack_3c = 0x5c00311a;
  uStack_44 = 0x5c003116;
  uStack_40 = 0x5c003118;
  uStack_48 = 0x5c003114;
  uStack_34 = 0x5c003130;
  uStack_30 = 0x5c003132;
  uStack_2c = 0x5c003148;
  uStack_28 = 0x5c00314a;
  uStack_20 = 2;
  uStack_14 = 0x3b;
  uStack_18 = 0x9a;
  uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0x2c = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x2c + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x35);
  uStack_54 = read_table_entry_field(pvVar2,0x76);
  uStack_3c = 0x5c003122;
  uStack_44 = 0x5c00311e;
  uStack_40 = 0x5c003120;
  uStack_48 = 0x5c00311c;
  uStack_34 = 0x5c003134;
  uStack_30 = 0x5c003136;
  uStack_2c = 0x5c00314c;
  uStack_28 = 0x5c00314e;
  uStack_20 = 3;
  uStack_14 = 0x3c;
  uStack_18 = 0x9b;
  uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&uStack_58);
  param_1->field_0x30 = (uint32_t)(puVar5);
  uVar3 = (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
                    (param_1->field_0x30 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  free_heap_block_if_flagged_1043efe4(&uStack_58,2);
  return uVar3;
}

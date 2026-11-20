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
  struct {
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
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_58;
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void *puVar5;
  uintptr_t sp;
  
  forward_three_args_to_helper_10459d64(&param_1->field_0x38,1,0x1f);
  forward_three_args_to_helper_10459d64(&param_1->field_0x40,1,0x1f);
  forward_three_args_to_helper_10459d64(&param_1->field_0x48,1,0x1f);
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  alloc_and_zero_struct_1043ef7a(&_cfg_58.uStack_58);
  uVar3 = read_table_entry_field(pvVar2,0x32);
  uVar4 = read_table_entry_field(pvVar2,0x28);
  _cfg_58.uStack_c = read_table_entry_field(pvVar2,0xd);
  _cfg_58.uStack_3c = 0x5c00300a;
  _cfg_58.uStack_44 = 0x5c003006;
  _cfg_58.uStack_40 = 0x5c003008;
  _cfg_58.uStack_48 = 0x5c003004;
  _cfg_58.uStack_50 = 0x5c003000;
  _cfg_58.uStack_4c = 0x5c003002;
  _cfg_58.uStack_38 = 0x5c003027;
  _cfg_58.uStack_34 = 0x5c003028;
  _cfg_58.uStack_30 = 0x5c00302a;
  _cfg_58.uStack_2c = 0x5c003040;
  _cfg_58.uStack_28 = 0x5c003042;
  _cfg_58.uStack_24 = 0x5c003050;
  _cfg_58.uStack_20 = 0;
  _cfg_58.uStack_14 = 0x31;
  _cfg_58.uStack_1c = 0;
  _cfg_58.uStack_18 = 0x90;
  _cfg_58.uStack_58 = uVar3;
  _cfg_58.uStack_54 = uVar4;
  _cfg_58.uStack_10 = (uint32_t)&param_1->field_0x38;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0x4 = (uint32_t)(puVar5);
  iVar1 = *(int *)(param_1->field_0x4 + 4);
  (((vtbl_entry*)(iVar1))[2].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x33);
  _cfg_58.uStack_54 = read_table_entry_field(pvVar2,0x29);
  _cfg_58.uStack_3c = 0x5c003012;
  _cfg_58.uStack_44 = 0x5c00300e;
  _cfg_58.uStack_40 = 0x5c003010;
  _cfg_58.uStack_48 = 0x5c00300c;
  _cfg_58.uStack_34 = 0x5c00302c;
  _cfg_58.uStack_30 = 0x5c00302e;
  _cfg_58.uStack_2c = 0x5c003044;
  _cfg_58.uStack_28 = 0x5c003046;
  _cfg_58.uStack_20 = 1;
  _cfg_58.uStack_14 = 0x32;
  _cfg_58.uStack_18 = 0x91;
  _cfg_58.uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0x8 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].fn)
            (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x34);
  _cfg_58.uStack_54 = read_table_entry_field(pvVar2,0x2a);
  _cfg_58.uStack_3c = 0x5c00301a;
  _cfg_58.uStack_44 = 0x5c003016;
  _cfg_58.uStack_40 = 0x5c003018;
  _cfg_58.uStack_48 = 0x5c003014;
  _cfg_58.uStack_34 = 0x5c003030;
  _cfg_58.uStack_30 = 0x5c003032;
  _cfg_58.uStack_2c = 0x5c003048;
  _cfg_58.uStack_28 = 0x5c00304a;
  _cfg_58.uStack_20 = 2;
  _cfg_58.uStack_14 = 0x33;
  _cfg_58.uStack_18 = 0x92;
  _cfg_58.uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0xc = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].fn)
            (param_1->field_0xc + ((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x35);
  _cfg_58.uStack_54 = read_table_entry_field(pvVar2,0x2b);
  _cfg_58.uStack_3c = 0x5c003022;
  _cfg_58.uStack_44 = 0x5c00301e;
  _cfg_58.uStack_40 = 0x5c003020;
  _cfg_58.uStack_48 = 0x5c00301c;
  _cfg_58.uStack_34 = 0x5c003034;
  _cfg_58.uStack_30 = 0x5c003036;
  _cfg_58.uStack_2c = 0x5c00304c;
  _cfg_58.uStack_28 = 0x5c00304e;
  _cfg_58.uStack_20 = 3;
  _cfg_58.uStack_14 = 0x34;
  _cfg_58.uStack_18 = 0x93;
  _cfg_58.uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0x10 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x10 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x76);
  _cfg_58.uStack_54 = read_table_entry_field(pvVar2,0x6f);
  _cfg_58.uStack_3c = 0x5c00308a;
  _cfg_58.uStack_44 = 0x5c003086;
  _cfg_58.uStack_40 = 0x5c003088;
  _cfg_58.uStack_48 = 0x5c003084;
  _cfg_58.uStack_50 = 0x5c003080;
  _cfg_58.uStack_4c = 0x5c003082;
  _cfg_58.uStack_38 = 0x5c0030a7;
  _cfg_58.uStack_34 = 0x5c0030a8;
  _cfg_58.uStack_30 = 0x5c0030aa;
  _cfg_58.uStack_2c = 0x5c0030c0;
  _cfg_58.uStack_28 = 0x5c0030c2;
  _cfg_58.uStack_24 = 0x5c0030d0;
  _cfg_58.uStack_20 = 0;
  _cfg_58.uStack_14 = 0x35;
  _cfg_58.uStack_1c = 1;
  _cfg_58.uStack_18 = 0x94;
  _cfg_58.uStack_58 = uVar3;
  _cfg_58.uStack_10 = (uint32_t)&param_1->field_0x40;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0x14 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x14 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  _cfg_58.uStack_54 = read_table_entry_field(pvVar2,0x70);
  _cfg_58.uStack_3c = 0x5c003092;
  _cfg_58.uStack_44 = 0x5c00308e;
  _cfg_58.uStack_40 = 0x5c003090;
  _cfg_58.uStack_48 = 0x5c00308c;
  _cfg_58.uStack_34 = 0x5c0030ac;
  _cfg_58.uStack_30 = 0x5c0030ae;
  _cfg_58.uStack_2c = 0x5c0030c4;
  _cfg_58.uStack_28 = 0x5c0030c6;
  _cfg_58.uStack_20 = 1;
  _cfg_58.uStack_14 = 0x36;
  _cfg_58.uStack_18 = 0x95;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0x18 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x18 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  _cfg_58.uStack_54 = read_table_entry_field(pvVar2,0x71);
  _cfg_58.uStack_3c = 0x5c00309a;
  _cfg_58.uStack_44 = 0x5c003096;
  _cfg_58.uStack_40 = 0x5c003098;
  _cfg_58.uStack_48 = 0x5c003094;
  _cfg_58.uStack_34 = 0x5c0030b0;
  _cfg_58.uStack_30 = 0x5c0030b2;
  _cfg_58.uStack_2c = 0x5c0030c8;
  _cfg_58.uStack_28 = 0x5c0030ca;
  _cfg_58.uStack_20 = 2;
  _cfg_58.uStack_14 = 0x37;
  _cfg_58.uStack_18 = 0x96;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0x1c = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x1c + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  _cfg_58.uStack_54 = read_table_entry_field(pvVar2,0x72);
  _cfg_58.uStack_3c = 0x5c0030a2;
  _cfg_58.uStack_44 = 0x5c00309e;
  _cfg_58.uStack_40 = 0x5c0030a0;
  _cfg_58.uStack_48 = 0x5c00309c;
  _cfg_58.uStack_34 = 0x5c0030b4;
  _cfg_58.uStack_30 = 0x5c0030b6;
  _cfg_58.uStack_2c = 0x5c0030cc;
  _cfg_58.uStack_28 = 0x5c0030ce;
  _cfg_58.uStack_20 = 3;
  _cfg_58.uStack_14 = 0x38;
  _cfg_58.uStack_18 = 0x97;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0x20 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x20 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x32);
  _cfg_58.uStack_54 = read_table_entry_field(pvVar2,0x73);
  _cfg_58.uStack_3c = 0x5c00310a;
  _cfg_58.uStack_44 = 0x5c003106;
  _cfg_58.uStack_40 = 0x5c003108;
  _cfg_58.uStack_48 = 0x5c003104;
  _cfg_58.uStack_50 = 0x5c003100;
  _cfg_58.uStack_4c = 0x5c003102;
  _cfg_58.uStack_38 = 0x5c003127;
  _cfg_58.uStack_34 = 0x5c003128;
  _cfg_58.uStack_30 = 0x5c00312a;
  _cfg_58.uStack_2c = 0x5c003140;
  _cfg_58.uStack_28 = 0x5c003142;
  _cfg_58.uStack_24 = 0x5c003150;
  _cfg_58.uStack_20 = 0;
  _cfg_58.uStack_14 = 0x39;
  _cfg_58.uStack_1c = 2;
  _cfg_58.uStack_18 = 0x98;
  _cfg_58.uStack_58 = uVar3;
  _cfg_58.uStack_10 = (uint32_t)&param_1->field_0x48;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0x24 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x24 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x33);
  _cfg_58.uStack_54 = read_table_entry_field(pvVar2,0x74);
  _cfg_58.uStack_3c = 0x5c003112;
  _cfg_58.uStack_44 = 0x5c00310e;
  _cfg_58.uStack_40 = 0x5c003110;
  _cfg_58.uStack_48 = 0x5c00310c;
  _cfg_58.uStack_34 = 0x5c00312c;
  _cfg_58.uStack_30 = 0x5c00312e;
  _cfg_58.uStack_2c = 0x5c003144;
  _cfg_58.uStack_28 = 0x5c003146;
  _cfg_58.uStack_20 = 1;
  _cfg_58.uStack_14 = 0x3a;
  _cfg_58.uStack_18 = 0x99;
  _cfg_58.uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0x28 = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x28 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x34);
  _cfg_58.uStack_54 = read_table_entry_field(pvVar2,0x75);
  _cfg_58.uStack_3c = 0x5c00311a;
  _cfg_58.uStack_44 = 0x5c003116;
  _cfg_58.uStack_40 = 0x5c003118;
  _cfg_58.uStack_48 = 0x5c003114;
  _cfg_58.uStack_34 = 0x5c003130;
  _cfg_58.uStack_30 = 0x5c003132;
  _cfg_58.uStack_2c = 0x5c003148;
  _cfg_58.uStack_28 = 0x5c00314a;
  _cfg_58.uStack_20 = 2;
  _cfg_58.uStack_14 = 0x3b;
  _cfg_58.uStack_18 = 0x9a;
  _cfg_58.uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0x2c = (uint32_t)(puVar5);
  (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
            (param_1->field_0x2c + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  uVar3 = read_table_entry_field(pvVar2,0x35);
  _cfg_58.uStack_54 = read_table_entry_field(pvVar2,0x76);
  _cfg_58.uStack_3c = 0x5c003122;
  _cfg_58.uStack_44 = 0x5c00311e;
  _cfg_58.uStack_40 = 0x5c003120;
  _cfg_58.uStack_48 = 0x5c00311c;
  _cfg_58.uStack_34 = 0x5c003134;
  _cfg_58.uStack_30 = 0x5c003136;
  _cfg_58.uStack_2c = 0x5c00314c;
  _cfg_58.uStack_28 = 0x5c00314e;
  _cfg_58.uStack_20 = 3;
  _cfg_58.uStack_14 = 0x3c;
  _cfg_58.uStack_18 = 0x9b;
  _cfg_58.uStack_58 = uVar3;
  puVar5 = (void *)cls_105a09fc_new((cls_105a09fc *)0x0,&_cfg_58.uStack_58);
  param_1->field_0x30 = (uint32_t)(puVar5);
  uVar3 = (((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].fn)
                    (param_1->field_0x30 + ((vtbl_entry*)(*(int *)((char*)puVar5 + 4)))[2].adj,0);
  free_heap_block_if_flagged_1043efe4(&_cfg_58.uStack_58,2);
  return uVar3;
}

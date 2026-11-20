/* @k10d init_channel_objects @ 0x1043c940
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a04cc": ignoring multiple overlapping fields */
/* WARNING: Struct "cls_105a05a0": ignoring multiple overlapping fields */

uint32_t init_channel_objects(cls_105a06e8 *param_1)

{
  struct {
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
  } _cfg_4c;
  int iVar1;
  void *pvVar2;
  void *puVar3;
  uint32_t uVar4;
  uintptr_t sp;
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  cpucom_ctx_init(&_cfg_4c.uStack_4c);
  _cfg_4c.uStack_4c = read_table_entry_field(pvVar2,0x42);
  _cfg_4c.uStack_48 = read_table_entry_field(pvVar2,0x45);
  _cfg_4c.uStack_44 = 0x56;
  _cfg_4c.uStack_40 = 0x50;
  _cfg_4c.uStack_38 = 0x52;
  _cfg_4c.uStack_3c = 0x54;
  _cfg_4c.uStack_34 = 0x8a;
  _cfg_4c.uStack_30 = 9;
  puVar3 = (void *)cls_105a04cc_new((cls_105a04cc *)0x0,&_cfg_4c.uStack_4c);
  param_1->field_0x4 = (uint32_t)(puVar3);
  iVar1 = *(int *)(param_1->field_0x4 + 4);
  (((vtbl_entry*)(iVar1))[2].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[2].adj,0);
  _cfg_4c.uStack_4c = read_table_entry_field(pvVar2,0x43);
  _cfg_4c.uStack_48 = read_table_entry_field(pvVar2,0x46);
  _cfg_4c.uStack_44 = 0x5e;
  _cfg_4c.uStack_40 = 0x58;
  _cfg_4c.uStack_38 = 0x5a;
  _cfg_4c.uStack_34 = 0x8b;
  _cfg_4c.uStack_3c = 0x5c;
  _cfg_4c.uStack_30 = 10;
  puVar3 = (void *)cls_105a04cc_new((cls_105a04cc *)0x0,&_cfg_4c.uStack_4c);
  param_1->field_0x8 = (uint32_t)(puVar3);
  (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].fn)
            (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].adj,0);
  alloc_and_zero_struct_1043c836(&_cfg_4c.uStack_2c);
  _cfg_4c.uStack_2c = read_table_entry_field(pvVar2,0x28);
  _cfg_4c.uStack_28 = 0;
  _cfg_4c.uStack_24 = 0x5c002000/*DISPLAY-CTL*/;
  _cfg_4c.uStack_20 = 0x5c002008/*DISPLAY-CTL*/;
  _cfg_4c.uStack_1c = 0x5c00200c/*DISPLAY-CTL*/;
  _cfg_4c.uStack_18 = 0x5c002004/*DISPLAY-CTL*/;
  _cfg_4c.uStack_14 = 0x8c;
  _cfg_4c.uStack_10 = 0x2c;
  _cfg_4c.uStack_c = read_table_entry_field(pvVar2,0xc);
  puVar3 = (void *)cls_105a05a0_new((cls_105a05a0 *)0x0,&_cfg_4c.uStack_2c);
  param_1->field_0xc = (uint32_t)(puVar3);
  (((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].fn)
            (param_1->field_0xc + ((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].adj,0);
  _cfg_4c.uStack_2c = read_table_entry_field(pvVar2,0x29);
  _cfg_4c.uStack_28 = 0;
  _cfg_4c.uStack_24 = 0x5c002010/*DISPLAY-CTL*/;
  _cfg_4c.uStack_20 = 0x5c002018/*DISPLAY-CTL*/;
  _cfg_4c.uStack_1c = 0x5c00201c/*DISPLAY-CTL*/;
  _cfg_4c.uStack_18 = 0x5c002014/*DISPLAY-CTL*/;
  _cfg_4c.uStack_14 = 0x8d;
  _cfg_4c.uStack_10 = 0x2d;
  puVar3 = (void *)cls_105a05a0_new((cls_105a05a0 *)0x0,&_cfg_4c.uStack_2c);
  param_1->field_0x10 = (uint32_t)(puVar3);
  (((vtbl_entry*)(*(int *)((char*)puVar3 + 4)))[2].fn)
            (param_1->field_0x10 + ((vtbl_entry*)(*(int *)((char*)puVar3 + 4)))[2].adj,0);
  _cfg_4c.uStack_2c = read_table_entry_field(pvVar2,0x2a);
  _cfg_4c.uStack_28 = 0;
  _cfg_4c.uStack_24 = 0x5c002020/*DISPLAY-CTL*/;
  _cfg_4c.uStack_20 = 0x5c002028/*DISPLAY-CTL*/;
  _cfg_4c.uStack_1c = 0x5c00202c/*DISPLAY-CTL*/;
  _cfg_4c.uStack_18 = 0x5c002024/*DISPLAY-CTL*/;
  _cfg_4c.uStack_14 = 0x8e;
  _cfg_4c.uStack_10 = 0x2e;
  puVar3 = (void *)cls_105a05a0_new((cls_105a05a0 *)0x0,&_cfg_4c.uStack_2c);
  param_1->field_0x14 = (uint32_t)(puVar3);
  (((vtbl_entry*)(*(int *)((char*)puVar3 + 4)))[2].fn)
            (param_1->field_0x14 + ((vtbl_entry*)(*(int *)((char*)puVar3 + 4)))[2].adj,0);
  _cfg_4c.uStack_2c = 0;
  read_table_entry_field(pvVar2,0x30);
  _cfg_4c.uStack_28 = 0;
  _cfg_4c.uStack_24 = 0x5c002030/*DISPLAY-CTL*/;
  _cfg_4c.uStack_20 = 0x5c002038/*DISPLAY-CTL*/;
  _cfg_4c.uStack_1c = 0x5c00203c/*DISPLAY-CTL*/;
  _cfg_4c.uStack_14 = 0x8f;
  _cfg_4c.uStack_18 = 0x5c002034/*DISPLAY-CTL*/;
  _cfg_4c.uStack_10 = 0x2f;
  puVar3 = (void *)cls_105a05a0_new((cls_105a05a0 *)0x0,&_cfg_4c.uStack_2c);
  param_1->field_0x18 = (uint32_t)(puVar3);
  uVar4 = (((vtbl_entry*)(*(int *)((char*)puVar3 + 4)))[2].fn)
                    (param_1->field_0x18 + ((vtbl_entry*)(*(int *)((char*)puVar3 + 4)))[2].adj,0);
  free_if_flag_set_1043c874(&_cfg_4c.uStack_2c,2);
  free_if_flag_set_1043c20c(&_cfg_4c.uStack_4c,2);
  return uVar4;
}

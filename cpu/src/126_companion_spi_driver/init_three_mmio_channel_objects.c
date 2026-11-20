/* @k10d init_three_mmio_channel_objects @ 0x10440912
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_three_mmio_channel_objects(cls_105a0b64 *param_1)

{
  struct {
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_2c;
  int iVar1;
  void *pvVar2;
  void *puVar3;
  uint32_t uVar4;
  uintptr_t sp;
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  alloc_and_zero_struct_1044088c(&_cfg_2c.uStack_2c);
  _cfg_2c.uStack_20 = read_table_entry_field(pvVar2,0x10);
  _cfg_2c.uStack_2c = read_table_entry_field(pvVar2,0x3c);
  _cfg_2c.uStack_28 = read_table_entry_field(pvVar2,0x38);
  _cfg_2c.uStack_24 = read_table_entry_field(pvVar2,0x3a);
  _cfg_2c.uStack_1c = 0x5c004000;
  _cfg_2c.uStack_18 = 0x5c004003;
  _cfg_2c.uStack_14 = 0x5c004004;
  _cfg_2c.uStack_c = 0x41;
  _cfg_2c.uStack_10 = 0xb4;
  puVar3 = (void *)cls_105a0b0c_new((cls_105a0b0c *)0x0,&_cfg_2c.uStack_2c);
  param_1->field_0x4 = (uint32_t)(puVar3);
  iVar1 = *(int *)(param_1->field_0x4 + 4);
  (((vtbl_entry*)(iVar1))[2].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[2].adj,0);
  _cfg_2c.uStack_2c = read_table_entry_field(pvVar2,0x51);
  _cfg_2c.uStack_28 = read_table_entry_field(pvVar2,0x4f);
  _cfg_2c.uStack_24 = read_table_entry_field(pvVar2,0x50);
  _cfg_2c.uStack_1c = 0x5c004020;
  _cfg_2c.uStack_18 = 0x5c004023;
  _cfg_2c.uStack_14 = 0x5c004024;
  _cfg_2c.uStack_c = 0x42;
  _cfg_2c.uStack_10 = 0xb5;
  puVar3 = (void *)cls_105a0b0c_new((cls_105a0b0c *)0x0,&_cfg_2c.uStack_2c);
  param_1->field_0x8 = (uint32_t)(puVar3);
  (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].fn)
            (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].adj,0);
  _cfg_2c.uStack_2c = read_table_entry_field(pvVar2,0x41);
  _cfg_2c.uStack_28 = read_table_entry_field(pvVar2,0x42);
  _cfg_2c.uStack_24 = read_table_entry_field(pvVar2,0x43);
  _cfg_2c.uStack_1c = 0x5c004040/*SPI-CPUCOM*/;
  _cfg_2c.uStack_18 = 0x5c004043/*SPI-CPUCOM*/;
  _cfg_2c.uStack_c = 0x43;
  _cfg_2c.uStack_14 = 0x5c004044/*SPI-CPUCOM*/;
  _cfg_2c.uStack_10 = 0xb6;
  puVar3 = (void *)cls_105a0b0c_new((cls_105a0b0c *)0x0,&_cfg_2c.uStack_2c);
  param_1->field_0xc = (uint32_t)(puVar3);
  uVar4 = (((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].fn)
                    (param_1->field_0xc + ((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].adj,0);
  free_heap_block_if_flagged_104408c8(&_cfg_2c.uStack_2c,2);
  return uVar4;
}

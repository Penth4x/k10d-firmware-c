/* @k10d init_three_mmio_channel_objects @ 0x10440912
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_three_mmio_channel_objects(cls_105a0b64 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *puVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  alloc_and_zero_struct_1044088c(&uStack_2c);
  uStack_20 = read_table_entry_field(pvVar2,0x10);
  uStack_2c = read_table_entry_field(pvVar2,0x3c);
  uStack_28 = read_table_entry_field(pvVar2,0x38);
  uStack_24 = read_table_entry_field(pvVar2,0x3a);
  uStack_1c = 0x5c004000;
  uStack_18 = 0x5c004003;
  uStack_14 = 0x5c004004;
  uStack_c = 0x41;
  uStack_10 = 0xb4;
  puVar3 = (void *)cls_105a0b0c_new((cls_105a0b0c *)0x0,&uStack_2c);
  param_1->field_0x4 = (uint32_t)(puVar3);
  iVar1 = *(int *)(param_1->field_0x4 + 4);
  (((vtbl_entry*)(iVar1))[2].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[2].adj,0);
  uStack_2c = read_table_entry_field(pvVar2,0x51);
  uStack_28 = read_table_entry_field(pvVar2,0x4f);
  uStack_24 = read_table_entry_field(pvVar2,0x50);
  uStack_1c = 0x5c004020;
  uStack_18 = 0x5c004023;
  uStack_14 = 0x5c004024;
  uStack_c = 0x42;
  uStack_10 = 0xb5;
  puVar3 = (void *)cls_105a0b0c_new((cls_105a0b0c *)0x0,&uStack_2c);
  param_1->field_0x8 = (uint32_t)(puVar3);
  (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].fn)
            (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].adj,0);
  uStack_2c = read_table_entry_field(pvVar2,0x41);
  uStack_28 = read_table_entry_field(pvVar2,0x42);
  uStack_24 = read_table_entry_field(pvVar2,0x43);
  uStack_1c = 0x5c004040/*SPI-CPUCOM*/;
  uStack_18 = 0x5c004043/*SPI-CPUCOM*/;
  uStack_c = 0x43;
  uStack_14 = 0x5c004044/*SPI-CPUCOM*/;
  uStack_10 = 0xb6;
  puVar3 = (void *)cls_105a0b0c_new((cls_105a0b0c *)0x0,&uStack_2c);
  param_1->field_0xc = (uint32_t)(puVar3);
  uVar4 = (((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].fn)
                    (param_1->field_0xc + ((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].adj,0);
  free_heap_block_if_flagged_104408c8(&uStack_2c,2);
  return uVar4;
}

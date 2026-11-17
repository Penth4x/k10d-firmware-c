/* @k10d init_three_mmio_channel_objects @ 0x10440912
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_three_mmio_channel_objects(void *param_1)

{
  void *pvVar1;
  int iVar2;
  uint32_t uVar3;
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
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  alloc_and_zero_struct_1044088c(&uStack_2c);
  uStack_20 = read_table_entry_field(pvVar1,0x10);
  uStack_2c = read_table_entry_field(pvVar1,0x3c);
  uStack_28 = read_table_entry_field(pvVar1,0x38);
  uStack_24 = read_table_entry_field(pvVar1,0x3a);
  uStack_1c = 0x5c004000;
  uStack_18 = 0x5c004003;
  uStack_14 = 0x5c004004;
  uStack_c = 0x41;
  uStack_10 = 0xb4;
  iVar2 = cls_105a0b0c_new((uint32_t *)0x0,&uStack_2c);
  *(int *)((int)param_1 + 4) = iVar2;
  iVar2 = *(int *)(*(int *)((int)param_1 + 4) + 4);
  (**(code **)(iVar2 + 0x14))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar2 + 0x10),0);
  uStack_2c = read_table_entry_field(pvVar1,0x51);
  uStack_28 = read_table_entry_field(pvVar1,0x4f);
  uStack_24 = read_table_entry_field(pvVar1,0x50);
  uStack_1c = 0x5c004020;
  uStack_18 = 0x5c004023;
  uStack_14 = 0x5c004024;
  uStack_c = 0x42;
  uStack_10 = 0xb5;
  iVar2 = cls_105a0b0c_new((uint32_t *)0x0,&uStack_2c);
  *(int *)((int)param_1 + 8) = iVar2;
  iVar2 = *(int *)(*(int *)((int)param_1 + 8) + 4);
  (**(code **)(iVar2 + 0x14))(*(int *)((int)param_1 + 8) + (int)*(short *)(iVar2 + 0x10),0);
  uStack_2c = read_table_entry_field(pvVar1,0x41);
  uStack_28 = read_table_entry_field(pvVar1,0x42);
  uStack_24 = read_table_entry_field(pvVar1,0x43);
  uStack_1c = 0x5c004040/*SPI-CPUCOM*/;
  uStack_18 = 0x5c004043/*SPI-CPUCOM*/;
  uStack_c = 0x43;
  uStack_14 = 0x5c004044/*SPI-CPUCOM*/;
  uStack_10 = 0xb6;
  iVar2 = cls_105a0b0c_new((uint32_t *)0x0,&uStack_2c);
  *(int *)((int)param_1 + 0xc) = iVar2;
  iVar2 = *(int *)(*(int *)((int)param_1 + 0xc) + 4);
  uVar3 = (**(code **)(iVar2 + 0x14))
                    (*(int *)((int)param_1 + 0xc) + (int)*(short *)(iVar2 + 0x10),0);
  free_heap_block_if_flagged_104408c8(&uStack_2c,2);
  return uVar3;
}

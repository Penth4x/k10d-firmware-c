/* @k10d initialize_subsystem_object_10442bca @ 0x10442bca
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructs a new object using a configuration array of MMIO addresses and stores the
 *   pointer in the caller's structure.
 * summary:
 *   The function builds a stack array containing addresses in the 0x5c000000 range and
 *   other constants. It calls alloc_and_zero_struct_10442b44,
 *   get_or_init_sram_buffer_104277bc, and read_table_entry_field to prepare the
 *   configuration. It then instantiates a new object via cls_105a0d5c_new, stores the
 *   result at param_1 + 4, invokes a virtual method on the new object, and calls
 *   free_heap_if_flag_set_10442b80 for cleanup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_subsystem_object_10442bca(void *param_1)

{
  void *pvVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  int aiStack_2c [9];
  
  alloc_and_zero_struct_10442b44(aiStack_2c);
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  aiStack_2c[0] = read_table_entry_field(pvVar1,0xf);
  aiStack_2c[2] = 0x5c000002/*DISPLAY-CTL*/;
  aiStack_2c[3] = 0x5c000004/*DISPLAY-CTL*/;
  aiStack_2c[4] = 0x5c000006/*DISPLAY-CTL*/;
  aiStack_2c[5] = 0x5c000016/*DISPLAY-CTL*/;
  aiStack_2c[1] = 0x5c000000/*DISPLAY-CTL*/;
  aiStack_2c[6] = 0x5c000018/*DISPLAY-CTL*/;
  aiStack_2c[7] = 0xa6;
  aiStack_2c[8] = 0x49;
  iVar2 = cls_105a0d5c_new((uint32_t *)0x0,aiStack_2c);
  *(int *)((int)param_1 + 4) = iVar2;
  uVar3 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x10),0);
  free_heap_if_flag_set_10442b80(aiStack_2c,2);
  return uVar3;
}

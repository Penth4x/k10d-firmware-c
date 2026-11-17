/* @k10d initialize_object_state_1041ad18 @ 0x1041ad18
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Initializes object fields by calling helper functions and invoking virtual methods on a
 *   sub-object.
 * summary:
 *   The function writes return values from get_or_init_singleton_object_1051d40e,
 *   get_sysparam_store_instance, and read_table_entry_field into specific offsets of the
 *   object. It then performs a series of virtual calls (slot 3) on an object pointer stored
 *   at offset 0x24, passing incrementing integer arguments. Finally, it updates a pointer
 *   at offset 0x3c and calls wait_flg_obj on two other offsets.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_state_1041ad18(void *param_1)

{
  uint32_t uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  alloc_pool_and_init_task((int *)((int)param_1 + 0x10),10,0x2000,4);
  uVar1 = get_or_init_singleton_object_1051d40e();
  *(uint32_t *)((int)param_1 + 0x44) = uVar1;
  uVar1 = get_sysparam_store_instance();
  *(uint32_t *)((int)param_1 + 0x48) = uVar1;
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  uVar1 = read_table_entry_field(pvVar2,0xc1);
  *(uint32_t *)((int)param_1 + 0x4c) = uVar1;
  uVar1 = read_table_entry_field(pvVar2,0xb8);
  *(uint32_t *)((int)param_1 + 0x2c) = uVar1;
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x24) + 4);
  iVar3 = (int)param_1 + 8;
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x24) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x80000003/*SDRAM*/);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x24) + 4);
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x24) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x80000004/*SDRAM*/);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x24) + 4);
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x24) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x80000005/*SDRAM*/);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x24) + 4);
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x24) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x80000006/*SDRAM*/);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x24) + 4);
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x24) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x80000008/*SDRAM*/);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x24) + 4);
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x24) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x80000009/*SDRAM*/);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x24) + 4);
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x24) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x8000000b/*SDRAM*/);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x24) + 4);
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x24) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x8000000c/*SDRAM*/);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x24) + 4);
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x24) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x8000001a/*SDRAM*/);
  *(int *)(*(int *)((int)param_1 + 0x3c) + 0x10) = (int)param_1 + 4;
  wait_flg_obj((void *)((int)param_1 + 0x7c),0);
  wait_flg_obj((void *)((int)param_1 + 0x84),0);
  return 1;
}

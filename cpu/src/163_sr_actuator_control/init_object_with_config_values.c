/* @k10d init_object_with_config_values @ 0x10471006
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 163_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting up internal state and populating fields with values
 *   from global configuration sources.
 * summary:
 *   The function calls two initialization helpers on sub-structures at offsets 0x4c and 8.
 *   It then retrieves a global object via get_or_init_sram_buffer_104277bc and uses
 *   read_table_entry_field to fetch multiple values (identified by hex keys like 0x72,
 *   0x47, etc.) which are stored into the object's fields at offsets 0x20 through 0x60. It
 *   also copies values from other global objects returned by get_cls_105a7db4_singleton and
 *   get_sensor_singleton. The function returns 1, likely indicating success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_config_values(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  wait_flg_obj((void *)((int)param_1 + 0x4c),0);
  alloc_pool_and_init_task((int *)((int)param_1 + 8),0xf,0x1000,4);
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0x72);
  *(uint32_t *)((int)param_1 + 0x20) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0x47);
  *(uint32_t *)((int)param_1 + 0x30) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0x48);
  *(uint32_t *)((int)param_1 + 0x34) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0x49);
  *(uint32_t *)((int)param_1 + 0x38) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0x4a);
  *(uint32_t *)((int)param_1 + 0x3c) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0x4b);
  *(uint32_t *)((int)param_1 + 0x40) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0x66);
  *(uint32_t *)((int)param_1 + 0x24) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0x71);
  *(uint32_t *)((int)param_1 + 0x28) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0x29);
  *(uint32_t *)((int)param_1 + 0x2c) = uVar2;
  iVar3 = get_cls_105a7db4_singleton();
  *(uint32_t *)((int)param_1 + 0x1c) = *(uint32_t *)(iVar3 + 8);
  iVar3 = get_sensor_singleton();
  *(uint32_t *)((int)param_1 + 0x54) = *(uint32_t *)(iVar3 + 4);
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0x8e);
  *(uint32_t *)((int)param_1 + 0x60) = uVar2;
  return 1;
}

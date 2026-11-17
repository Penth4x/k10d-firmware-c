/* @k10d configure_sensor_readout_params_1039877e @ 0x1039877e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sensor/AFE control object by writing a sequence of configuration values
 *   to specific register offsets.
 * summary:
 *   The function takes an object pointer (param_1) and a base address (0x5060000), then
 *   calls a series of helper functions (forward_call_via_offset_0x20,
 *   allocate_and_init_2d_buffer_1039c9c0, dispatch_virtual_method_call,
 *   allocate_2d_buffer_block, allocate_and_init_2d_buffer_1039c664,
 *   allocate_and_init_object_entry) to write specific values to offsets within that base
 *   address. It also calls several functions (init_object_with_fourteen_handles,
 *   init_struct_with_seven_helpers, init_param_block_with_handles,
 *   init_object_with_seven_helpers_10399588) that return values stored into the object's
 *   structure at offsets 0x60, 0x64, 0x68, and 0x6c, suggesting these are calculated
 *   parameters or handles. Finally, it calls call_helper_four_times_rotating_params with
 *   these calculated values and set_object_field_at_offset_0x10, likely to apply the
 *   configuration or start the process. The pattern of writing to a contiguous block of
 *   memory (0x5060000+) with specific values and calculating derived parameters is
 *   consistent with configuring a hardware peripheral like an image sensor or AFE.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_sensor_readout_params_1039877e(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uintptr_t sp;
  uint *puVar9;
  uint8_t auStack_30 [16];
  
  puVar9 = (uint *)auStack_30;
  forward_call_via_offset_0x20(param_1,(uint *)0x105610c0/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x5060000);
  *puVar9 = 1;
  allocate_and_init_2d_buffer_1039c9c0((int)param_1,(int)pvVar1,(void *)0x5060001,1,*puVar9);
  *puVar9 = 0x50;
  dispatch_virtual_method_call((int)param_1,(int)pvVar1,(void *)0x5060002,0x20,*puVar9);
  iVar2 = init_object_with_fourteen_handles(param_1,(int)pvVar1);
  *(int *)((int)param_1 + 0x60) = iVar2;
  *puVar9 = 6;
  iVar2 = allocate_2d_buffer_block((int)param_1,(int)pvVar1,(void *)0x5060020,0x13,*puVar9);
  iVar3 = init_struct_with_seven_helpers(param_1,(int)pvVar1,iVar2);
  *(int *)((int)param_1 + 100) = iVar3;
  *puVar9 = 8;
  iVar3 = allocate_2d_buffer_block((int)param_1,(int)pvVar1,(void *)0x506002f,0x13,*puVar9);
  iVar4 = init_param_block_with_handles(param_1,(int)pvVar1,iVar3);
  *(int *)((int)param_1 + 0x68) = iVar4;
  *puVar9 = 10;
  iVar4 = allocate_2d_buffer_block((int)param_1,(int)pvVar1,(void *)0x506003c,0x13,*puVar9);
  iVar5 = init_object_with_seven_helpers_10399588(param_1,(int)pvVar1,iVar4);
  *(int *)((int)param_1 + 0x6c) = iVar5;
  iVar6 = *(int *)((int)param_1 + 0x60);
  iVar7 = *(int *)((int)param_1 + 100);
  iVar8 = *(int *)((int)param_1 + 0x68);
  *puVar9 = iVar5;
  puVar9[2] = iVar3;
  puVar9[1] = iVar2;
  puVar9[3] = iVar4;
  call_helper_four_times_rotating_params(param_1,iVar6,iVar7,iVar8,*puVar9,puVar9[1],puVar9[2],puVar9[3]);
  *puVar9 = 400;
  dispatch_virtual_method_call((int)param_1,(int)pvVar1,(void *)0x506003e,0x20,*puVar9);
  *puVar9 = 0x11;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x506003f,1,*puVar9);
  *puVar9 = 0x11;
  *(uint8_t *)((int)puVar9 + 7) = 1;
  puVar9[2] = 0;
  puVar9[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5060040,5,*puVar9,*(uint8_t *)((int)puVar9 + 7)
               ,puVar9[2],*(short *)((int)puVar9 + 0xe));
  *puVar9 = 0x11;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5060041,0x12,*puVar9);
  *(int *)((int)param_1 + 0xcc) = iVar2;
  *puVar9 = 0x11;
  *(uint8_t *)((int)puVar9 + 7) = 1;
  puVar9[2] = 0;
  puVar9[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5060042,0x15,*puVar9,
                       *(uint8_t *)((int)puVar9 + 7),puVar9[2],*(short *)((int)puVar9 + 0xe));
  *(int *)((int)param_1 + 0xd0) = iVar2;
  reset_and_select_one_field(param_1,0x5060003,1);
  reset_and_select_one_field(param_1,0x5060013,1);
  reset_and_select_one_field(param_1,0x5060022,1);
  reset_and_select_one_field(param_1,0x5060031,1);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

/* @k10d init_object_with_seventeen_handles_10397862 @ 0x10397862
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_seventeen_handles_10397862(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  uint *puVar3;
  uint8_t auStack_3c [16];
  
  puVar3 = (uint *)auStack_3c;
  forward_call_via_offset_0x20(param_1,(uint *)0x10560c60/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x5030000);
  *puVar3 = 0;
  iVar2 = allocate_and_init_buffer_1039c5b2((int)param_1,(int)pvVar1,(void *)0x5030001,0,*puVar3);
  *(int *)((int)param_1 + 0x24) = iVar2;
  *puVar3 = 1;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5030002,1,*puVar3);
  *puVar3 = 1;
  iVar2 = allocate_and_init_2d_array((int)param_1,(int)pvVar1,(void *)0x5030003,0x11,*puVar3);
  *(int *)((int)param_1 + 0x38) = iVar2;
  *puVar3 = 1;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5030004,0x14,*puVar3,
               *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 1;
  iVar2 = allocate_and_init_2d_array((int)param_1,(int)pvVar1,(void *)0x5030005,0x15,*puVar3);
  *(int *)((int)param_1 + 0x3c) = iVar2;
  *puVar3 = 5;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 1;
  puVar3[3] = 0x18;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5030006,1,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 9;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5030007,0x17,*puVar3);
  *puVar3 = 9;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5030008,1,*puVar3);
  *puVar3 = 0xb;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 1;
  puVar3[3] = 0xb;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5030009,1,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 0xb;
  iVar2 = allocate_and_init_2d_array((int)param_1,(int)pvVar1,(void *)0x503000a,0xd,*puVar3);
  *(int *)((int)param_1 + 0x40) = iVar2;
  *puVar3 = 0xb;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x503000b,0x10,*puVar3);
  set_field_and_call_helper_10397bd2(param_1,1);
  *puVar3 = 0xb;
  puVar3[1] = 0;
  puVar3[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x503000c,0x12,*puVar3,puVar3[1],
                       *(short *)((int)puVar3 + 10));
  *(int *)((int)param_1 + 0x48) = iVar2;
  *puVar3 = 0xb;
  iVar2 = allocate_and_init_2d_buffer_1039c78a((int)param_1,(int)pvVar1,(void *)0x503000d,0x17,*puVar3);
  *(int *)((int)param_1 + 0x4c) = iVar2;
  *puVar3 = 0xb;
  iVar2 = allocate_and_init_2d_buffer_1039c78a((int)param_1,(int)pvVar1,(void *)0x503000e,0x17,*puVar3);
  *(int *)((int)param_1 + 0x50) = iVar2;
  set_flag_and_update_two_fields_10397ca6(param_1,0);
  *puVar3 = 0xd;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 1;
  puVar3[3] = 0xb;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x503000f,1,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 0xd;
  iVar2 = allocate_and_init_2d_array((int)param_1,(int)pvVar1,(void *)0x5030010,0xd,*puVar3);
  *(int *)((int)param_1 + 0x44) = iVar2;
  *puVar3 = 0xf;
  iVar2 = allocate_and_init_2d_buffer_1039c78a((int)param_1,(int)pvVar1,(void *)0x5030011,0x12,*puVar3);
  *(int *)((int)param_1 + 0x54) = iVar2;
  *puVar3 = 0xf;
  puVar3[1] = 0;
  puVar3[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x5030012,0x15,*puVar3,puVar3[1],
                       *(short *)((int)puVar3 + 10));
  *(int *)((int)param_1 + 0x58) = iVar2;
  *puVar3 = 0x11;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5030013,1,*puVar3);
  *puVar3 = 0x11;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5030014,5,*puVar3);
  *puVar3 = 0x11;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5030015,0x12,*puVar3);
  *(int *)((int)param_1 + 0x5c) = iVar2;
  *puVar3 = 0x11;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5030016,0x15,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x60) = iVar2;
  *puVar3 = 0xb;
  allocate_and_init_2d_buffer_1039cb5e((int)param_1,(int)pvVar1,(void *)0x5030017,1,*puVar3);
  *puVar3 = 0xd;
  allocate_and_init_2d_buffer_1039cb5e((int)param_1,(int)pvVar1,(void *)0x5030018,1,*puVar3);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

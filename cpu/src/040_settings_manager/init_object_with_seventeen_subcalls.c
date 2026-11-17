/* @k10d init_object_with_seventeen_subcalls @ 0x1039aff8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_seventeen_subcalls(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  uint *puVar3;
  uint8_t auStack_44 [16];
  
  puVar3 = (uint *)auStack_44;
  forward_call_via_offset_0x20(param_1,(uint *)0x10561d1c/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x50d0000);
  *puVar3 = 0;
  iVar2 = allocate_and_init_buffer_1039c5b2((int)param_1,(int)pvVar1,(void *)0x50d0001,0,*puVar3);
  *(int *)((int)param_1 + 0x24) = iVar2;
  *puVar3 = 1;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x50d0002,1,*puVar3);
  *puVar3 = 1;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0003,5,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0004,1,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0005,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x68) = iVar2;
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0006,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x6c) = iVar2;
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0007,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x70) = iVar2;
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0008,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x74) = iVar2;
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0009,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x78) = iVar2;
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d000a,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x7c) = iVar2;
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d000b,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x80) = iVar2;
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d000c,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x84) = iVar2;
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d000d,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x88) = iVar2;
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d000e,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x8c) = iVar2;
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d000f,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x90) = iVar2;
  *puVar3 = 6;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0010,0xe,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x94) = iVar2;
  select_one_of_twelve_slots_1039b56c(param_1,0);
  *puVar3 = 8;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0011,1,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 8;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0012,0x14,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x48) = iVar2;
  *puVar3 = 8;
  *(uint8_t *)((int)puVar3 + 7) = 0;
  iVar2 = create_2d_buffer_object((int)param_1,(int)pvVar1,(void *)0x50d0013,0x14,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7));
  *(int *)((int)param_1 + 0x4c) = iVar2;
  *puVar3 = 8;
  *(uint8_t *)((int)puVar3 + 7) = 0;
  iVar2 = create_2d_buffer_object((int)param_1,(int)pvVar1,(void *)0x50d0014,0x14,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7));
  *(int *)((int)param_1 + 0x50) = iVar2;
  *puVar3 = 8;
  *(uint8_t *)((int)puVar3 + 7) = 0;
  iVar2 = create_2d_buffer_object((int)param_1,(int)pvVar1,(void *)0x50d0015,0x14,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7));
  *(int *)((int)param_1 + 0x54) = iVar2;
  select_one_of_four_slots_1039b68e(param_1,0);
  *puVar3 = 10;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0016,1,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 10;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0017,0x14,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x58) = iVar2;
  *puVar3 = 10;
  *(uint8_t *)((int)puVar3 + 7) = 0;
  iVar2 = create_2d_buffer_object((int)param_1,(int)pvVar1,(void *)0x50d0018,0x14,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7));
  *(int *)((int)param_1 + 0x5c) = iVar2;
  *puVar3 = 10;
  *(uint8_t *)((int)puVar3 + 7) = 0;
  iVar2 = create_2d_buffer_object((int)param_1,(int)pvVar1,(void *)0x50d0019,0x14,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7));
  *(int *)((int)param_1 + 0x60) = iVar2;
  *puVar3 = 10;
  *(uint8_t *)((int)puVar3 + 7) = 0;
  iVar2 = create_2d_buffer_object((int)param_1,(int)pvVar1,(void *)0x50d001a,0x14,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7));
  *(int *)((int)param_1 + 100) = iVar2;
  select_one_of_four_slots_1039b712(param_1,0);
  *puVar3 = 0xc;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d001b,1,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 0xc;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d001c,0x14,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x98) = iVar2;
  *puVar3 = 0xc;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d001d,0x14,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0x9c) = iVar2;
  *puVar3 = 0xc;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d001e,0x14,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0xa0) = iVar2;
  select_one_of_three_slots(param_1,0);
  *puVar3 = 0x11;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x50d001f,1,*puVar3);
  *puVar3 = 0x11;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0020,4,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 0xf;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x50d0021,1,*puVar3);
  *puVar3 = 0xf;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x50d0022,5,*puVar3);
  *puVar3 = 0xf;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x50d0023,0x12,*puVar3);
  *(int *)((int)param_1 + 0xa4) = iVar2;
  *puVar3 = 0xf;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50d0024,0x15,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)((int)param_1 + 0xa8) = iVar2;
  *puVar3 = 6;
  allocate_and_init_2d_buffer_1039cb5e((int)param_1,(int)pvVar1,(void *)0x50d0025,1,*puVar3);
  *puVar3 = 8;
  allocate_and_init_2d_buffer_1039cb5e((int)param_1,(int)pvVar1,(void *)0x50d0026,1,*puVar3);
  *puVar3 = 10;
  allocate_and_init_2d_buffer_1039cb5e((int)param_1,(int)pvVar1,(void *)0x50d0027,1,*puVar3);
  *puVar3 = 0xc;
  allocate_and_init_2d_buffer_1039cb5e((int)param_1,(int)pvVar1,(void *)0x50d0028,1,*puVar3);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

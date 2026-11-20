/* @k10d init_object_with_many_subhandles @ 0x103980ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_many_subhandles(cls_10563348 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  uint *puVar3;
  uint8_t auStack_34 [16];
  
  puVar3 = (uint *)auStack_34;
  forward_call_via_offset_0x20(param_1,(uint *)0x10560ee0/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x5050000);
  *puVar3 = 0;
  iVar2 = allocate_and_init_buffer_1039c5b2((int)param_1,(int)pvVar1,(void *)0x5050001,0,*puVar3);
  param_1->field_0x24 = iVar2;
  *puVar3 = 1;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5050002,1,*puVar3);
  *puVar3 = 1;
  iVar2 = allocate_and_init_2d_array((int)param_1,(int)pvVar1,(void *)0x5050003,0x11,*puVar3);
  *(int *)&param_1->field_0x38 = iVar2;
  *puVar3 = 1;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5050004,0x14,*puVar3,
               *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 1;
  iVar2 = allocate_and_init_2d_array((int)param_1,(int)pvVar1,(void *)0x5050005,0x15,*puVar3);
  *(int *)&param_1->field_0x3c = iVar2;
  *puVar3 = 3;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5050014,0x16,*puVar3);
  *puVar3 = 5;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 1;
  puVar3[3] = 0x18;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5050006,1,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 9;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5050007,0x17,*puVar3);
  *puVar3 = 9;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5050008,1,*puVar3);
  *puVar3 = 0xb;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 1;
  puVar3[3] = 0xb;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5050009,1,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 0xb;
  iVar2 = allocate_and_init_2d_array((int)param_1,(int)pvVar1,(void *)0x505000a,0xd,*puVar3);
  *(int *)&param_1->field_0x40 = iVar2;
  clamp_and_store_short_field(param_1,1);
  *puVar3 = 0xb;
  puVar3[1] = 0;
  puVar3[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x505000b,0x12,*puVar3,puVar3[1],
                       *(short *)((int)puVar3 + 10));
  *(int *)&param_1->field_0x48 = iVar2;
  *puVar3 = 0xb;
  iVar2 = allocate_and_init_2d_buffer_1039c78a((int)param_1,(int)pvVar1,(void *)0x505000c,0x17,*puVar3);
  param_1->field_0x4c = iVar2;
  *puVar3 = 0xb;
  iVar2 = allocate_and_init_2d_buffer_1039c78a((int)param_1,(int)pvVar1,(void *)0x505000d,0x17,*puVar3);
  param_1->field_0x50 = iVar2;
  set_flag_and_update_two_fields_103984ce(param_1,0);
  *puVar3 = 0xd;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 1;
  puVar3[3] = 0xb;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x505000e,1,*puVar3,*(uint8_t *)((int)puVar3 + 7)
               ,puVar3[2],*(short *)((int)puVar3 + 0xe));
  *puVar3 = 0xd;
  iVar2 = allocate_and_init_2d_array((int)param_1,(int)pvVar1,(void *)0x505000f,0xd,*puVar3);
  *(int *)&param_1->field_0x44 = iVar2;
  clamp_and_store_short_value(param_1,1);
  *puVar3 = 0x11;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5050010,1,*puVar3);
  *puVar3 = 0x11;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5050011,5,*puVar3);
  *puVar3 = 0x11;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5050012,0x12,*puVar3);
  param_1->field_0x54 = iVar2;
  *puVar3 = 0x11;
  *(uint8_t *)((int)puVar3 + 7) = 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5050013,0x15,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7),puVar3[2],*(short *)((int)puVar3 + 0xe));
  *(int *)&param_1->field_0x58 = iVar2;
  *puVar3 = 0xb;
  allocate_and_init_2d_buffer_1039cb5e((int)param_1,(int)pvVar1,(void *)0x5050015,1,*puVar3);
  *puVar3 = 0xd;
  allocate_and_init_2d_buffer_1039cb5e((int)param_1,(int)pvVar1,(void *)0x5050016,1,*puVar3);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

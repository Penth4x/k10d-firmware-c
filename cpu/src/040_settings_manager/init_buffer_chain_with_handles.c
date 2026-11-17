/* @k10d init_buffer_chain_with_handles @ 0x1039a640
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_buffer_chain_with_handles(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  uint *puVar6;
  uint8_t auStack_2c [16];
  
  puVar6 = (uint *)auStack_2c;
  forward_call_via_offset_0x20(param_1,(uint *)0x105619d4/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x50b0000);
  *puVar6 = 1;
  *(uint8_t *)((int)puVar6 + 7) = 1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50b0001,1,*puVar6,*(uint8_t *)((int)puVar6 + 7)
               ,puVar6[2],*(short *)((int)puVar6 + 0xe));
  *puVar6 = 0x50;
  dispatch_virtual_method_call((int)param_1,(int)pvVar1,(void *)0x50b0002,0x20,*puVar6);
  *puVar6 = 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b0003,1,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x34) = iVar2;
  *puVar6 = 4;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b0004,1,*(short *)((int)puVar6 + 2));
  *puVar6 = 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b0005,0xd,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x38) = iVar2;
  *puVar6 = 4;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b0006,0xd,*(short *)((int)puVar6 + 2));
  *puVar6 = 6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b0007,1,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x3c) = iVar2;
  *puVar6 = 6;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b0008,1,*(short *)((int)puVar6 + 2));
  *puVar6 = 6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b0009,0xd,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x40) = iVar2;
  *puVar6 = 6;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b000a,0xd,*(short *)((int)puVar6 + 2));
  *puVar6 = 8;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b000b,1,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x44) = iVar2;
  *puVar6 = 8;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b000c,1,*(short *)((int)puVar6 + 2));
  *puVar6 = 8;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b000d,0xd,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x48) = iVar2;
  *puVar6 = 8;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b000e,0xd,*(short *)((int)puVar6 + 2));
  *puVar6 = 10;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b000f,1,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x4c) = iVar2;
  *puVar6 = 10;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b0010,1,*(short *)((int)puVar6 + 2));
  *puVar6 = 10;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b0011,0xd,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x50) = iVar2;
  *puVar6 = 10;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b0012,0xd,*(short *)((int)puVar6 + 2));
  *puVar6 = 0xc;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b0013,1,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x54) = iVar2;
  *puVar6 = 0xc;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b0014,1,*(short *)((int)puVar6 + 2));
  *puVar6 = 0xc;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b0015,0xd,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x58) = iVar2;
  *puVar6 = 0xc;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b0016,0xd,*(short *)((int)puVar6 + 2));
  *puVar6 = 0xe;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b0017,1,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x5c) = iVar2;
  *puVar6 = 0xe;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b0018,1,*(short *)((int)puVar6 + 2));
  *puVar6 = 0xe;
  puVar6[1] = 0;
  puVar6[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x50b0019,0xd,*puVar6,puVar6[1],
                       *(short *)((int)puVar6 + 10));
  *(int *)((int)param_1 + 0x60) = iVar2;
  *puVar6 = 0xe;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x50b001a,0xd,*(short *)((int)puVar6 + 2));
  iVar2 = *(int *)((int)param_1 + 0x34);
  iVar3 = *(int *)((int)param_1 + 0x60);
  iVar4 = *(int *)((int)param_1 + 0x3c);
  *puVar6 = *(uint32_t *)((int)param_1 + 0x38);
  puVar6[1] = iVar3;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  iVar2 = *(int *)((int)param_1 + 0x38);
  iVar3 = *(int *)((int)param_1 + 0x5c);
  iVar4 = *(int *)((int)param_1 + 0x40);
  iVar5 = *(int *)((int)param_1 + 0x34);
  *puVar6 = *(uint32_t *)((int)param_1 + 0x3c);
  puVar6[1] = iVar5;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  iVar2 = *(int *)((int)param_1 + 0x3c);
  iVar3 = *(int *)((int)param_1 + 0x34);
  iVar4 = *(int *)((int)param_1 + 0x44);
  iVar5 = *(int *)((int)param_1 + 0x38);
  *puVar6 = *(uint32_t *)((int)param_1 + 0x40);
  puVar6[1] = iVar5;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  iVar2 = *(int *)((int)param_1 + 0x40);
  iVar3 = *(int *)((int)param_1 + 0x38);
  iVar4 = *(int *)((int)param_1 + 0x48);
  iVar5 = *(int *)((int)param_1 + 0x3c);
  *puVar6 = *(uint32_t *)((int)param_1 + 0x44);
  puVar6[1] = iVar5;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  iVar2 = *(int *)((int)param_1 + 0x44);
  iVar3 = *(int *)((int)param_1 + 0x3c);
  iVar4 = *(int *)((int)param_1 + 0x4c);
  iVar5 = *(int *)((int)param_1 + 0x40);
  *puVar6 = *(uint32_t *)((int)param_1 + 0x48);
  puVar6[1] = iVar5;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  iVar2 = *(int *)((int)param_1 + 0x48);
  iVar3 = *(int *)((int)param_1 + 0x40);
  iVar4 = *(int *)((int)param_1 + 0x50);
  iVar5 = *(int *)((int)param_1 + 0x44);
  *puVar6 = *(uint32_t *)((int)param_1 + 0x4c);
  puVar6[1] = iVar5;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  iVar2 = *(int *)((int)param_1 + 0x4c);
  iVar3 = *(int *)((int)param_1 + 0x44);
  iVar4 = *(int *)((int)param_1 + 0x54);
  iVar5 = *(int *)((int)param_1 + 0x48);
  *puVar6 = *(uint32_t *)((int)param_1 + 0x50);
  puVar6[1] = iVar5;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  iVar2 = *(int *)((int)param_1 + 0x50);
  iVar3 = *(int *)((int)param_1 + 0x48);
  iVar4 = *(int *)((int)param_1 + 0x58);
  iVar5 = *(int *)((int)param_1 + 0x4c);
  *puVar6 = *(uint32_t *)((int)param_1 + 0x54);
  puVar6[1] = iVar5;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  iVar2 = *(int *)((int)param_1 + 0x54);
  iVar3 = *(int *)((int)param_1 + 0x4c);
  iVar4 = *(int *)((int)param_1 + 0x5c);
  iVar5 = *(int *)((int)param_1 + 0x50);
  *puVar6 = *(uint32_t *)((int)param_1 + 0x58);
  puVar6[1] = iVar5;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  iVar2 = *(int *)((int)param_1 + 0x58);
  iVar3 = *(int *)((int)param_1 + 0x50);
  iVar4 = *(int *)((int)param_1 + 0x60);
  iVar5 = *(int *)((int)param_1 + 0x54);
  *puVar6 = *(uint32_t *)((int)param_1 + 0x5c);
  puVar6[1] = iVar5;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  iVar2 = *(int *)((int)param_1 + 0x5c);
  iVar3 = *(int *)((int)param_1 + 0x54);
  iVar4 = *(int *)((int)param_1 + 0x38);
  iVar5 = *(int *)((int)param_1 + 0x58);
  *puVar6 = *(uint32_t *)((int)param_1 + 0x60);
  puVar6[1] = iVar5;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  iVar2 = *(int *)((int)param_1 + 0x60);
  iVar3 = *(int *)((int)param_1 + 0x58);
  iVar4 = *(int *)((int)param_1 + 0x34);
  iVar5 = *(int *)((int)param_1 + 0x5c);
  *puVar6 = iVar4;
  puVar6[1] = iVar5;
  puVar6[2] = 0;
  puVar6[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  *puVar6 = 400;
  dispatch_virtual_method_call((int)param_1,(int)pvVar1,(void *)0x50b0002,0x20,*puVar6);
  *puVar6 = 0x11;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x50b001c,1,*puVar6);
  *puVar6 = 0x11;
  *(uint8_t *)((int)puVar6 + 7) = 1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50b001d,5,*puVar6,*(uint8_t *)((int)puVar6 + 7)
               ,puVar6[2],*(short *)((int)puVar6 + 0xe));
  *puVar6 = 0x11;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x50b001e,0x12,*puVar6);
  *(int *)((int)param_1 + 100) = iVar2;
  *puVar6 = 0x11;
  *(uint8_t *)((int)puVar6 + 7) = 1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50b001f,0x15,*puVar6,
                       *(uint8_t *)((int)puVar6 + 7),puVar6[2],*(short *)((int)puVar6 + 0xe));
  *(int *)((int)param_1 + 0x68) = iVar2;
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

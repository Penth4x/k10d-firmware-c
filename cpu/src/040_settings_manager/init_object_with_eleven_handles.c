/* @k10d init_object_with_eleven_handles @ 0x10399b78
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_eleven_handles(cls_105635ac *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_34 [16];
  
  piVar3 = (int *)auStack_34;
  forward_call_via_offset_0x20(param_1,(uint *)0x105616d0/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x5080000);
  *piVar3 = 1;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5080001,1,*piVar3);
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5080004,1,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  param_1->field_0x30 = iVar2;
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5080005,1,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)&param_1->field_0x34 = iVar2;
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5080006,1,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)&param_1->field_0x38 = iVar2;
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5080007,1,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)&param_1->field_0x3c = iVar2;
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5080008,1,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)&param_1->field_0x40 = iVar2;
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5080009,1,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)&param_1->field_0x44 = iVar2;
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x508000a,1,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)&param_1->field_0x48 = iVar2;
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x508000b,1,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  param_1->field_0x4c = iVar2;
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x508000c,1,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  param_1->field_0x50 = iVar2;
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5080015,1,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  param_1->field_0x54 = iVar2;
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5080016,1,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)&param_1->field_0x58 = iVar2;
  invoke_virtual_slot_two_1039ca9a(param_1,param_1->field_0x30,0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)&param_1->field_0x34,0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)&param_1->field_0x38,0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)&param_1->field_0x3c,0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)&param_1->field_0x40,0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)&param_1->field_0x44,0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)&param_1->field_0x48,0);
  invoke_virtual_slot_two_1039ca9a(param_1,param_1->field_0x4c,0);
  invoke_virtual_slot_two_1039ca9a(param_1,param_1->field_0x50,0);
  invoke_virtual_slot_two_1039ca9a(param_1,param_1->field_0x54,0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)&param_1->field_0x58,0);
  *piVar3 = 0x11;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5080002,1,*piVar3);
  param_1->field_0x28 = iVar2;
  *piVar3 = 0x11;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5080003,5,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  param_1->field_0x2c = iVar2;
  *piVar3 = 0x11;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x508000d,0x12,*piVar3);
  *(int *)&param_1->field_0x5c = iVar2;
  *piVar3 = 0x11;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x508000e,0x15,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)&param_1->field_0x60 = iVar2;
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

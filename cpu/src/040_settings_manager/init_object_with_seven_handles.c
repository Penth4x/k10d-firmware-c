/* @k10d init_object_with_seven_handles @ 0x1039c1ee
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a sequence of setup helpers and storing their returned
 *   handles into object fields.
 * summary:
 *   The function takes an object pointer and a configuration table, then calls a series of
 *   helper functions (allocate_and_init_2d_buffer_1039c664, allocate_and_init_object_entry,
 *   allocate_and_init_object_1039c94c, compute_three_grid_offsets) to configure components.
 *   It stores the resulting handles in the object's fields at offsets 0x28, 0x2c, 0x30,
 *   0x34, and 0x38. It also calls dispatch_six_optional_items three times with the stored
 *   handles, likely to link or initialize the components, and finally calls
 *   set_object_field_at_offset_0x10 to complete the setup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_seven_handles(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_40 [16];
  
  piVar5 = (int *)auStack_40;
  forward_call_via_offset_0x20(param_1,(uint *)0x105622d0/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x5010000);
  *piVar5 = 1;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5010001,1,*piVar5);
  *piVar5 = 5;
  *(uint8_t *)((int)piVar5 + 7) = 1;
  piVar5[2] = 1;
  piVar5[3] = 0x18;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5010002,1,*piVar5,*(uint8_t *)((int)piVar5 + 7)
               ,piVar5[2],*(short *)((int)piVar5 + 0xe));
  *piVar5 = 10;
  piVar5[1] = 1;
  piVar5[2] = 0x14;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x5010003,3,*piVar5,piVar5[1],
                       *(short *)((int)piVar5 + 10));
  *(int *)((int)param_1 + 0x28) = iVar2;
  *piVar5 = 0x501000d;
  piVar5[1] = 3;
  piVar5[2] = 10;
  piVar5[3] = 1;
  compute_three_grid_offsets((int)param_1,iVar2,(void *)0x5010008,(void *)0x501000c,(void *)*piVar5,
               *(short *)((int)piVar5 + 6),*(short *)((int)piVar5 + 10),piVar5[3]);
  *piVar5 = 0xc;
  piVar5[1] = 1;
  piVar5[2] = 0x14;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x5010004,3,*piVar5,piVar5[1],
                       *(short *)((int)piVar5 + 10));
  *(int *)((int)param_1 + 0x2c) = iVar2;
  *piVar5 = 0x501000d;
  piVar5[1] = 3;
  piVar5[2] = 0xc;
  piVar5[3] = 2;
  compute_three_grid_offsets((int)param_1,iVar2,(void *)0x5010009,(void *)0x501000b,(void *)*piVar5,
               *(short *)((int)piVar5 + 6),*(short *)((int)piVar5 + 10),piVar5[3]);
  *piVar5 = 0xe;
  piVar5[1] = 1;
  piVar5[2] = 0x14;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,(int)pvVar1,(void *)0x5010005,3,*piVar5,piVar5[1],
                       *(short *)((int)piVar5 + 10));
  *(int *)((int)param_1 + 0x30) = iVar2;
  *piVar5 = 0x501000c;
  piVar5[1] = 3;
  piVar5[2] = 0xe;
  piVar5[3] = 3;
  compute_three_grid_offsets((int)param_1,iVar2,(void *)0x501000a,(void *)0x501000b,(void *)*piVar5,
               *(short *)((int)piVar5 + 6),*(short *)((int)piVar5 + 10),piVar5[3]);
  iVar2 = *(int *)((int)param_1 + 0x28);
  iVar3 = *(int *)((int)param_1 + 0x30);
  iVar4 = *(int *)((int)param_1 + 0x2c);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  iVar2 = *(int *)((int)param_1 + 0x2c);
  iVar3 = *(int *)((int)param_1 + 0x28);
  iVar4 = *(int *)((int)param_1 + 0x30);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  iVar2 = *(int *)((int)param_1 + 0x30);
  iVar3 = *(int *)((int)param_1 + 0x2c);
  iVar4 = *(int *)((int)param_1 + 0x28);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  *piVar5 = 0x11;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5010006,0x12,*piVar5);
  *(int *)((int)param_1 + 0x34) = iVar2;
  *piVar5 = 0x11;
  *(uint8_t *)((int)piVar5 + 7) = 1;
  piVar5[2] = 0;
  piVar5[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5010007,0x15,*piVar5,
                       *(uint8_t *)((int)piVar5 + 7),piVar5[2],*(short *)((int)piVar5 + 0xe));
  *(int *)((int)param_1 + 0x38) = iVar2;
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

/* @k10d process_event_0x600001 @ 0x104f3746
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104f375c) overlaps instruction at (ram,0x104f375a)
    */

void process_event_0x600001(cls_105c39a4 *param_1,int *param_2)

{
  char cVar1;
  short sVar5;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  int iVar6;
  uintptr_t sp;
  int *piVar7;
  int tbr;
  uint8_t auStack_20 [4];
  short sStack_a;
  
  piVar7 = (int *)auStack_20;
  if ((param_2 != (int *)0x0) && (param_2[2] == 0x600001)) {
    iVar6 = param_2[1];
    sStack_a = 0;
    sVar5 = call_kernel_with_zero_arg();
    (*(code *)(tbr + 0x2fc))((int)sVar5,&sStack_a);
    sVar5 = call_kernel_with_zero_arg();
    (*(code *)(tbr + 0x2fc))((int)sVar5,0x10);
    uVar2 = get_sysparam_store_instance();
    iVar3 = get_sysparam_store_byte((uint8_t *)(uVar2),(uint32_t)(0x16));
    if (iVar3 != 0) {
      send_grid_data_in_blocks(param_1->field_0x30,*(uint32_t *)(iVar6 + 0x11c),iVar6 + 0x60);
    }
    pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar4,0xc,1);
    if (*(char *)(iVar6 + 0x3a) != '\0') {
      (*(code *)0x105095f2/*ROM*/)(param_1->field_0x30,iVar6 + 0x60,iVar6 + 0x3c);
    }
    pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar4,0xc,2);
    if (*(char *)(iVar6 + 0x3b) != '\0') {
      iVar3 = param_1->field_0x2c;
      *piVar7 = iVar6 + 0xe4;
      forward_params_to_subroutine((int)(iVar3),(ushort *)(iVar6 + 0x120),(ushort *)(iVar6 + 0x3c),(int)(iVar6 + 0x80),(int)(*piVar7));
      *(uint16_t *)(iVar6 + 0x2170) = *(uint16_t *)(iVar6 + 0x128);
      *(uint16_t *)(iVar6 + 0x2172) = *(uint16_t *)(iVar6 + 0x12a);
      *(uint16_t *)(iVar6 + 0x2174) = *(uint16_t *)(iVar6 + 300);
      *(uint16_t *)(iVar6 + 0x2176) = *(uint16_t *)(iVar6 + 0x12e);
    }
    dispatch_ten_param_calls((int)(param_1->field_0x2c),(uint16_t *)(iVar6 + 0x2170));
    iVar3 = *(int *)*param_2;
    (((vtbl_entry*)(iVar3))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar3))[2].adj,0x600002,param_2[3]);
    pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar4,0xc,3);
    if (*(char *)(iVar6 + 0x39) != '\0') {
      update_state_dependent_params(param_1->field_0x28,iVar6 + 0x80,iVar6 + 0xe4,iVar6 + 0x120);
    }
    iVar3 = *(int *)*param_2;
    (((vtbl_entry*)(iVar3))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar3))[2].adj,0x600003,param_2[3]);
    sVar5 = call_kernel_with_zero_arg();
    (*(code *)(tbr + 0x2fc))((int)sVar5,(int)sStack_a);
    pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar4,0xc,4);
    cVar1 = *(char *)(iVar6 + 0x38);
    while (cVar1 != '\0') {
      param_1->field_0x34 = false;
      build_and_send_struct((int)(param_1),(uint32_t *)(iVar6));
      cVar1 = param_1->field_0x34;
    }
    iVar3 = *(int *)*param_2;
    (((vtbl_entry*)(iVar3))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar3))[2].adj,0x600001,param_2[3]);
    pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar4,0xc,0);
  }
  return;
}

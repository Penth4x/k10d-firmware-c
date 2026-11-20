/* @k10d dispatch_image_processor_event @ 0x104fcde8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104fcdfa) overlaps instruction at (ram,0x104fcdf8)
    */

void dispatch_image_processor_event(cls_105d47d4 *param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    if (param_2[2] == 0xa0000a) {
      pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar1,0x11,4);
      forward_two_optional_strings((uint32_t)(param_1),(uint32_t *)(param_2[1]));
      iVar2 = *(int *)*param_2;
      (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0xa0000a,param_2[3]);
    }
    else if (param_2[2] == 0xa00001) {
      pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar1,0x11,1);
      submit_image_processor_job_104fd45a((int)(param_1),(uint32_t *)(param_2[1]));
      iVar2 = *(int *)*param_2;
      (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0xa00001,param_2[3]);
    }
    else if (param_2[2] == 0xa00002) {
      pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar1,0x11,2);
      submit_image_processor_job_104fd2c8((int)(param_1),(int *)(param_2[1]));
      iVar2 = *(int *)*param_2;
      (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0xa00002,param_2[3]);
    }
    else if (param_2[2] == 0xa00003) {
      pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar1,0x11,3);
      submit_image_processor_job_104fd514((int)(param_1),(uint32_t *)(param_2[1]));
      iVar2 = *(int *)*param_2;
      (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0xa00003,param_2[3]);
    }
    else if (param_2[2] == 0xa00005) {
      pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar1,0x11,4);
      program_image_processor_engine((int)(param_1),(uint32_t *)(param_2[1]));
      iVar2 = *(int *)*param_2;
      (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0xa00005,param_2[3]);
    }
    else if (param_2[2] == 0xa00006) {
      pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar1,0x11,5);
      submit_image_processor_job_104fd968((int)(param_1),(uint32_t *)(param_2[1]));
      iVar2 = *(int *)*param_2;
      (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0xa00006,param_2[3]);
    }
    else if (param_2[2] == 0xa00004) {
      pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar1,0x11,6);
      submit_three_imgp_commands((int)(param_1),(int *)(param_2[1]));
      iVar2 = *(int *)*param_2;
      (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0xa00004,param_2[3]);
    }
    else if (param_2[2] == 0xa00007) {
      pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar1,0x11,7);
      copy_image_processor_status((int)(param_1),(uint32_t *)(param_2[1]));
      iVar2 = *(int *)*param_2;
      (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0xa00007,param_2[3]);
    }
    else if (param_2[2] == 0xa00008) {
      pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar1,0x11,4);
      run_two_image_processor_passes((int)(param_1),(int)(param_2[1]));
      iVar2 = *(int *)*param_2;
      (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0xa00008,param_2[3]);
    }
    else if (param_2[2] == 0xa00009) {
      iVar2 = *(int *)*param_2;
      (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0xa00009,param_2[3]);
    }
    pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar1,0x11,0);
  }
  return;
}

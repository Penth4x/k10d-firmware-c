/* @k10d initialize_device_control_sequence @ 0x1039ad6a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a device by issuing a sequence of control commands to a companion chip via
 *   SPI-like interface.
 * summary:
 *   The function calls forward_call_via_offset_0x20 and call_subroutine_with_offset_0x20 to
 *   prepare the context, then issues a series of commands (0x50c0000 through 0x50c0007)
 *   using allocate_and_init_2d_buffer_1039c664, allocate_and_init_object_entry, and
 *   allocate_and_init_2d_array. It stores return values from allocate_and_init_2d_array
 *   into offsets 0x24 and 0x28 of the object. The sequence concludes with
 *   store_two_words_and_call_helper_1039ae84 and set_object_field_at_offset_0x10. The
 *   specific device is likely the companion body-control chip or PRIME DSP given the
 *   command pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_device_control_sequence(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_2c [16];
  
  piVar3 = (int *)auStack_2c;
  forward_call_via_offset_0x20(param_1,(uint *)0x10561c68/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x50c0000);
  *piVar3 = 1;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x50c0001,1,*piVar3);
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50c0002,1,*piVar3,*(uint8_t *)((int)piVar3 + 7)
               ,piVar3[2],*(short *)((int)piVar3 + 0xe));
  *piVar3 = 0xc;
  iVar2 = allocate_and_init_2d_array((int)param_1,(int)pvVar1,(void *)0x50c0003,10,*piVar3);
  *(int *)((int)param_1 + 0x24) = iVar2;
  *piVar3 = 0xc;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50c0004,0xd,*piVar3,
               *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *piVar3 = 0xc;
  iVar2 = allocate_and_init_2d_array((int)param_1,(int)pvVar1,(void *)0x50c0005,0xe,*piVar3);
  *(int *)((int)param_1 + 0x28) = iVar2;
  store_two_words_and_call_helper_1039ae84(param_1,0,0);
  *piVar3 = 0x11;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x50c0006,1,*piVar3);
  *piVar3 = 0x11;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50c0007,5,*piVar3,*(uint8_t *)((int)piVar3 + 7)
               ,piVar3[2],*(short *)((int)piVar3 + 0xe));
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

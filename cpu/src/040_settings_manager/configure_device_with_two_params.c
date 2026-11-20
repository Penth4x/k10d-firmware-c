/* @k10d configure_device_with_two_params @ 0x1039c0be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a device by calling a setup routine and then sending two configuration
 *   commands with specific parameters.
 * summary:
 *   The function first calls forward_call_via_offset_0x20 with param_1, a fixed address
 *   (0x10562280), and params 3/4. It then obtains a pointer via
 *   call_subroutine_with_offset_0x20. It constructs a local parameter buffer and calls
 *   allocate_and_init_2d_buffer_1039c664 with a value of 1 and address 0x50f0001. It then
 *   modifies the buffer and calls allocate_and_init_object_entry with a value of 7 and
 *   address 0x50f0002. Finally, it calls set_object_field_at_offset_0x10 with the original
 *   object and the pointer from call_subroutine_with_offset_0x20.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_device_with_two_params(cls_10563c60 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  uintptr_t sp;
  int *piVar2;
  uint8_t auStack_20 [16];
  
  piVar2 = (int *)auStack_20;
  forward_call_via_offset_0x20(param_1,(uint *)0x10562280/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x50f0000);
  *piVar2 = 1;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x50f0001,1,*piVar2);
  *piVar2 = 7;
  *(uint8_t *)((int)piVar2 + 7) = 1;
  piVar2[2] = 1;
  piVar2[3] = 0x18;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x50f0002,1,*piVar2,*(uint8_t *)((int)piVar2 + 7)
               ,piVar2[2],*(short *)((int)piVar2 + 0xe));
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

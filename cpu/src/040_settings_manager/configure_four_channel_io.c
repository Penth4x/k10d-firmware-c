/* @k10d configure_four_channel_io @ 0x10397ec4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a device object by setting up four sequential I/O channels with specific
 *   parameters.
 * summary:
 *   The function takes an object pointer (param_1) and calls a series of helper functions
 *   to configure it. It first calls forward_call_via_offset_0x20 with a fixed address, then
 *   obtains a handle via call_subroutine_with_offset_0x20. It subsequently configures four
 *   distinct channels (identified by constants 0x5040001 through 0x5040004) using
 *   allocate_and_init_2d_buffer_1039c664 and allocate_and_init_object_entry, storing the
 *   return values of the last two calls into the object at offsets 0x24 and 0x28. It
 *   finishes by calling set_object_field_at_offset_0x10 with the object and the handle.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_four_channel_io(cls_1056328c *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_24 [16];
  
  piVar3 = (int *)auStack_24;
  forward_call_via_offset_0x20(param_1,(uint *)0x10560e68/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x5040000);
  *piVar3 = 1;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5040001,1,*piVar3);
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5040002,1,*piVar3,*(uint8_t *)((int)piVar3 + 7)
               ,piVar3[2],*(short *)((int)piVar3 + 0xe));
  *piVar3 = 0x11;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5040003,0x12,*piVar3);
  param_1->field_0x24 = iVar2;
  *piVar3 = 0x11;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5040004,0x15,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  param_1->field_0x28 = iVar2;
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

/* @k10d init_seven_config_blocks @ 0x10399958
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a context object by writing seven sequential configuration blocks to a
 *   target device.
 * summary:
 *   The function calls forward_call_via_offset_0x20 and call_subroutine_with_offset_0x20 to
 *   prepare the context (param_1) and obtain a handle (pvVar1). It then constructs a local
 *   16-byte structure on the stack and uses it to issue a series of calls to
 *   allocate_and_init_2d_buffer_1039c664 and allocate_and_init_object_entry, passing
 *   sequential addresses from 0x5070000 to 0x5070007. The return values of the last two
 *   calls are stored at offsets 0x24 and 0x28 of the context object. Finally, it calls
 *   set_object_field_at_offset_0x10 with the context and the handle.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_seven_config_blocks(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_2c [16];
  
  piVar3 = (int *)auStack_2c;
  forward_call_via_offset_0x20(param_1,(uint *)0x1056161c/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x5070000);
  *piVar3 = 1;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5070001,1,*piVar3);
  *piVar3 = 7;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5070002,1,*piVar3,*(uint8_t *)((int)piVar3 + 7)
               ,piVar3[2],*(short *)((int)piVar3 + 0xe));
  *piVar3 = 9;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 1;
  piVar3[3] = 0x18;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5070003,1,*piVar3,*(uint8_t *)((int)piVar3 + 7)
               ,piVar3[2],*(short *)((int)piVar3 + 0xe));
  *piVar3 = 0x11;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5070004,1,*piVar3);
  *piVar3 = 0x11;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5070005,5,*piVar3,*(uint8_t *)((int)piVar3 + 7)
               ,piVar3[2],*(short *)((int)piVar3 + 0xe));
  *piVar3 = 0x11;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5070006,0x12,*piVar3);
  *(int *)((int)param_1 + 0x24) = iVar2;
  *piVar3 = 0x11;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5070007,0x15,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0x28) = iVar2;
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

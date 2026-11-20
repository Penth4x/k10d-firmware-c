/* @k10d configure_context_with_two_commands @ 0x1039a0d4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Prepares a context, builds a small parameter block, and issues two configuration
 *   commands to it.
 * summary:
 *   The function calls forward_call_via_offset_0x20 and call_subroutine_with_offset_0x20 to
 *   prepare param_1 and obtain a handle (pvVar1). It then constructs a local parameter
 *   structure on the stack with specific values (1, 7, 1, 0x18) and passes it to
 *   allocate_and_init_2d_buffer_1039c664 and allocate_and_init_object_entry along with
 *   constants 0x5090001 and 0x5090002. Finally, it calls set_object_field_at_offset_0x10 to
 *   finalize the setup. The specific subsystem is not identifiable from the provided code
 *   or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_context_with_two_commands(cls_10563694 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  uintptr_t sp;
  int *piVar2;
  uint8_t auStack_20 [16];
  
  piVar2 = (int *)auStack_20;
  forward_call_via_offset_0x20(param_1,(uint *)0x105618d0/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x5090000);
  *piVar2 = 1;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5090001,1,*piVar2);
  *piVar2 = 7;
  *(uint8_t *)((int)piVar2 + 7) = 1;
  piVar2[2] = 1;
  piVar2[3] = 0x18;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5090002,1,*piVar2,*(uint8_t *)((int)piVar2 + 7)
               ,piVar2[2],*(short *)((int)piVar2 + 0xe));
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

/* @k10d configure_two_control_blocks @ 0x103976d2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a local parameter struct and passes it to two configuration helper
 *   functions.
 * summary:
 *   The function calls forward_call_via_offset_0x20 and call_subroutine_with_offset_0x20
 *   with the first argument and specific constants. It then sets up a local 16-byte
 *   structure on the stack with specific values (1, 7, 1, 0x18) and passes this structure
 *   to allocate_and_init_2d_buffer_1039c664 and allocate_and_init_object_entry. Finally, it
 *   calls set_object_field_at_offset_0x10 with the first argument and the result of
 *   call_subroutine_with_offset_0x20. The specific subsystem is not identifiable from the
 *   provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_two_control_blocks(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  uintptr_t sp;
  int *piVar2;
  uint8_t auStack_20 [16];
  
  piVar2 = (int *)auStack_20;
  forward_call_via_offset_0x20(param_1,(uint *)0x10560be8/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x5020000);
  *piVar2 = 1;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5020001,1,*piVar2);
  *piVar2 = 7;
  *(uint8_t *)((int)piVar2 + 7) = 1;
  piVar2[2] = 1;
  piVar2[3] = 0x18;
  allocate_and_init_object_entry((int)param_1,(int)pvVar1,(void *)0x5020002,1,*piVar2,*(uint8_t *)((int)piVar2 + 7)
               ,piVar2[2],*(short *)((int)piVar2 + 0xe));
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

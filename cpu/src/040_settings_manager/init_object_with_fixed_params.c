/* @k10d init_object_with_fixed_params @ 0x1039bfc0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a sequence of setup functions with specific constant
 *   parameters.
 * summary:
 *   The function takes an object pointer and three additional parameters. It calls
 *   forward_call_via_offset_0x20 with the object and a fixed address 0x10562230. It then
 *   calls call_subroutine_with_offset_0x20 to retrieve a value, which is passed to
 *   create_and_activate_object and allocate_and_init_2d_buffer_1039c664 along with other
 *   constants (0x5000002, 0x5000001, 8, 6). Finally, it calls
 *   set_object_field_at_offset_0x10 with the object and the retrieved value. The specific
 *   roles of the callees are unknown, but the pattern suggests a multi-step initialization
 *   or configuration routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_fixed_params(cls_10563ba4 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  uintptr_t sp;
  int *piVar2;
  uint8_t auStack_10 [4];
  
  piVar2 = (int *)auStack_10;
  forward_call_via_offset_0x20(param_1,(uint *)0x10562230/*ROM*/,param_3,param_4);
  pvVar1 = (void *)call_subroutine_with_offset_0x20((int)param_1,(void *)0x5000000);
  create_and_activate_object((int)param_1,(int)pvVar1,(void *)0x5000002);
  *piVar2 = 6;
  allocate_and_init_2d_buffer_1039c664((int)param_1,(int)pvVar1,(void *)0x5000001,8,*piVar2);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}

/* @k10d init_and_validate_object_fields @ 0x1049cd84
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes several fields of an object and conditionally invokes a virtual method if
 *   validation checks pass.
 * summary:
 *   The function calls an initializer (write_two_offsets_to_buffer_1049e02e) and then sets
 *   three specific offsets (0x51, 0x6a, 0x77) in the object pointed to by param_1 using
 *   set_object_field_and_invoke_virtual_104a29b0. It then performs a series of validation
 *   checks using write_two_byte_status_to_object and dispatch_event_to_subscribers on
 *   various fields. If all checks succeed, it calls the virtual method slot 2
 *   (check_flag_then_delegate) on the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_and_validate_object_fields(cls_105b5b0c *param_1,int *param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  
  write_two_offsets_to_buffer_1049e02e(param_1,param_3);
  puVar4 = &param_1->field_0x144;
  set_object_field_and_invoke_virtual_104a29b0(puVar4,param_3);
  puVar3 = &param_1->field_0x1a8;
  set_object_field_and_invoke_virtual_104a29b0(puVar3,param_3);
  set_object_field_and_invoke_virtual_104a29b0(&param_1->field_0x1dc,param_3);
  iVar1 = write_two_byte_status_to_object((int)param_1,param_2);
  if ((((iVar1 != 0) && (bVar2 = dispatch_event_to_subscribers((int)&param_1->field_0xc,param_2,(int)puVar4), bVar2))
      && (bVar2 = dispatch_event_to_subscribers((int)&param_1->field_0x44,param_2,(int)puVar3), bVar2)) &&
     ((bVar2 = dispatch_event_to_subscribers((int)&param_1->field_0x7c,param_2,(int)puVar3), bVar2 &&
      (bVar2 = dispatch_event_to_subscribers((int)&param_1->field_0xb4,param_2,(int)puVar4), bVar2)))) {
    check_flag_then_delegate((cls_105b6aa0 *)&param_1->field_0xec,param_2,&param_1->field_0x1dc);
  }
  return;
}

/* @k10d init_object_and_dispatch_slot2_1049e2d4 @ 0x1049e2d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_dispatch_slot2_1049e2d4(cls_105b5b6c *param_1,int *param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  
  write_two_offsets_to_buffer_1049f4fe(param_1,param_3);
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

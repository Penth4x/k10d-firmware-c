/* @k10d init_object_and_dispatch_slot2_1049e2d4 @ 0x1049e2d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_dispatch_slot2_1049e2d4(uint32_t *param_1,int *param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  
  write_two_offsets_to_buffer_1049f4fe(param_1,param_3);
  puVar4 = param_1 + 0x51;
  set_object_field_and_invoke_virtual_104a29b0(puVar4,param_3);
  puVar3 = param_1 + 0x6a;
  set_object_field_and_invoke_virtual_104a29b0(puVar3,param_3);
  set_object_field_and_invoke_virtual_104a29b0(param_1 + 0x77,param_3);
  iVar1 = write_two_byte_status_to_object((int)param_1,param_2);
  if ((((iVar1 != 0) && (bVar2 = dispatch_event_to_subscribers((int)(param_1 + 3),param_2,(int)puVar4), bVar2)) &&
      (bVar2 = dispatch_event_to_subscribers((int)(param_1 + 0x11),param_2,(int)puVar3), bVar2)) &&
     ((bVar2 = dispatch_event_to_subscribers((int)(param_1 + 0x1f),param_2,(int)puVar3), bVar2 &&
      (bVar2 = dispatch_event_to_subscribers((int)(param_1 + 0x2d),param_2,(int)puVar4), bVar2)))) {
    check_flag_then_delegate(param_1 + 0x3b,param_2,param_1 + 0x77);
  }
  return;
}

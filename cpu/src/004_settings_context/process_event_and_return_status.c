/* @k10d process_event_and_return_status @ 0x103659f2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 004_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_and_return_status(void *param_1)

{
  bool bVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint32_t uStack_c;
  
  bVar1 = false;
  uVar4 = 0xffffffff;
  iVar2 = *(int *)((int)param_1 + 0x68);
  if (*(char *)((int)param_1 + 0x80) == '\0') {
    if (iVar2 != 0x305001c) goto LAB_10365a46;
  }
  else {
    if (iVar2 == 0x305000e) {
      uVar4 = *(uint32_t *)((int)param_1 + 0x78);
LAB_10365a38:
      bVar1 = true;
LAB_10365a46:
      bVar1 = !bVar1;
    }
    else {
      if (iVar2 == 0x305000f) {
        uVar4 = *(uint32_t *)((int)param_1 + 0x7c);
        goto LAB_10365a38;
      }
      if (iVar2 == 0x3050010) goto LAB_10365a38;
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = get_or_create_singleton_object_1036c796();
      uVar3 = 2;
      goto LAB_10365ad8;
    }
  }
  write_second_field_of_struct(param_1,0);
  init_object_with_two_ids_10365d30(param_1);
  iVar2 = process_buffer_and_return_field(param_1,uVar4);
  check_kernel_call_success_10459fea(0x3e8);
  set_field_and_call_helper_10365e18((int)param_1);
  write_second_field_of_struct(param_1,1);
  if (iVar2 == 1) {
    invoke_virtual_slot_two_on_four_objects_1036b766();
    uStack_c = 0;
    iVar2 = dispatch_event_and_return_offset(param_1,&uStack_c,0xffffffff);
    if (iVar2 == 1) {
      uVar4 = get_or_create_singleton_object_1036c796();
      uVar3 = 2;
    }
    else {
      uVar4 = get_or_create_singleton_object_1036c796();
      uVar3 = 1;
    }
  }
  else {
    uVar4 = get_or_create_singleton_object_1036c796();
    uVar3 = 1;
  }
LAB_10365ad8:
  uVar4 = read_array_element_bounded(uVar4,uVar3);
  return uVar4;
}

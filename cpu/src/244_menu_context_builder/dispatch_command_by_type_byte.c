/* @k10d dispatch_command_by_type_byte @ 0x104d2476
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 244_menu_context_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_command_by_type_byte(int param_1,uint32_t param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  
  cVar1 = *(char *)(param_3 + 0x859);
  set_struct_field_at_offset_4(param_3,0);
  iVar3 = read_virtual_property_field(*(uint32_t *)(param_1 + 0x10),1);
  bVar2 = false;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (cVar1 == '\x06') {
      set_struct_field_at_offset_4(param_3,0);
      uVar5 = *(uint32_t *)(param_1 + 0xc);
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,0);
      request_and_wait_for_data(uVar5,uVar4 & 0xff);
    }
    else if (cVar1 == '\a') {
      set_struct_field_at_offset_4(param_3,0);
      uVar5 = *(uint32_t *)(param_1 + 0xc);
      iVar3 = read_struct_field_at_index_1046c7ca(param_3,1);
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,0);
      request_and_wait_for_event(uVar5,iVar3 != 0,uVar4 & 0xff);
    }
    else if (cVar1 == '\b') {
      set_struct_field_at_offset_4(param_3,0);
      uVar5 = *(uint32_t *)(param_1 + 0xc);
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,0);
      process_event_with_lock_104b972c(uVar5,uVar4 & 0xff);
    }
    else if (cVar1 == '\t') {
      set_struct_field_at_offset_4(param_3,0);
      uVar5 = *(uint32_t *)(param_1 + 0xc);
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,0);
      send_message_with_timeout_104b981c(uVar5,uVar4 & 0xff);
    }
    else {
      if (cVar1 != '\n') {
        return 0x81;
      }
      set_struct_field_at_offset_4(param_3,0);
      uVar5 = *(uint32_t *)(param_1 + 0xc);
      uVar4 = read_struct_field_at_index_1046c7ca(param_3,0);
      acquire_lock_and_call_handler(uVar5,uVar4 & 0xff);
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0x84;
  }
  return uVar5;
}

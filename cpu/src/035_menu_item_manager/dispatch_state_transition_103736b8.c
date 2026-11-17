/* @k10d dispatch_state_transition_103736b8 @ 0x103736b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_103736b8(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x464;
  cVar1 = read_byte_at_offset_0x1d(iVar2);
  if (cVar1 != '\0') {
    dispatch_object_state_update_10491fb2(iVar2,1);
  }
  switch(*(uint32_t *)(param_1 + 0x24)) {
  case 0:
    invoke_virtual_slot_twenty_twice(iVar2);
    process_param_subobject(param_1);
    break;
  case 1:
    break;
  case 2:
    process_param_subobject(param_1);
    break;
  case 3:
    goto code_r0x10373716;
  case 4:
    goto code_r0x10373726;
  case 5:
    process_param_subobject(param_1);
    goto code_r0x10373716;
  case 6:
    process_param_subobject(param_1);
    goto code_r0x10373726;
  case 7:
    goto code_r0x10373736;
  case 8:
    process_param_subobject(param_1);
    goto code_r0x10373736;
  case 9:
    goto code_r0x10373746;
  case 10:
    goto code_r0x10373756;
  case 0xb:
    process_param_subobject(param_1);
    goto code_r0x10373746;
  case 0xc:
    process_param_subobject(param_1);
    goto code_r0x10373756;
  case 0xd:
    register_menu_item_and_set_flag_1038fab6(iVar2);
  default:
    goto LAB_1037376c;
  }
  register_eight_menu_items_1038f7e6(iVar2);
LAB_1037376c:
  cVar1 = read_byte_at_offset_0x1d(iVar2);
  if (cVar1 != '\0') {
    dispatch_object_state_update_10491fb2(iVar2,0);
  }
  return;
code_r0x10373756:
  invoke_virtual_slot_two_sequence_1038ffae(iVar2);
  goto LAB_1037376c;
code_r0x10373746:
  invoke_virtual_slot_two_sequence_1038fe7e(iVar2);
  goto LAB_1037376c;
code_r0x10373736:
  register_eight_menu_items_1038fd4e(iVar2);
  goto LAB_1037376c;
code_r0x10373726:
  register_menu_items_with_flags(iVar2);
  goto LAB_1037376c;
code_r0x10373716:
  register_eight_menu_items_1038faee(iVar2);
  goto LAB_1037376c;
}

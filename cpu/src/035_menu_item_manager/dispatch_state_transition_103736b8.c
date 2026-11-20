/* @k10d dispatch_state_transition_103736b8 @ 0x103736b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_103736b8(cls_105584bc *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = &param_1->field_0x464;
  cVar1 = read_byte_at_offset_0x1d((int)piVar2);
  if (cVar1 != '\0') {
    dispatch_object_state_update_10491fb2((int)piVar2,1);
  }
  switch ((uintptr_t)param_1->field_0x24) {
  case 0x0:
    invoke_virtual_slot_twenty_twice((int)(piVar2));
    process_param_subobject((int)(param_1));
    break;
  case 0x1:
    break;
  case 0x2:
    process_param_subobject((int)(param_1));
    break;
  case 0x3:
    goto code_r0x10373716;
  case 0x4:
    goto code_r0x10373726;
  case 0x5:
    process_param_subobject((int)(param_1));
    goto code_r0x10373716;
  case 0x6:
    process_param_subobject((int)(param_1));
    goto code_r0x10373726;
  case 0x7:
    goto code_r0x10373736;
  case 0x8:
    process_param_subobject((int)(param_1));
    goto code_r0x10373736;
  case 0x9:
    goto code_r0x10373746;
  case 0xa:
    goto code_r0x10373756;
  case 0xb:
    process_param_subobject((int)(param_1));
    goto code_r0x10373746;
  case 0xc:
    process_param_subobject((int)(param_1));
    goto code_r0x10373756;
  case 0xd:
    register_menu_item_and_set_flag_1038fab6((int)(piVar2));
  default:
    goto LAB_1037376c;
  }
  register_eight_menu_items_1038f7e6((int)(piVar2));
LAB_1037376c:
  cVar1 = read_byte_at_offset_0x1d((int)piVar2);
  if (cVar1 != '\0') {
    dispatch_object_state_update_10491fb2((int)piVar2,0);
  }
  return;
code_r0x10373756:
  invoke_virtual_slot_two_sequence_1038ffae((int)(piVar2));
  goto LAB_1037376c;
code_r0x10373746:
  invoke_virtual_slot_two_sequence_1038fe7e((int)(piVar2));
  goto LAB_1037376c;
code_r0x10373736:
  register_eight_menu_items_1038fd4e((int)(piVar2));
  goto LAB_1037376c;
code_r0x10373726:
  register_menu_items_with_flags((int)(piVar2));
  goto LAB_1037376c;
code_r0x10373716:
  register_eight_menu_items_1038faee((int)(piVar2));
  goto LAB_1037376c;
}

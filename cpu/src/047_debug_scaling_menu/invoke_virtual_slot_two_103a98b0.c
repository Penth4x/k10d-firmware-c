/* @k10d invoke_virtual_slot_two_103a98b0 @ 0x103a98b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_103a98b0(cls_10565468 *param_1)

{
  int iVar1;
  
  iVar1 = *(uint32_t *)(param_1->field_0x2c);
  (((vtbl_entry*)(iVar1))[2].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120069,0);
  call_helper_on_fetched_pointer();
  clear_struct_field_at_offset_8((cls_10564e90 *)param_1);
  return 0;
}

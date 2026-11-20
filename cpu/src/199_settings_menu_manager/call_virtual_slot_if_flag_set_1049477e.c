/* @k10d call_virtual_slot_if_flag_set_1049477e @ 0x1049477e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object if a status check passes, then clears a byte at
 *   offset 9.
 * summary:
 *   The function first calls read_byte_at_offset_8 to check a condition. If the result is
 *   non-zero, it performs a virtual call on the object pointed to by param_1. The virtual
 *   call uses the vtable pointer at param_1 + 0xc, specifically slot 0xe4/8 (slot 29),
 *   passing the object (adjusted by the this-adjustment at param_1+0xc+0xe0) and the
 *   integer 1. Finally, it writes 0 to the byte at param_1 + 9. The specific subsystem is
 *   not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_if_flag_set_1049477e(cls_105c136c *param_1)

{
  int iVar1;
  
  iVar1 = read_byte_at_offset_8(__frv_reg_unset(4));
  if (iVar1 != 0) {
    (((vtbl_entry*)(param_1->field_0xc))[28].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[28].adj,1);
  }
  param_1->field_0x9 = 0;
  return;
}

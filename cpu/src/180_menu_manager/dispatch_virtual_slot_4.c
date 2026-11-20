/* @k10d dispatch_virtual_slot_4 @ 0x10486bae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 4 on an object pointer and updates state fields based on the
 *   result.
 * summary:
 *   The function branches on param_2. If 2, it calls virtual slot 4 of the object at
 *   param_3 with argument 0x17. If the call returns non-zero, it sets a flag at offset
 *   0x31, calls set_flag_at_offset_0x12, and conditionally stores the result of
 *   get_or_create_singleton_10488998 or 0 into offset 0x1c. If param_2 is 1, it clears
 *   offset 0x1c, sets the flag, and calls set_flag_at_offset_0x12. Finally, it may redirect
 *   param_1 to the value at offset 0x1c if a byte at 0x1a is non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b2ed8 * dispatch_virtual_slot_4(cls_105b2ed8 *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  if (param_2 == 2) {
    iVar1 = (((vtbl_entry*)(*param_3))[4].fn)((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0x17);
    if (iVar1 != 0) {
      param_1->field_0x31 = 1;
      set_flag_at_offset_0x12(param_1->field_0x0);
      if (param_1->field_0x6c == 0) {
        uVar2 = get_or_create_singleton_10488998();
        param_1->field_0x70 = uVar2;
      }
      else {
        param_1->field_0x70 = 0;
      }
    }
    if (param_1->field_0x68 != '\0') {
      param_1 = (cls_105b2ed8 *)param_1->field_0x70;
    }
  }
  else if (param_2 == 1) {
    param_1->field_0x70 = 0;
    param_1->field_0x31 = 1;
    set_flag_at_offset_0x12(param_1->field_0x0);
  }
  return param_1;
}

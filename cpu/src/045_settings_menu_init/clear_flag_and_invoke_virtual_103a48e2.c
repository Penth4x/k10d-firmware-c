/* @k10d clear_flag_and_invoke_virtual_103a48e2 @ 0x103a48e2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Clears a byte flag at offset 0x65 and, if it was set, calls a virtual method on an
 *   object pointer.
 * summary:
 *   Checks if the byte at param_1+0x65 is non-zero. If so, it sets it to zero and performs
 *   a virtual function call (slot 2) on the object pointed to by *(param_1+0x2c), passing
 *   constants 0x1120069 and 0. Finally, it calls clear_struct_field_at_offset_8 with
 *   param_1. The specific subsystem is not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_flag_and_invoke_virtual_103a48e2(cls_10564c80 *param_1)

{
  int iVar1;
  
  if (param_1->field_0x65 != '\0') {
    param_1->field_0x65 = '\0';
    iVar1 = *(uint32_t *)(param_1->field_0x2c);
    (((vtbl_entry*)(iVar1))[2].fn)
              ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120069,0);
  }
  clear_struct_field_at_offset_8((cls_10564e90 *)param_1);
  return 0;
}

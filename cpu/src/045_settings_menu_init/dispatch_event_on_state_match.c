/* @k10d dispatch_event_on_state_match @ 0x103a4a44
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Compares a computed value against a struct field and dispatches a virtual event with a
 *   specific ID.
 * summary:
 *   The function calls check_object_property_43 with an argument from param_1[10] and
 *   compares the result to the byte at offset 0x67 in param_1. If they match, it invokes a
 *   virtual method (slot 2) on the object at param_1[0xb] twice with IDs 0x1120065 and
 *   0x1120064. If they do not match, it invokes a virtual method (slot 14) on the object
 *   pointed to by param_1 with ID 0x1120004. The specific subsystem is not identifiable
 *   from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_on_state_match(cls_10564c80 *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = check_object_property_43(param_1->field_0x28);
  if (uVar1 == param_1->field_0x67) {
    iVar2 = *(uint32_t *)param_1->field_0x2c;
    (((vtbl_entry*)(iVar2))[2].fn)
              ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[2].adj,0x1120065,0);
    iVar2 = *(uint32_t *)param_1->field_0x2c;
    (((vtbl_entry*)(iVar2))[2].fn)
              ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[2].adj,0x1120064,0);
  }
  else {
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004);
  }
  return;
}

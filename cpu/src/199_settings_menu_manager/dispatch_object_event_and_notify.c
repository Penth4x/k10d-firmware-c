/* @k10d dispatch_object_event_and_notify @ 0x10494486
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Checks a global flag, invokes a virtual method on an object, and notifies a list of
 *   registered listeners.
 * summary:
 *   The function first calls read_byte_at_offset_8 to check a condition. If true, it
 *   performs a virtual call (slot 10) on the object pointed to by param_1+0xc. Based on the
 *   result, it may call another virtual method (slot 9) and then a third virtual method
 *   (slot 14) with an argument of 0 or 1. Finally, it iterates through a list of pointers
 *   (from param_1+0x18 to param_1+0x1c) and calls a virtual method (slot 10) on each object
 *   in the list. It clears a byte at param_1+9 before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_event_and_notify(cls_105b48dc *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = read_byte_at_offset_8((int)(param_1)/* B-3: stock r4 = param_1 */);
  if (iVar1 != 0) {
    iVar1 = (((vtbl_entry*)(param_1->field_0xc))[13].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[13].adj);
    if (iVar1 == 0) {
      (((vtbl_entry*)(param_1->field_0xc))[28].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[28].adj,1);
    }
    else {
      iVar1 = (((vtbl_entry*)(param_1->field_0xc))[15].fn)
                        ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[15].adj);
      if (iVar1 == 0) {
        (((vtbl_entry*)(param_1->field_0xc))[28].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[28].adj,0);
      }
      else {
        (((vtbl_entry*)(param_1->field_0xc))[28].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[28].adj,1);
      }
    }
  }
  piVar2 = (void*)(param_1->field11_0x18);
  if ((uint32_t)(piVar2) != param_1->field_0x1c) {
    do {
      iVar1 = *(int *)(*piVar2 + 0xc);
      (((vtbl_entry*)(iVar1))[10].fn)(*piVar2 + (int)((vtbl_entry*)(iVar1))[10].adj);
      piVar2 = piVar2 + 1;
    } while ((uint32_t)(piVar2) != param_1->field_0x1c);
  }
  param_1->field_0x9 = '\0';
  return;
}

/* @k10d cls_1059f284_delete @ 0x10433930
 * name: verified (structural evidence: stores vtable 0x1059f284 to *this; heap_free(this) under (param_2 & 1))
 * unit: 119_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059f284 (vtable 0x1059f284): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059f284 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059f284_delete(cls_1059f284 *param_1,uint param_2)

{
  if (param_1 != (cls_1059f284 *)0x0) {
    param_1->field_0x0 = (uint)(uintptr_t)&DAT_1059f284/*ROM*/;
    destroy_member_objects_104335e0(param_1);
    reset_vtable_and_free_if_owned_1042792a(&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}

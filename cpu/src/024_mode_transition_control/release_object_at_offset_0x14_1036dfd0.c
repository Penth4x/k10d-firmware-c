/* @k10d release_object_at_offset_0x14_1036dfd0 @ 0x1036dfd0
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on the object at offset 0x14, then passes it to three helper
 *   functions.
 * summary:
 *   The function first calls call_helper_on_struct_field_1036c46c. It then dereferences the
 *   pointer at offset 0x14 of param_1. If non-null, it invokes virtual slot 10 (offset
 *   0x6c) on that object, then calls call_helper_on_struct_field_1036c41a,
 *   call_helper_on_fetched_object (with arg 0xf), and request_ui_sync_code_4, all passing
 *   the object at offset 0x14. This pattern suggests a cleanup or release operation on a
 *   sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x14_1036dfd0(void *param_1)

{
  int *piVar1;
  
  call_helper_on_struct_field_1036c46c();
  piVar1 = *(int **)((int)param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[13].fn)((int)((vtbl_entry*)(*piVar1))[13].adj + (int)piVar1);
    call_helper_on_struct_field_1036c41a(param_1,*(void **)((int)param_1 + 0x14),1);
    call_helper_on_fetched_object(*(void **)((int)param_1 + 0x14),0xf);
    request_ui_sync_code_4(*(void **)((int)param_1 + 0x14));
  }
  return;
}

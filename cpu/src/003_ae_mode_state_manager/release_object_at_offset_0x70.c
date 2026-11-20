/* @k10d release_object_at_offset_0x70 @ 0x10363ef8
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on the object stored at offset 0x70, then passes that object to
 *   a helper with flag 1.
 * summary:
 *   First calls call_helper_on_struct_field_1036c46c with no arguments. Reads a pointer
 *   from param_1+0x70; if non-null, invokes virtual slot 13 (offset 0x6c) on that object
 *   using the Cfront this-adjustment idiom, then calls call_helper_on_struct_field_1036c41a
 *   with param_1, the same object pointer, and the integer 1. Likely a cleanup or release
 *   routine for a sub-object held by the parent structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x70(void *param_1)

{
  int *piVar1;
  
  call_helper_on_struct_field_1036c46c();
  piVar1 = *(int **)((int)param_1 + 0x70);
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[13].fn)((int)((vtbl_entry*)(*piVar1))[13].adj + (int)piVar1);
    call_helper_on_struct_field_1036c41a(param_1,*(void **)((int)param_1 + 0x70),1);
  }
  return;
}

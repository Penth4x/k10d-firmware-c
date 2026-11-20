/* @k10d deactivate_ui_request_object @ 0x1049270e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on a sub-object and calls a cleanup helper if the object is
 *   active.
 * summary:
 *   Checks if the field at offset 0x10 of the input object is non-zero. If so, it performs
 *   a virtual call on the sub-object at offset 0xc (slot 7) and then calls
 *   invoke_virtual_method_on_nested_object_1049273c with the original object. Returns 1
 *   unconditionally. Likely part of a UI request lifecycle management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t deactivate_ui_request_object(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[7].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[7].adj + iVar1);
    invoke_virtual_method_on_nested_object_1049273c(param_1);
  }
  return 1;
}

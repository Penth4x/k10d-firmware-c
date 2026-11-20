/* @k10d deactivate_ui_screen @ 0x10492790
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Deactivates a UI screen object by calling two helpers and invoking a virtual method on
 *   a sub-object.
 * summary:
 *   The function takes a pointer to a UI screen object. It calls clear_byte_at_offset_0x21
 *   with the value at offset 0x18, then calls wait_and_copy_status_word with the object
 *   pointer. It then checks the pointer at offset 0x10; if non-null, it performs a virtual
 *   call on the object at that pointer using the vtable entry at offset 0x5c. The caller is
 *   ui_request_dispatch, suggesting this handles a screen deactivation or close request.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t deactivate_ui_screen(void *param_1)

{
  int iVar1;
  
  clear_byte_at_offset_0x21(*(uint32_t *)((int)param_1 + 0x18));
  wait_and_copy_status_word((int)param_1);
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[11].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[11].adj + iVar1);
  }
  return 1;
}

/* @k10d release_object_with_pointer_field @ 0x10394272
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Releases an object by clearing a field, detaching a pointer at offset 0x48, and freeing
 *   that pointer.
 * summary:
 *   Takes an object pointer in param_1. Calls reset_and_select_channel_1039a462 on the
 *   field at offset 4 with value 0xffffffff (likely a reset or invalidate). Calls
 *   forward_params_via_helper_10394686 passing the object and the pointer stored at offset
 *   0x48 with a zero argument, likely detaching or unregistering it. Finally calls
 *   request_ui_sync_with_flag_10491f5c on that same pointer with zero, likely freeing or
 *   destroying it. The pattern suggests a cleanup or destructor routine for an object
 *   containing a sub-object at offset 0x48.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_with_pointer_field(void *param_1)

{
  reset_and_select_channel_1039a462((void *)((int)param_1 + 4),(uint32_t)(0xffffffff));
  forward_params_via_helper_10394686(param_1,*(int **)((int)param_1 + 0x48),0);
  request_ui_sync_with_flag_10491f5c(*(void **)((int)param_1 + 0x48),0);
  return;
}

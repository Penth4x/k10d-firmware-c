/* @k10d release_object_field_0x70 @ 0x1036d144
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 022_capture_settings_init (unit names are model-proposed)
 * purpose:
 *   Calls an init/reset helper then frees or releases the pointer stored at offset 0x70 of
 *   the object.
 * summary:
 *   First calls call_helper_on_struct_field_1036c46c with no arguments. Then checks if the
 *   pointer at param_1+0x70 is non-NULL; if so, calls call_helper_on_struct_field_1036c41a
 *   with the object, that pointer, and the integer 1. The pattern suggests a cleanup or
 *   deactivation routine for a specific sub-component or resource held by the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_field_0x70(void *param_1)

{
  call_helper_on_struct_field_1036c46c();
  if (*(void **)((int)param_1 + 0x70) != 0) {
    call_helper_on_struct_field_1036c41a(param_1,*(void **)((int)param_1 + 0x70),1);
  }
  return;
}

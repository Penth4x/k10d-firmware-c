/* @k10d release_object_at_offset_0x2c_1036f2b4 @ 0x1036f2b4
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Calls an init helper, then conditionally releases and frees the pointer stored at
 *   offset 0x2c of the input object.
 * summary:
 *   First calls call_helper_on_struct_field_1036c46c unconditionally. If the pointer at
 *   param_1+0x2c is non-null, it calls call_helper_on_struct_field_1036c41a with that
 *   pointer and a flag of 1, then calls call_helper_on_fetched_object twice with values
 *   0x10 and 0xf, and finally calls request_ui_sync_code_4 on the pointer. The sequence
 *   suggests a teardown or cleanup operation on a sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x2c_1036f2b4(void *param_1)

{
  call_helper_on_struct_field_1036c46c();
  if (*(void **)((int)param_1 + 0x2c) != 0) {
    call_helper_on_struct_field_1036c41a(param_1,*(void **)((int)param_1 + 0x2c),1);
    call_helper_on_fetched_object(*(void **)((int)param_1 + 0x2c),0x10);
    call_helper_on_fetched_object(*(void **)((int)param_1 + 0x2c),0xf);
    request_ui_sync_code_4(*(void **)((int)param_1 + 0x2c));
  }
  return;
}

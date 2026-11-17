/* @k10d init_object_with_three_subcalls @ 0x103716a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a virtual method on two sub-objects and two other
 *   helpers.
 * summary:
 *   The function takes a pointer to an object and performs initialization steps. It calls
 *   reset_object_fields_and_call_base (virtual slot 2 of cls_105b9458) on two sub-objects
 *   located at offsets 0x80 and 0x294. It then calls release_object_resources_1052cfd2 on a
 *   sub-object at offset 0x4a8, and finally calls empty_noop_stub_103719cc on the main
 *   object itself. The specific subsystem is not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_three_subcalls(int param_1)

{
  reset_object_fields_and_call_base((void *)(param_1 + 0x80));
  reset_object_fields_and_call_base((void *)(param_1 + 0x294));
  release_object_resources_1052cfd2(param_1 + 0x4a8);
  empty_noop_stub_103719cc(param_1);
  return;
}

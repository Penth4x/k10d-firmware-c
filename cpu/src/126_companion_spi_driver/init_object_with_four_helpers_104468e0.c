/* @k10d init_object_with_four_helpers_104468e0 @ 0x104468e0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling four helper functions in sequence, passing the object
 *   pointer and two integer indices.
 * summary:
 *   The function takes a single object pointer and calls four unnamed helper functions:
 *   initialize_subobject_with_config, initialize_object_with_virtual_call_10446cb4,
 *   initialize_camera_mode_context_10446ad4 (twice with indices 0 and 1), and
 *   initialize_subobject_at_offset_0x1c. It is virtual method slot 2 of class cls_105a18b4.
 *   No camera-specific behavior is evident from the pseudocode or callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_four_helpers_104468e0(cls_105a18b4 *param_1)

{
  initialize_subobject_with_config(param_1);
  initialize_object_with_virtual_call_10446cb4(param_1);
  initialize_camera_mode_context_10446ad4(param_1,0);
  initialize_camera_mode_context_10446ad4(param_1,1);
  initialize_subobject_at_offset_0x1c(param_1);
  return;
}

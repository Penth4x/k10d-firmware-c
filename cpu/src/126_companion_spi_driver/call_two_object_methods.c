/* @k10d call_two_object_methods @ 0x1043c326
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions on the same object, passing the object and an offset
 *   pointer.
 * summary:
 *   The function takes a single object pointer (param_1) and calls
 *   clear_bit_2_of_word_at_offset_0x18_1043c6d8 with the object itself, then calls
 *   dispatch_single_subobj with param_1 + 8. dispatch_single_subobj is a verified virtual
 *   method slot 2 of class cls_1059e408. The role of
 *   clear_bit_2_of_word_at_offset_0x18_1043c6d8 is unknown. No camera-specific behavior is
 *   evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a05a0": ignoring multiple overlapping fields */

void call_two_object_methods(cls_105a05a0 *param_1)

{
  clear_bit_2_of_word_at_offset_0x18_1043c6d8((int)param_1);
  dispatch_single_subobj((void *)&param_1->field_0x8);
  return;
}

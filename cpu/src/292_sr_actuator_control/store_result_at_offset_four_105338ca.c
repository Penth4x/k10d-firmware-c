/* @k10d store_result_at_offset_four_105338ca @ 0x105338ca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Calls get_or_create_singleton_object_10516ff2 and stores its return value at offset 4
 *   of the object, returning 1.
 * summary:
 *   This is virtual slot 2 of cls_1061e380. It invokes the single callee
 *   get_or_create_singleton_object_10516ff2, writes the returned 32-bit value into the
 *   second word (offset +4) of the object pointed to by param_1, and returns the constant
 *   1. The role of get_or_create_singleton_object_10516ff2 is unknown, so the stored
 *   value's meaning is undetermined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_result_at_offset_four_105338ca(cls_1061e380 *param_1)

{
  void *puVar1;
  
  puVar1 = (void *)get_or_create_singleton_object_10516ff2();
  param_1->field_0x4 = (uint32_t)puVar1;
  return 1;
}

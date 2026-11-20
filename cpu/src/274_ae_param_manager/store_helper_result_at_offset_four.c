/* @k10d store_helper_result_at_offset_four @ 0x1051754a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls get_or_create_singleton_object_10516ff2 and stores its return value at offset 4
 *   of the object, returning 1.
 * summary:
 *   This is virtual slot 2 of cls_105d6524. It invokes the single callee
 *   get_or_create_singleton_object_10516ff2 with no arguments, writes the 32-bit result
 *   into the second word (offset +4) of the object pointed to by param_1, and returns the
 *   constant 1. The object size is 0x8 bytes, so this fills the upper half of the object.
 *   No camera-specific behavior is evident from the code or the unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_helper_result_at_offset_four(cls_105d6524 *param_1)

{
  void *puVar1;
  
  puVar1 = (void *)get_or_create_singleton_object_10516ff2();
  *(uint32_t *)((uint8_t *)param_1 + 4) = (uint32_t)puVar1;
  return 1;
}

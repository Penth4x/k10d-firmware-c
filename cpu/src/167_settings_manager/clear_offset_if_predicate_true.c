/* @k10d clear_offset_if_predicate_true @ 0x1047bbf8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a predicate on param_1 and, if it returns true, writes zero to the 4-byte field
 *   at offset 0x34 of the object.
 * summary:
 *   The function invokes check_and_cleanup_object_field with param_1 as its sole argument
 *   and interprets the return value as a boolean. When the predicate is true, it stores 0
 *   into the 32-bit field located at param_1 + 0x34. No other side effects or globals are
 *   touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_offset_if_predicate_true(void *param_1)

{
  bool bVar1;
  
  bVar1 = check_and_cleanup_object_field(param_1);
  if (bVar1) {
    *(uint32_t *)((int)param_1 + 0x34) = 0;
  }
  return;
}

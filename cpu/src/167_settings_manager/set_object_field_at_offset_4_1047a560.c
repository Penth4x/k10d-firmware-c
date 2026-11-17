/* @k10d set_object_field_at_offset_4_1047a560 @ 0x1047a560
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes the value from param_2 into the 4-byte field at offset 4 of the object pointed
 *   to by param_1.
 * summary:
 *   This is virtual slot 2 of class cls_105aa6e8. It performs a single 32-bit store from
 *   the second argument into the first argument's memory at offset 4, then returns 1. No
 *   other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_object_field_at_offset_4_1047a560(void *param_1,uint32_t *param_2)

{
  *(uint32_t *)((int)param_1 + 4) = *param_2;
  return 1;
}

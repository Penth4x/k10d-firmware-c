/* @k10d set_object_field_at_offset_4_10483238 @ 0x10483238
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Writes the value from param_2 into the 4-byte field at offset 4 of the object pointed
 *   to by param_1.
 * summary:
 *   This is virtual slot 2 of cls_105ab808. It performs a single 32-bit store from *param_2
 *   to *(param_1 + 4) and returns 1. No other memory accesses or callees are present. The
 *   specific meaning of the field at offset 4 is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_object_field_at_offset_4_10483238(void *param_1,uint32_t *param_2)

{
  *(uint32_t *)((int)param_1 + 4) = *param_2;
  return 1;
}

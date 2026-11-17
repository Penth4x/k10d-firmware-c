/* @k10d zero_struct_fields_20_to_30_104aef4a @ 0x104aef4a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets five consecutive 32-bit fields at offsets 0x20-0x30 of the object pointed to by
 *   param_1 to zero.
 * summary:
 *   The function writes the value 0 to five consecutive 4-byte locations within the
 *   structure passed in param_1. It has no callees and performs no other operations. It is
 *   called as virtual method slot 3 of class cls_105b77e8 and by
 *   dispatch_param5_status_handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_struct_fields_20_to_30_104aef4a(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x20) = 0;
  *(uint32_t *)((int)param_1 + 0x24) = 0;
  *(uint32_t *)((int)param_1 + 0x28) = 0;
  *(uint32_t *)((int)param_1 + 0x2c) = 0;
  *(uint32_t *)((int)param_1 + 0x30) = 0;
  return;
}

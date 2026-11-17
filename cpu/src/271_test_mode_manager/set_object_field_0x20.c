/* @k10d set_object_field_0x20 @ 0x1050e952
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Stores a pointer at offset 0x20 and zeroes the following 32-bit field at offset 0x24 of
 *   a structure.
 * summary:
 *   The function takes a structure pointer in param_1 and a value pointer in param_2. It
 *   writes param_2 to the field at offset 0x20 and sets the field at offset 0x24 to 0. No
 *   other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_0x20(int param_1,void *param_2)

{
  *(void **)(param_1 + 0x20) = param_2;
  *(uint32_t *)(param_1 + 0x24) = 0;
  return;
}

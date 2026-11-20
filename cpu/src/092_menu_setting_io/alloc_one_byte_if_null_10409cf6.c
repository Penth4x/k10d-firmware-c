/* @k10d alloc_one_byte_if_null_10409cf6 @ 0x10409cf6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Allocates one byte from the heap when the input pointer is null.
 * summary:
 *   Checks if param_1 is NULL and, if so, calls heap_alloc(1) to obtain a one-byte
 *   allocation. The returned pointer is not stored or returned to the caller, so the
 *   allocation is effectively discarded. No other side effects or MMIO operations are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_one_byte_if_null_10409cf6(void *param_1)

{
  if (param_1 == 0) {
    heap_alloc((void *)1);
  }
  return;
}

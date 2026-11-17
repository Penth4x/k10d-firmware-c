/* @k10d alloc_one_byte_if_null_104ada3c @ 0x104ada3c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_one_byte_if_null_104ada3c(int param_1)

{
  if (param_1 == 0) {
    heap_alloc((void *)1);
  }
  return;
}

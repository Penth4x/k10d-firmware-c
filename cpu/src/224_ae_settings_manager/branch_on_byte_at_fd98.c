/* @k10d branch_on_byte_at_fd98 @ 0x104be730
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a byte at offset 0xfd98 in the object and calls one of two helpers based on
 *   whether it is zero.
 * summary:
 *   Reads the byte at param_1 + 0xfd98. If it is 0, calls
 *   init_object_with_two_helpers_104c0426; otherwise calls release_and_finalize_object. No
 *   other side effects are visible in this function. The callees are unnamed, so the
 *   specific subsystem role cannot be determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void branch_on_byte_at_fd98(int param_1)
{
  if (*(char *)(param_1 + 0xfd98) == '\0') {
    init_object_with_two_helpers_104c0426((uint32_t)param_1);
  }
  else {
    release_and_finalize_object((uint32_t)param_1);
  }
  return;
}

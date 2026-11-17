/* @k10d call_helper_if_predicate_true @ 0x10471286
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Calls a second helper on param_1 only when a first helper returns non-zero.
 * summary:
 *   Invokes read_byte_at_offset_0x45(param_1) and stores its char result. If the result is
 *   non-zero, it then invokes init_object_at_offset_0x4c(param_1). Both callees are
 *   unnamed, so the specific subsystem or operation cannot be determined from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_predicate_true(void *param_1)

{
  char cVar1;
  
  cVar1 = read_byte_at_offset_0x45(param_1);
  if (cVar1 != '\0') {
    init_object_at_offset_0x4c(param_1);
  }
  return;
}

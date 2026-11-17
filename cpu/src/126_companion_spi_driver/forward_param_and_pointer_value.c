/* @k10d forward_param_and_pointer_value @ 0x10436376
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the first argument and the value pointed to by the second argument to a helper
 *   function.
 * summary:
 *   This function acts as a thin wrapper that dereferences the pointer in param_2 and
 *   passes both param_1 and the dereferenced value to store_value_at_offset_four_1043636a.
 *   It has no other side effects or logic. The specific role of the underlying operation is
 *   unknown because the callee is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_and_pointer_value(uint32_t param_1,uint32_t *param_2)

{
  store_value_at_offset_four_1043636a(param_1,*param_2);
  return;
}

/* @k10d set_field_and_call_helper_1044a60e @ 0x1044a60e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets a 16-bit field at offset 0xe0 to 2, calls a helper with the object and 2, and
 *   clears the field if the helper returns 0.
 * summary:
 *   The function writes the constant 2 to the 16-bit value at param_1 + 0xe0. It then calls
 *   sdhc_send_cmd_790 with param_1 and the argument 2. If the callee returns 0, the field
 *   at 0xe0 is reset to 0. The function returns true if the callee returned non-zero, false
 *   otherwise. The role of the field and the callee is not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_field_and_call_helper_1044a60e(void *param_1)

{
  int iVar1;
  
  *(uint16_t *)((int)param_1 + 0xe0) = 2;
  iVar1 = sdhc_send_cmd_790(param_1,2);
  if (iVar1 == 0) {
    *(uint16_t *)((int)param_1 + 0xe0) = 0;
  }
  return iVar1 != 0;
}

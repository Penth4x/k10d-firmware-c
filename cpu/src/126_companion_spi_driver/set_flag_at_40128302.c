/* @k10d set_flag_at_40128302 @ 0x1044d85e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a boolean (param_2 != 0) to the 16-bit location 0x40128302.
 * summary:
 *   The function stores the result of testing param_2 for non-zero into the global
 *   DAT_40128302, truncated to 16 bits. No other side effects or callees are present. The
 *   role of DAT_40128302 is not determinable from the provided pseudocode or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_flag_at_40128302(uint32_t param_1,int param_2)

{
  _DAT_40128302 = (ushort)(param_2 != 0);
  return;
}

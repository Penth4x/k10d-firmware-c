/* @k10d set_flag_if_conditions_met @ 0x000efeb2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Sets the low nibble of a ushort to 0x10 if several global flag bits are clear and the
 *   value is below 0x10.
 * summary:
 *   Checks four global flag bits (DAT_0003c036 bit 0, DAT_0003c58b bits 1, 6, 7) and the
 *   input value. If all flags are clear and *param_1 < 0x10, it masks the low 2 bits and
 *   adds 0x10. No callees are invoked. The role of the global flags is not determinable
 *   from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_conditions_met(ushort *param_1)

{
  if (((((DAT_0003c036 & 1) == 0) && ((DAT_0003c58b & 2) == 0)) && ((DAT_0003c58b & 0x40) == 0)) &&
     (((DAT_0003c58b & 0x80) == 0 && (*param_1 < 0x10)))) {
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 + 0x10;
  }
  return;
}

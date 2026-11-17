/* @k10d encode_exposure_value_bytes @ 0x1047f232
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Encodes an exposure value into a 3-byte packed format with a special out-of-range
 *   marker.
 * summary:
 *   The function takes a value (param_5) and two divisors (param_3, param_4). If the value
 *   is below 0xfb0400, it performs integer division and modulo operations to extract high
 *   and low components, packing them into three bytes in param_2. The first byte contains
 *   the quotient of param_5/param_4 modulo param_3. The second byte combines the high bits
 *   of the quotient of param_5/(param_4*param_3) with the low 6 bits of param_5 % param_4
 *   plus 1. The third byte holds the low 8 bits of that quotient. If the value is >=
 *   0xfb0400, it writes the marker 0xfe, 0xff, 0xff. This pattern is consistent with
 *   encoding exposure values (EV) or similar signed/offset integer values into a compact
 *   binary format for transmission or storage.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1047f248) overlaps instruction at (ram,0x1047f246)
    */

void encode_exposure_value_bytes(void *param_1,uint8_t *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  if (param_5 < 0xfb0400) {
    uVar1 = param_5 / ((param_4 & 0xffff) * (param_3 & 0xffff)) & 0xffff;
    *param_2 = (char)((param_5 / param_4) % param_3);
    param_2[1] = (byte)((int)uVar1 >> 2) & 0xc0 | (char)(param_5 % param_4) + 1U & 0x3f;
    param_2[2] = (char)uVar1;
  }
  else {
    *param_2 = 0xfe;
    param_2[1] = 0xff;
    param_2[2] = 0xff;
  }
  return;
}

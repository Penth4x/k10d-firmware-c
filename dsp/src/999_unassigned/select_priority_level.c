/* @k10d select_priority_level @ 0x000d5008
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Returns a small integer (2 or 3) based on input value and two global flag bits.
 * summary:
 *   The function initializes a return value to 3. It checks bit 5 of DAT_0003ce01; if set,
 *   it compares param_1 against specific values (0xc, 0xd, 0x12, or >8) or checks bit 5 of
 *   DAT_0003cbd2 to potentially return 2 instead. The specific meaning of the input
 *   parameter and the global flags is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_priority_level(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 3;
  if ((DAT_0003ce01 & 0x20) != 0) {
    if (((param_1 == 0xc) || (param_1 == 0xd)) || (param_1 == 0x12)) {
      uVar1 = 2;
    }
    else if ((DAT_0003cbd2 & 0x20) == 0) {
      if (8 < param_1) {
        uVar1 = 2;
      }
    }
    else if ((((param_1 == 0) || (param_1 == 2)) ||
             ((param_1 == 3 || ((param_1 == 5 || (param_1 == 6)))))) || (param_1 == 8)) {
      uVar1 = 2;
    }
  }
  return uVar1;
}

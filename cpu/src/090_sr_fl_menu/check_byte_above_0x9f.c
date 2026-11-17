/* @k10d check_byte_above_0x9f @ 0x103feeac
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Returns 1 if param_1's byte at offset 0x58 is 0x08 and the first byte of param_2 is
 *   greater than 0x9f.
 * summary:
 *   The function performs a simple two-condition check. It first verifies that the byte at
 *   offset 0x58 in the structure pointed to by param_1 equals 0x08 (backspace character).
 *   It then checks if the first byte of the buffer pointed to by param_2 is greater than
 *   0x9f. If both conditions are met, it returns 1; otherwise, it returns 0. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_byte_above_0x9f(void *param_1,byte *param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((*(char *)((int)param_1 + 0x58) == '\b') && (0x9f < *param_2)) {
    uVar1 = 1;
  }
  return uVar1;
}

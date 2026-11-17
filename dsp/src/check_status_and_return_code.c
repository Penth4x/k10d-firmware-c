/* @k10d check_status_and_return_code @ 0x000f6fbc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Evaluates bits in DAT_0003c12e and DAT_0003ce06 to return a status code (0, 6, or 7).
 * summary:
 *   The function checks if bits 2 and 3 of DAT_0003c12e are clear. If so, it calls
 *   call_with_low_two_bits(0), potentially sets bit 7 of DAT_0003ce04, calls
 *   clear_status_flag_bits_000cca22, clears bits 0-2 of DAT_0003ce01, and returns 7.
 *   Otherwise, it checks bit 4 of DAT_0003c12e or bits 2-3 of DAT_0003ce06 to return 6. If
 *   neither condition is met, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_status_and_return_code(void)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((DAT_0003c12e & 0xc) == 0) {
    iVar2 = call_with_low_two_bits();
    if (iVar2 == 0) {
      DAT_0003ce04 = DAT_0003ce04 | 0x80;
    }
    clear_status_flag_bits_000cca22();
    DAT_0003ce01 = DAT_0003ce01 & 0xf8;
    uVar1 = 7;
  }
  else if (((DAT_0003c12e & 0x10) != 0) || (((DAT_0003ce06 & 4) == 0 && ((DAT_0003ce06 & 8) == 0))))
  {
    uVar1 = 6;
  }
  return uVar1;
}
